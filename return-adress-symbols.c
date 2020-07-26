#include <stdio.h>
#include <windows.h>

 
typedef void (*MYPROC);

int main(void)

{

HINSTANCE h;
MYPROC ProcAdd;

h = LoadLibrary("c:\\Windows\\system32\\ntdll.dll");


if (h != NULL){

	printf("\n DLL VALIDA !!\n");
}

else
	printf("\n DLL INVALIDA =( \n");
	
ProcAdd = (MYPROC) GetProcAddress(h, "NtAccessCheck");

if (ProcAdd != NULL){

	printf("The function address is valid: %p\n\n", ProcAdd);
}

return 0;


}
