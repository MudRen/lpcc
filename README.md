## LPCC

LPC代码编译调试项目，使用方式：

    lpcc config.ini <你的代码文件>

如在项目根目录新建文件`test.c`：

```c
void create()
{
    debug(__FILE__);
}
```

编译运行：`lpcc config.ini test`

```
➜  lpcc git:(master) ✗ lpcc config.ini test
Processing config file: config.ini
New Debug log location: "log/debug.log".
Initializing internal stuff ....
Event backend in use: epoll
Loading simul_efun file : kernel/simulated_efun
Loading master file: kernel/master
"/test.c"
NAME: /test.c
INHERITS:
      name                    fio    vio
      ----------------        ---    ---
FUNCTIONS:
      name                  offset  mods   flags   fio  # locals  # args
      --------------------- ------  ----  -------  ---  --------  ------
   0: create                     0   +--  --s----              0       0

;;; test.c

VARIABLES:
STRINGS:
   0: test.c
   1: include/globals.h
   2: /test.c
DISASSEMBLY:

;; Function: void create()
0000:  0E 02                     short_string        ; "/test.c"
0002:  71 00 00 01               simul_efun          ; "debug" args: 1
0006:  01                        pop                 ;
0007:  2F                        return_zero         ;
; test.c:3

;;;  *** Line Number Info ***

absolute line -> (file, line) table:
0 lines from 1 [test.c]
1 lines from 2 [include/globals.h]
5 lines from 1 [test.c]

address -> absolute line table:
0000-0007: 4
Trace duration: 7007.700000 us, dumping 29 events to trace_lpcc.json in separate thread.
[thread 139666774755072d]: Dump trace successfully to file trace_lpcc.json, cost 0 ms.

```