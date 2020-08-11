; fonte: https://stackoverflow.com/questions/4568306/outputting-hello-world-in-masm-using-win32-functions

.386
.model flat, stdcall
option casemap: none

include \masm32\include\windows.inc
include \masm32\include\user32.inc
include \masm32\include\kernel32.inc
includelib \masm32\lib\user32.lib
includelib \masm32\lib\kernel32.lib

.data
    szCaption   db  'Hello', 0
    szText      db  'Hello, World!', 0
.code
     
    start:
            push 0beefh
            pop ebp
	      mov ebx, 0b0b0cah
            xor ebx, ebx
            test eax, eax   
            mov eax, 0deadbeefh
            .if eax == 2017
                invoke MessageBox, NULL, offset szText, offset szCaption, MB_OK
            .endif
            invoke ExitProcess, NULL


    end start