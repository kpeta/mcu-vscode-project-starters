. $HOME/esp/esp-idf/export.sh
#idf.py fullclean
#rm -r build
#rm sdkconfig*
idf.py menuconfig
idf.py -p /dev/ttyUSB0 flash monitor

