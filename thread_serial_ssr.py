import threading
import queue
from ssr_sw_class2 import ssr_sw
from cross_corr_via_serial_2_class import cross_corr_serial
import RPi.GPIO as GPIO
import random

gpio=[11,12,13,15,16,18]
#
qu=[]
for i in range(0,len(gpio)):
  qu.append(queue.Queue())
qs=queue.Queue()
th=[]
for i in range(0,len(gpio)):
  th.append("")
for i in range(0,len(gpio)):
  qu[i].put(0)
qs.put(-1)
#
ssrs=[]
for i in range(0,len(gpio)):
  ssrs.append(ssr_sw(gpio[i]))
x=0/Volumes/pi's home/ssr_sw_class2.py
#
while True:
  try:
    if threading.active_count()==len(gpio)+2:
      continue
    elif threading.active_count()<len(gpio)+2:
      for i in range(0,len(gpio)):
        if qu[i].get()==0:
          t_on=random.randrange(2,5,1)
          t_off=random.randrange(1,5,1)
          th[i]=threading.Thread(target=ssrs[i].run,args=(t_on,t_off,qu[i]),daemon=True)
          th[i].start()
        ret=qs.get()
        if ret!=0:
          ccs=cross_corr_serial("/dev/ttyACM0",19200)
          ths=threading.Thread(target=ccs.cross_corr,args=(x,qs),daemon=True)
          ths.start()
          qs.put(0)
          if ret>=0:
            print(ret)
        else:
          qs.put(0)
    else:
       continue
#
  except KeyboardInterrupt:
    print("Keyboard Interrupt")
    GPIO.cleanup()
#    ccs.close()
    exit()
