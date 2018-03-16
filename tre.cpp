#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ExprNode{
	struct ExprNode * left;
	char data[10];
	struct ExprNode * right;
}ExprNode;

void postOrderTraversal(ExprNode * node)
{
	if(node!= 0){
	
	postOrderTraversal(node->left);
	postOrderTraversal(node->right);
	printf("%s"" ",node->data);
}

}

int main()
{
	ExprNode tree[]={  {tree+1,"+", tree+2},
						{tree+3, "*",tree+4	},
						{tree+5, "/",tree+6	},
						{0, "10",0	},
						{0, "20",0	},
						{0, "30",0},
						{0, "10",0}};
						;
						postOrderTraversal(tree);
					//	printf("%d",eval(tree))
	
	
}
