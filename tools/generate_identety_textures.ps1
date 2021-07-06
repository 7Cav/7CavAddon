
$projectRoot = Join-Path "$PSScriptRoot" "\.." -Resolve

New-Item -Path "$projectRoot" -Name "tmp" -ItemType "directory" -Force | Out-Null
$tmp         = Join-Path "$projectRoot" "tmp" -Resolve
$output      = Join-Path "$projectRoot" "\addons\identity\data" -Resolve


# files
$rankFiles    = Join-Path "$projectRoot" "\resources\uniform\rank" -Resolve
#$templateFile = Join-Path "$projectRoot" "\resources\uniform\empty_zone.png" -Resolve
$templateFile = Join-Path "$projectRoot" "\resources\uniform\empty.png" -Resolve


$nameList=
    "BROSTRÖM",
    "JARVIS",
    "SWEETWATER",
    "GEKI",
    "LIBER"

$rankList=
    "1SG",
    "CPL",
    "CSM",
    "MSG",
    "PFC",
    "PVT",
    "RCT",
    "SFC",
    "SGM",
    "SGT",
    "SPC",
    "SSG"


foreach ($_name in $nameList) {
    $_nameLable = $_name.ToUpper()
    $_tempFile  = Join-Path "$tmp" "$($_name.toLower()).png"
    convert $templateFile -font arial-bold -gravity North -pointsize 61 -annotate +0+90 "$_nameLable" $_tempFile
    foreach ($_rank in $rankList) {
        $_outputFileName   = "$($_name.toLower())_$($_rank.toLower())_ca"
        
        $_tempFilePNG      = "$($_outputFileName).png"
        $_tempPNGPath      = Join-Path "$tmp" "$_tempFilePNG"
        convert $_tempFile -font arial-bold -gravity CENTER -pointsize 61 -annotate +0+15 "U.S. ARMY" $_tempFile

        $_rankFile         = Join-Path "$rankFiles" "$_rank.png"
        $_tempRankFile     = Join-Path "$tmp" "$($_name.toLower())_$($_rank.toLower()).png"
        composite $_tempFile $_rankFile $_tempRankFile
        convert $_tempRankFile -depth 12 -colorspace Transparent PNG32:$_tempRankFile

        $_outputFilePAA    = "$($_outputFileName).paa"
        $_outputPAAPath    = Join-Path "$output" "$_outputFilePAA"
        ImageToPAA "$_tempRankFile" "$_outputPAAPath"
    }
}

#Remove-Item "$tmp" -Recurse -Force
