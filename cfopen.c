#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp =fopen("Code.class","rb");
	int magicnumber =0;
	fread(&magicnumber ,4,1,fp);
	printf("%x",magicnumber);
}
