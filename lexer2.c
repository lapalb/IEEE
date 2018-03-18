#include<stdio.h>
#define OPEN_PAREN 0x10
#define CLOSE_PAREN 0x20
#define MULTIPLY 0x30
#define DIVIDE 0x40
#define ADD 0x50
#define EOT 0x80
#define SUBTRACT 0x60
#define INT_CONST 0x70

typedef unsigned char token;
token next_token(char *buff){
	
}

int main(int argc, char *argv[])
{
	if(argc<=1){
		printf("Error: Missing input file\n");
	}
	else{
			char *filename=argv[1];
			FILE *fp=fopen(filename,"r");
			char buffer[100]={0};
			char ch=0;int loc=0;
			fread(&ch,1,1,fp);
			while(!feof(fp)){
					buffer[loc++]=ch;
					fread(&ch,1,1,fp);
					}
					token token =0;
			while(token!=EOT){
					char *buff_ptr=buffer;
					token=next_token(buffer,buff_ptr)
					printf("%x\n",token);
					printf("%s",buffer);
					}
					
					
			/*fscanf("s"buffer);)
			char ch;
			fread(&ch,1,1,fp);
			do
			{
				printf("%c",ch);
				fread(&ch,1,1,fp);
				
				}while(!feof(fp));
			printf("%s\n",filename);*/
	}
	
		
}
