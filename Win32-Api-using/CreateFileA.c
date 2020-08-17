#include<windows.h>

int main()
	{
		HANDLE h = CreateFile(
		"C:\\err.txt",
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		CREATE_NEW,
	    FILE_ATTRIBUTE_TEMPORARY,
		NULL);

		}
