#include<stdio.h>
int main()
{
	int val=10;
	int pos=31;
	int one=1;int i;
	for(i=pos;pos>=0;pos--)
	printf("%d", ((one<<pos)& val)? 1:0);
}
