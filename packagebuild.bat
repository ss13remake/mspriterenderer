REM @echo off
set zip="C:\Program Files\7-Zip\7z.exe"
set hour=%time:~0,2%
if "%time:~0,1%"==" " set hour=0%time:~1,1%
set dt=%date:~10,4%-%date:~4,2%-%date:~7,2%_%hour%%time:~3,2%
set dir=mspriterenderer-%dt%
mkdir %dir%
IF NOT EXIST MSpriteRenderer\bin\net-4.0-x86\Release\output goto nooutdir
rmdir /S /Q MSpriteRenderer\bin\net-4.0-x86\Release\output
:nooutdir
xcopy /E MSpriteRenderer\bin\net-4.0-x86\Release\* %dir%
cd %dir%
del *.pdb
del *.log
RMDIR /S /Q output
cd ..
%zip% -tzip a %dir%.zip %dir%
rd /S /Q %dir%
pause