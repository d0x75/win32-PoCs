#include<windows.h>
#include<stdio.h>

main(void){
	
	GetModuleHandleA("user32.dll");
	printf("%x",GetLastError());

};
