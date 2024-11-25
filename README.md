# thread-serial-ssr

## cross_corr_via_serial_2_class.py
thread: reading serial (logger) and calculatig cross correlation

## index_sub.py
find index of max value of array called from cross_corr_via_serial_2_class.py

## ssr_sw_class2.py
thread: switching GPIO

GPIO: 11,12,13,15,16,18

## thread_serial_ssr.py
main program calling ssr_sw_class2.py and cross_corr_via_serial_2_class.py

## logger_simulator_01.ino
logger simulator

![image](https://github.com/user-attachments/assets/02bf1b21-be41-47a1-9942-726dceb690a4)

## references
threading --- スレッドベースの並列処理 — Python 3.13.0 ドキュメント
https://docs.python.org/ja/3.13/library/threading.html

queue --- 同期キュークラス — Python 3.13.0 ドキュメント
https://docs.python.org/ja/3/library/queue.html
