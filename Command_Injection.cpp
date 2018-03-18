#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
char cmd[100]="cat ";
char filename[100]="";
cout<<"Enter File";
gets(filename);
strcat(cmd, filename);	
system(cmd);
}
