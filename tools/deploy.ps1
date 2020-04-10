# Set version
$tagVersion = git describe --tags --abbrev=0
Write-Host "Build version $tagVersion"

$version = $tagVersion.Split(".")
$versionMajor = $version[0]
$versionMinor = $version[1]
$versionPatch = $version[2]
$versionBuild = 0

sed -e "s/DevBuild/$tagVersion/g" "../mod.cpp" | Set-Content "../mod.cpp"

Set-Content -Path '../addons/main/script_version.hpp' -Value "#define MAJOR $versionMajor
#define MINOR $versionMinor
#define PATCHLVL $versionPatch
#define BUILD $versionBuild"

# Build release
py make.py release

# Clean up
git checkout origin/master ../addons/main/script_version.hpp
git checkout origin/master ../addons/main/mod.cpp
