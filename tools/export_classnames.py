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
        addonList.append(dir)
    return addonList

def get_addon_files(addon=''):
    addonFiles = os.listdir(rootDir + '/addons/' + addon)
    return addonFiles

def main():
    addons = get_addons()
    data = {}

    for addon in addons:
        data[addon] = []
        addonFiles = get_addon_files(addon)
        for file in addonFiles:
            if file == 'CfgVehicles.hpp':
                cfgFile = open(rootDir + '/addons/' + addon + '/' + file , 'r')
                CfgVehicles = cfgFile.read()
                classnames = re.findall('%s(.*)%s' % ('class', ':'), CfgVehicles)
                for classname in classnames:
                    classname = classname.strip()
                    blacklist = [
                        'Turrets','FrontTurret','RearTurret','EventHandlers','CBA_Extended_EventHandlers','MainTurret','CopilotTurret','CopilotTurret','CommanderOptics','FrontGunner','Commander_Out','AT_Turret','LMG_Turret','CargoTurret_01','CargoTurret_02','CargoTurret_03','CargoTurret_04','CargoTurret_05','CargoTurret_06','CargoTurret_07','CargoTurret_08','CargoTurret_09','CargoTurret_10','CargoTurret_11','CargoTurret_12','CargoTurret_13','CargoTurret_14','CargoTurret_15','CargoTurret_16',                        'CommanderOptics2','GPMGTurretBMD2','LeftBack2','RightBack2','MainBack2','CommanderOptics2','GPMGTurretBMD2','LeftBack2','RightBack2','MainBack2','OPF_AFRF_BMP','GPMGTurret1','GPMGTurret2','AGS_Turret',
                        ]
                    if classname in blacklist:
                        continue
                    data[addon].append(classname)
    print(json.dumps(data))

if __name__ == "__main__":
    sys.exit(main())
