#!/bin/bash

pushd src

python build/linux/sysroot_scripts/install-sysroot.py --arch=arm

gn gen out/arm_4606 --args='is_debug=false  enable_iterator_debugging=false   treat_warnings_as_errors=false rtc_include_tests=false target_os="linux"  target_cpu="arm" is_clang=true rtc_exclude_audio_processing_module=true rtc_use_h264=true ' 

popd


