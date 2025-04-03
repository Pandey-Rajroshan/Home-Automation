try:
    import usocket as socket
except:
    import socket

from machine import Pin
import network

import esp 
esp.osdebug(None)

import gc 
gc.collect()

ssid = 'SSID name'
password = 'Password'

station = network.WLAN(network.STA_IF)

station.active(True)
station.connect(ssid,password)

while station.isconnected() == False:
    pass

print('Connection Successful')
print(station.ipconfig())

relay = Pin(5,Pin.OUT)