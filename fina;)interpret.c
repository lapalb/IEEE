#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define IADD 0x60
#define ISUB 0x64
#define IMUL 0x68
#define IDIV 0x6C
#define ILOAD 0x10
struct stack{
	int top;
	int eval[10];
}exec_stack;

void push(int arg){
		exec_stack.eval[exec_stack.top++] =arg;}	
		
int pop(){
		return exec_stack.eval[--exec_stack.top];}	
		
		
FILE *fp=0;
int ip(FILE *fp){
		typedef unsigned char byte;
		byte bytecode;
		fread(&bytecode,1,1,fp);
		int l=0,r=0;
		while(!feof(fp)){			
		
			switch(bytecode){
				case IADD:r=pop();l=pop();push(l+r); break;
				case ISUB:r=pop();l=pop();push(l-r); break;
				case IMUL:r=pop();l=pop();push(l*r); break;
				case IDIV:r=pop();l=pop();push(l/r); break;
				case ILOAD: {
				fread(&bytecode,1,1,fp);
				push(bytecode);
				//printf("ILOAD %d \n",bytecode); break;
				}
				}
			fread(&bytecode,1,1,fp);
	}
	return pop();
}
int main()
{
	fp=fopen("bcode.swebok","rb");
	printf("Execution result is %d",ip(fp));
	fclose(fp);
}
	
