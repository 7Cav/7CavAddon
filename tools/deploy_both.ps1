if ( ![bool](Test-Path -Path "P:") ) {
     Write-Host "Arma 3 P: is not mounted..." -ForegroundColor Red
     exit 1
}

cd $PSScriptRoot\..

# Clear folder
Remove-Item releases -Force -Recurse -ErrorAction 'silentlycontinue'

$tagVersion = git describe --tags --abbrev=0
Write-Host "Build release versions for tag $tagVersion" -ForegroundColor Yellow

$version = $tagVersion.Split(".")
$versionMajor = $version[0]
$versionMinor = $version[1]
$versionPatch = $version[2]
$versionBuild = 0

# Set version
Write-Host "Build both Hemtt and PBO Project Releases" -ForegroundColor Blue

# Hemtt
Write-Host "Build Hemtt" -ForegroundColor Blue
cd $PSScriptRoot
.\deploy.ps1

# Rename hemtt zip
cd $PSScriptRoot\..

Write-Host "Renaming and saving hemtt release in temp"
New-Item -ItemType Directory -Path tools\temp -Force >$null 2>&1
Rename-Item -Path .\releases\7CavAddon_$tagVersion.zip -NewName 7CavAddon_$tagVersion-hemtt.zip
Move-Item -Path .\releases\7CavAddon_$tagVersion-hemtt.zip -Destination .\tools\temp\.


# Pbo Project
Write-Host "Build Pbo Project" -ForegroundColor Blue
cd $PSScriptRoot
.\deploy_legacy.ps1
cd $PSScriptRoot\..

# Rename hemtt zip
Rename-Item -Path .\releases\7CavAddon_$tagVersion.zip -NewName 7CavAddon_$tagVersion-pboProject.zip
Move-Item -Path .\tools\temp\7CavAddon_$tagVersion-hemtt.zip -Destination .\releases\.
Remove-Item .\tools\temp -Force -Recurse -ErrorAction 'SilentlyContinue'