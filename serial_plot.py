import time
import serial
from pylab import *
import sys

y1=[0]*100
y2=[0]*100
x=range(0, 100, 1)
ser=serial.Serial(sys.argv[1],19200)
while True:
  try:
    line=ser.readline()
    line2=line.strip().decode('utf-8',errors='replace')
    y1.insert(0, line2[1])
    y2.insert(0, line2[2])
    y1.pop(100)
    y2.pop(100)
    clf()
    ylim(-10,10)
    plot(x,y1)
    plot(x,y2)
    pause(0.05)
  except KeyboardInterrupt:
    ser.close()
    print ('exiting')
    exit()