@echo off
REM 删除临时文件夹
rd /s /q C:\Users\%USERNAME%\AppData\Local\Temp\*.*
rd /s /q C:\Documents and Settings\%USERNAME%\Local Settings\temp\*.*
rd /s /q C:\Windows\Temp\*.*

REM 创建新的临时文件夹
md D:\Temp

REM 设置环境变量
setx TEMP D:\Temp
setx TMP D:\Temp

REM 十分简洁(^▽^)