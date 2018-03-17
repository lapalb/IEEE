#include<bits/stdc++.h>
using namespace std;
int change_endian(unsigned short val){

}
typedef unsigned short u2;
u2 ce(u2 val)
{

return (( val & 0xFF00) >>8) | ((val & 0x00FF)<<8);
}
int main()
{
	FILE *fp =fopen("Code.class","rb");
	unsigned char magicnumber =0;
	fread(&magicnumber ,1,1,fp);
	printf("%x\t",magicnumber);
	
	
	fread(&magicnumber ,1,1,fp);
	printf("%x\t",magicnumber);
	

	fread(&magicnumber ,1,1,fp);
	printf("%x\t",magicnumber);
	

	fread(&magicnumber ,1,1,fp);
	printf("%x\n",magicnumber);
	
	unsigned short minor_version =0;
	
	fread(&minor_version ,2,1,fp);
	printf("%x\n",minor_version);
	
	unsigned short major_version =0;
	
	fread(&major_version ,2,1,fp);
	printf("%x\n",ce(major_version));
}
