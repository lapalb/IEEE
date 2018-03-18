#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define IADD 0x60
#define ISUB 0x64
#define IMUL 0x68
#define IDIV 0x6C
#define ILOAD 0x10

FILE *fp=0;
int main()
{
	fp=fopen("bcode.swebok","rb");
	typedef unsigned char byte;
	byte bytecode;
	
	while(!feof(fp)){
			fread(&bytecode,1,1,fp);
			printf("%x\n",bytecode);
	}
	fclose(fp);
}
	
