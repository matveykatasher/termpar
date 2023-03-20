#include <vcl.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream.h>
#include <cstdlib.h>
#pragma hdrstop
 
 
#pragma argsused
int main(int argc, char* argv[])
{
FILE *read;
char c;
double ch,str;
int i,g=0;
char arr1[13],arr2[13],arr3[13],arr4[13],*p;
 
read=fopen ("d:\\OUTPUT.DAT","r");
if(!read)
{
printf("err");
}
i=0;
while(!feof(read))
{
fscanf(read,"%s %s %s %s",arr1,arr2,arr3,arr4);
str = atof(arr1);
printf("%f\n",str);
}
 
system("PAUSE");
return 0;
}