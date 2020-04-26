#!/usr/bin/env python3
import sys, os, re, json

__version__ = 1.0

# set projecty path
scriptPath = os.path.realpath(__file__)
scriptDir = os.path.dirname(scriptPath)
rootDir = os.path.dirname(os.path.dirname(scriptPath))
os.chdir(rootDir)

def strip_path_from_filename(pathfile=''):
    filenamepath = pathfile.split('/')
    filename = filenamepath[-1]
    filename = str(filename)
    return filename

def get_addons():
    addonDir = os.listdir(rootDir + '/addons')
    addonList = []
    for dir in addonDir:
        if "faction_" in dir:
            continue
        addonList.append(dir)
    addonList = [addon.title() for addon in addonList]
    return addonList

def get_addon_files(addon=''):
    addonFiles = os.listdir(rootDir + '/addons/' + addon)
    return addonFiles

def main():
    addons = get_addons()
    
    requestedStrings = {}
    existingStrings = {}
    missingStrings = {}
    errors = 0

    for addon in addons:
        requestedStrings[addon] = []
        existingStrings[addon] = []

        addonFiles = get_addon_files(addon)
        for file in addonFiles:
            if '.hpp' in file:
                cfgFile = open(rootDir + '/addons/' + addon + '/' + file , 'r')
                CfgVehicles = cfgFile.read()
                strings = re.findall('%s(.*)%s' % ('displayName =', ';'), CfgVehicles)
                for string in strings:
                    string = string.strip()
                    if "var1" in string:
                        continue
                    if "CSTRING" in string:
                        string = string.strip('CSTRING')
                        string = string.strip('()')
                        string = "STR_cav_{}_{}".format(addon,string)
                    requestedStrings[addon].append(string)
            if file == 'stringtable.xml':
                cfgFile = open(rootDir + '/addons/' + addon + '/' + file , 'r')
                stringtable = cfgFile.read()
                strings = re.findall('%s(.*)%s' % ('<Key ID="', '"'), stringtable)
                for string in strings:
                    string = string.strip()
                    existingStrings[addon].append(string)

    for addon, values in requestedStrings.items():
        missingStrings[addon] = []
        for string in values:
            if string in existingStrings[addon]:
                continue
            missingStrings[addon].append(string)
            errors += 1

    if errors >= 1:
        for addon, values in missingStrings.items():
            if values == []:
                continue
            print(addon)
            for string in values:
                print("  {:3}{}".format(">", string))
        exit("\nTotal of {} missing strings.".format(errors))
    
    print("No missing strings")
        
if __name__ == "__main__":
    sys.exit(main())
