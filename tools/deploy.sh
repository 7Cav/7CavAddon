#!/bin/bash

# Set version
tagVersion=$(git describe --tags --abbrev=0)
echo "Build version $tagVersion"

versionMajor = $tagVersion | cut -d. -f1
versionMinor = $tagVersion | cut -d. -f2
versionPatch = $tagVersion | cut -d. -f3
versionBuild = 0



sed -e "s/DevBuild/$tagVersion/g" "mod.cpp" > .hemtt/project.toml

sed -e "s/major = 0/major = $versionMajor/g" ".hemtt/project.toml" > .hemtt/project.toml
sed -e "s/minor = 0/minor = $versionMinor/g" ".hemtt/project.toml" > .hemtt/project.toml
sed -e "s/patch = 0/patch = $versionPatch/g" ".hemtt/project.toml" > .hemtt/project.toml
sed -e "s/build = 0/build = $versionBuild/g" ".hemtt/project.toml" > .hemtt/project.toml

hemtt.exe release

# Clean up
#echo "Restoring version files..."
#git checkout origin/master mod.cpp
#git checkout origin/master .hemtt/project.toml
