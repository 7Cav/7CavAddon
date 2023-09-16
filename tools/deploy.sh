#!/bin/bash

SCRIPTPATH=`dirname $(readlink -f $0)`
cd $SCRIPTPATH

# Set version
tagVersion=$(git describe --tags --abbrev=0)
echo "Build version $tagVersion"

versionMajor=$(echo "$tagVersion" | cut -d. -f1)
versionMinor=$(echo "$tagVersion" | cut -d. -f2)
versionPatch=$(echo "$tagVersion" | cut -d. -f3)
versionBuild=0


cd ..
sed -i "s/DevBuild/$tagVersion/g" "mod.cpp"

sed -i "s/major = 0/major = $versionMajor/g" ".hemtt/project.toml"
sed -i "s/minor = 0/minor = $versionMinor/g" ".hemtt/project.toml"
sed -i "s/patch = 0/patch = $versionPatch/g" ".hemtt/project.toml"
sed -i "s/build = 0/build = $versionBuild/g" ".hemtt/project.toml"

hemtt release

cd releases
echo "Unziping archive"
unzip cav-latest.zip
rm *.*
echo "Renamed folder"
mv @cav @7CavAddon
echo "Ziping archive"
zip 7CavAddon_$tagVersion-hemtt.zip -r @7CavAddon
rm -rf releases
cd ..

# Clean up
#echo "Restoring version files..."
#git checkout origin/main mod.cpp
#git checkout origin/main .hemtt/project.toml
