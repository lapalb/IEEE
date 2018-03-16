#include<stdio.h>
int main()
{
	int r=0,c=0;
for( r=0;r<32;r++){

for(c=0;c<32;c++){

printf(((~c & r)==0)? ". ": "+");}
printf("\n");}
}
