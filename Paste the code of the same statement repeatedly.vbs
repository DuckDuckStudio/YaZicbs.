Set WshShell = WScript.Createobject("WScript.Shell")
for i = 1 to 2      REM 重复粘贴的次数（Number of times to paste repeatedly）
  WScript.Sleep 30  REM 暂停的时间（Pause time）
  WshShell.SendKeys"^v"  REM 粘贴（paste）
  wshShell.SendKeys"{ENTER}"  REM 回车（Enter）
next  REM 重新进行循环（Cycle again）
REM 使用说明：在使用前需要把你想粘贴的东西复制一下，然后打开脚本后迅速点开你要粘贴的地方，这个操作不分敌我，所以在粘贴的时候如果打开了其他的会话窗口，哦豁完蛋。
REM 声明：本代码仅供学习使用。
REM Instructions: before use, you need to copy what you want to paste, and then open the script and quickly click the place you want to paste. This operation does not distinguish between us and the enemy, so if you open other session windows during pasting, oh, it's over.
REM Declaration: this code is for learning only.
REM 在运行时可以把以REM开头的代码删掉。（例如本行）
REM You can delete the code beginning with REM at run time. 
