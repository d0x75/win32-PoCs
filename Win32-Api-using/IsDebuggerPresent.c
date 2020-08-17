#include<windows.h>

main(void){
	
	if(!IsDebuggerPresent()){
		MessageBoxA(
			NULL,
			"Malware rodando",
			"MALICIUS SOFTWARE",
			0
			);
	}
	
	return 0;
	
}
