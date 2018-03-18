#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define IADD 0x60
#define ISUB 0x64
#define IMUL 0x68
#define IDIV 0x6C
#define ILOAD 0x10

typedef struct ExprNode{
        struct ExprNode *left;
        char data[10];
        struct ExprNode *right;
}ExprNode;
FILE *fp=0;

void postordertraversal(ExprNode * node)
{
        if(node!=0)
        {
                postordertraversal(node->left);
                postordertraversal(node->right);
                typedef unsigned char byte;
                byte bytecode;
                if(strcmp(node->data,"+")==0)
                {
                	bytecode=IADD;
                
        		}else if(strcmp(node->data,"*")==0)
                {
                	bytecode = IMUL;
                
        		} else if(strcmp(node->data,"-")==0)
                {
                	bytecode=IDIV;
                
        		} else if(strcmp(node->data,"/")==0)
                {
                	bytecode=IDIV;
                
        		}else if(atoi(node->data)!=0)
                {
                	bytecode=ILOAD;
                	fwrite(&bytecode,1,1,fp);
                	bytecode=atoi(node->data);
                
        		}fwrite(&bytecode,1,1,fp);
}}



int main(){
        ExprNode tree[]={{tree+1,"+",tree+2},{tree+3,"*",tree+4},{tree+5,"/",tree+6},{0,"10",0},{0,"20",0},{0,"30",0},{0,"10",0},
        };
        fp=fopen("bcode.swebok","wb");
        
        postordertraversal(tree);
        
		fclose(fp);
        }
