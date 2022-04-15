compile:
	gcc *.c *.h -Wall -g -o run

compile-windows:
	x86_64-w64-mingw32-gcc *.c *.h -o run.exe
