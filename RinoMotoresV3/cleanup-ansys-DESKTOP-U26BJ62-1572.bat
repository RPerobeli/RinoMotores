@echo off
set LOCALHOST=%COMPUTERNAME%
if /i "%LOCALHOST%"=="DESKTOP-U26BJ62" (taskkill /f /pid 18540)
if /i "%LOCALHOST%"=="DESKTOP-U26BJ62" (taskkill /f /pid 1572)

del /F cleanup-ansys-DESKTOP-U26BJ62-1572.bat
