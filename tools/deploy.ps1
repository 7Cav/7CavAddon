cd $PSScriptRoot
cd ..

# Set version
$tagVersion = git describe --tags --abbrev=0
Write-Host "Build version $tagVersion" -ForegroundColor yellow

$version = $tagVersion.Split(".")
$versionMajor = $version[0]
$versionMinor = $version[1]
$versionPatch = $version[2]
$versionBuild = 0

sed -e "s/DevBuild/$tagVersion/g" "mod.cpp" | Set-Content "mod.cpp"

sed -e "s/major = 0/major = $versionMajor/g" ".hemtt/project.toml" |  Set-Content ".hemtt/project.toml"
sed -e "s/minor = 0/minor = $versionMinor/g" ".hemtt/project.toml" |  Set-Content ".hemtt/project.toml"
sed -e "s/patch = 0/patch = $versionPatch/g" ".hemtt/project.toml" |  Set-Content ".hemtt/project.toml"
sed -e "s/build = 0/build = $versionBuild/g" ".hemtt/project.toml" |  Set-Content ".hemtt/project.toml"

hemtt.exe release

# Clean up
Write-Host "Restoring version files..."
git checkout origin/master mod.cpp
git checkout origin/master .hemtt/project.toml
