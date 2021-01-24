#!/bin/bash

#sed -i "s/#define VERSION.*/#define VERSION \"${VERSION_TAG}\"/" ../addons/main/script_version.hpp

hemtt build --release --ci
hemtt build zip