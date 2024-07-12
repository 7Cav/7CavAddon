<p align="center">
<img src="https://github.com/7Cav/7CavAddon/blob/main/resources/logo.png?raw=true" width="600">
</p>
<p align="center">
<a href="https://github.com/7Cav/7CavAddon/releases/latest"><img src="https://img.shields.io/github/release/7Cav/7CavAddon.svg?style=for-the-badge&label=Release%20Build" alt="Release Build Version"></a>
 <a href="https://github.com/7Cav/7CavAddon/releases/"><img src="https://img.shields.io/github/release/7Cav/7CavAddon/all.svg?style=for-the-badge&label=Pre-release" alt="Pre release and or current build version"></a>
 <a href="https://github.com/7Cav/7CavAddon/tags"><img src="https://img.shields.io/github/tag/7Cav/7CavAddon.svg?style=for-the-badge&colorB=df2d00&label=Latest%20Tag" alt="Dev-build or the latest tag of the current build."></a><br>
 <a href="https://github.com/7Cav/7CavAddon/releases/latest"><img src="https://img.shields.io/github/downloads/7cav/7CavAddon/total.svg?style=for-the-badge&label=Downloads" alt="7CavAddon Downloads"></a>
 <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=1696706969"><img src="https://img.shields.io/endpoint.svg?url=https%3A%2F%2Fshieldsio-steam-workshop.jross.me%2F1696706969&style=for-the-badge" alt="Steam Workshop"></a>
 <a href="https://github.com/7Cav/7CavAddon/issues"><img src="https://img.shields.io/github/issues-raw/7cav/7CavAddon.svg?style=for-the-badge&label=Issues" alt="7CavAddon Issues"></a>
<a href="https://github.com/7Cav/7CavAddon/actions?query=workflow%3AArma"><img src="https://img.shields.io/github/actions/workflow/status/7Cav/7CavAddon/arma.yml?logo=GitHub&style=for-the-badge" alt="cScripts Build"></a>
</p>
The 7th Cavalry Community Addon is as the name suggests a community mod containing units vehicles, markers, functions and textures tailored to our community.

## Required Addons
- [CBA](https://github.com/CBATeam/CBA_A3)
- [ACE3](https://github.com/acemod/ACE3)
- [RHS: United States Armed Forces](http://www.rhsmods.org/)

## Whats Added
- New Units and Groups with company with callsign specific prefixes.
- New vehicle the Dragoon (A retextured and reconfigured [AFV-4 Gorgon](https://community.bistudio.com/wiki/Arma_3:_Field_Manual_-_Vehicles_Info#AFV-4_Gorgon)).
- 7th Cavalry themed spray tags using ACE3 tagging.
- 7th Cavalry battalion company platoon and squad themed arm patches.
- 7th Cavalry battalion company platoon and squad themed flags.
- 7th Cavalry themed map markers and flags as well as cav gold map color.
- Main menu buttons for quickly joining our servers.
- [Experimental Prone Launchers](https://github.com/7Cav/7CavAddon/issues/161).
- [Dynamic Objective mission training script system](https://github.com/7Cav/7CavAddon/tree/main/addons/dynobj).
- [Some useful missions functions](https://github.com/7Cav/7CavAddon/wiki/Features#mission-makers)

## Development
This mod uses [HEMTT](https://github.com/BrettMayson/HEMTT/) build system.

### Testing and Development
```bash
# Build and launch Arma with minimal required mods.
hemtt launch

# Build for manual launch
hemtt dev
```
### Build and Release
```bash
# Build a test release build
hemtt build

# Build release
./tools/deploy.ps1
```