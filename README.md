
temperature monitoring by http using esp32
pins designed for esp32wrover board
using temperature sensors Dallas DS18B20, 3 wire cable and Dallas sensors in paraller connecting, so possible use only one cable with a lot of sensors (4 sensors in this design)
communication via wifi, wifi connection is necessary to set in passwords.h (rename passwords.h.temp and edit)
Primarily it  exposing webpage with temperatures on own webserver running on device (http://device_ip_address) with feature to send temperature data to cloud https://tmep.cz

*Jiri Liska, Trebon, CZ*


