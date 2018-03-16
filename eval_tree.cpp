#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ExprNode{
        struct ExprNode *left;
        char data[10];
        struct ExprNode *right;
}ExprNode;

void postordertraversal(ExprNode * node)
{
        if(node!=0)
        {
                postordertraversal(node->left);
                postordertraversal(node->right);
                printf("%s ",node->data);
                
        }
}
int eval(ExprNode * node)
{
if(node==0)
return 0;
else if (node->left==NULL && node->right==NULL) return (atoi(node->data));
else{
        int left= eval(node->left) ;
        int right= eval(node->right);
        if(strcmp(node->data,"+")==0)
        
                return left + right;
        
        else if(strcmp(node->data,"*")==0)
                return left * right;
           else if(strcmp(node->data,"/")==0)
                   return left / right;
           
           
}}


int main(){
        ExprNode tree[]={{tree+1,"+",tree+2},{tree+3,"*",tree+4},{tree+5,"/",tree+6},{0,"10",0},{0,"20",0},{0,"30",0},{0,"10",0},
        };
        
        postordertraversal(tree);
        printf("%d \n" ,eval(tree));
}
