# LeetCode problems are in [LeetCode](./LeetCode/) folder.
LeetCode problems solutions.

# QuakeFastSqrt
Is a folder with an app with quick Sqrt function that was implemented in Quake game. Really nice one!

# [AddNumbersWSLProgram](./AddNumbersWSLProgram/)
Keeps a code of simple `c` application that you can build and run in `wsl` for windows.
You have to install `mingw-64`, notice that it is not gcc, because gcc produces output in `elf` format and wsl still runs on `windows` fs and that's why we are using `mingw-64` which is a cross platform compiler and instead of targeting libs that exists in linux it can target libs that exist on windows like `MSVCRT.DLL`. Before installing you need to update apt-get otherwise it will not be able to find mingw-w64 package :)
`sudo apt-get update -y`  
`sudo apt-get install mingw-w64`  

For windows 32bit to compile run
`i686-w64-mingw32-gcc -o main32.exe addNumbers.c`

For windows 64bit to compile run
`x86_64-w64-mingw32-gcc -o main64.exe addNumbers.c`

