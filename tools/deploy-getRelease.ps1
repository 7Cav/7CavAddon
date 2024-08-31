# Download latest dotnet/codeformatter release from github
# https://gist.github.com/MarkTiedemann/c0adc1701f3f5c215fc2c2d5b1d5efd3

$version = $args[0]

$repo = "7Cav/7CavAddon"
$file = "7CavAddon-$version.zip"

$releases = "https://api.github.com/repos/$repo/releases"

Write-Host "Looking for $version..."
$releases = (Invoke-WebRequest $releases | ConvertFrom-Json)
forEach ($tagName in $releases ) {
    $tagName = $tagName[0].tag_name
    $tag = if ( "$version" -eq "$tagName" ) {
        return "$tagName"
    } else {
        "false"
    }
}
if ( "$tag" -eq "false") {
    Write-Error "No release tag $version detected"
    exit 1
}
Write-Host "Release $tag found..."

download = "https://github.com/$repo/releases/download/$tag/$file"
name = $file.Split(".")[0]
zip = "$name-$tag.zip"
dir = "$name-$tag"

#Write-Host Dowloading latest release
Invoke-WebRequest $download -Out $zip
#
#Write-Host Extracting release files
Expand-Archive $zip -Force

Get-ChildItem -Path . -ErrorAction SilentlyContinue
Get-ChildItem -Path $dir -ErrorAction SilentlyContinue
