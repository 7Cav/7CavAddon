#!/usr/bin/env python3

# requires python-resize-image (PIL)
# pip install python-resize-image

import os
import sys
from resizeimage import resizeimage
from PIL import Image

__version__ = 0.1

######## GLOBALS #########
DIRECTORY = "C:\\Users\\andre\\OneDrive\\Dokument\\Arma 3 - Other Profiles\\Camera\\Screenshots\\EditorPreviews\\@BlackOrder"
SIZE = [455,256]
##########################

# Sets up arguments
PARAMS = sys.argv
paramsList = ["-config"]
param_config = [paramsList[0],"creates and add each object to a config file"]

def main():
    print("""
Editor Preview Image Creator {}
This script resize and convert the Arma 3 Snapshots to correct size and format.
Created by: Andreas Brostrom | Evul <andreas.brostrom.ce@gmail.com>
    """.format(__version__))

    if "-h" in PARAMS or "--help" in PARAMS:
        print("usage: {}".format(sys.argv[0]),end=' ')
        for p in paramsList:
            print("[{}]".format(p),end=' ')
        print("[-h, --help]\n")
        print("optional arguments:\n -h, --help   show this help message and exit")
        print(" {}      {}".format(param_config[0],param_config[1]))
        sys.exit()

    os.chdir(DIRECTORY)
    imageList = [f for f in os.listdir(DIRECTORY) if os.path.isfile(os.path.join(DIRECTORY, f)) and ".png" in f]


    if len(imageList) >= 1:
        print("Found {} images".format(len(imageList)))
    else:
        sys.exit("No image files could be found in directory:\n\"{}\"\n\nPlease check the path or consult the BIS guide for how to set up Eden Preview images:\nhttps://community.bistudio.com/wiki/Eden_Editor:_Configuring_Asset_Previews".format(DIRECTORY))
    print("Prepering resize")

    for pic in imageList:
        print ('resizing "{}" to {}x{}'.format(pic,SIZE[0],SIZE[1]))

        with open(pic, 'r+b') as f:
            with Image.open(pic) as image:
                # resizing
                cover = resizeimage.resize_cover(image, [SIZE[0],SIZE[1]])
                cover.save(pic, image.format)
                # converting image
                with Image.open(pic) as image:
                    print("Converting and saving {} [{}] to jpg".format(pic[:-4],cover.mode))
                    cover = image.convert('RGB')
                    cover.save('{}.jpg'.format(pic[:-4]), quality=95)
                    print("{}.jpg [{}] is converted and saved".format(pic[:-4],cover.mode))

    # Remove png
    for file in imageList:
        print("Removing {}".format(file))
        os.remove(file)
    print("All files are replaced with jpg")

    # Create config
    if "-config" in PARAMS:
        print("Creating config file")
        configFile = open('EditorPreview.hpp', 'w')
        configFile.write('class CfgVehicles'+' {\n')
        for file in imageList:
            print("Writing and adding class \"{}\" to config".format(file[:-4]))
            configFile.write('    class {}'.format(file[:-4])+' {\n')
            configFile.write('        QPATHTOF(EditorPreviews\\{}.jpg);\n'.format(file[:-4]))
            configFile.write('    };\n')
        configFile.write('};\n')
        configFile.close()
        print("Config created")
if __name__ == "__main__":
    sys.exit(main())
