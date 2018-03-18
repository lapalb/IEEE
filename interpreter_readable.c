#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define IADD 0x60
#define ISUB 0x64
#define IMUL 0x68
#define IDIV 0x6C
#define ILOAD 0x10

FILE *fp=0;
int ip(FILE *fp){
		typedef unsigned char byte;
		byte bytecode;
		fread(&bytecode,1,1,fp);
		while(!feof(fp)){			
		
			switch(bytecode){
				case IADD: printf("IADD\n"); break;
				case ISUB: printf("ISUB\n"); break;
				case IMUL: printf("IMUL\n"); break;
				case IDIV: printf("IDIV\n"); break;
				case ILOAD: {
				fread(&bytecode,1,1,fp);
				printf("ILOAD %d \n",bytecode); break;
				}
				}
			fread(&bytecode,1,1,fp);
	}
}
int main()
{
	fp=fopen("bcode.swebok","rb");
	ip(fp);
	fclose(fp);
}
	
