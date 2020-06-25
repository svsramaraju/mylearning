#include<stdio.h>
#include<stdlib.h>
int add ( int a, int b);

void main()
{
 int val1, val2;
val1= 10;
val2= val1<<2;
printf( "a=%d, b=%d, sum =%d\n",val1,val2,add(val1,val2)); 
 
}

int add ( int a, int b)
{
  return (a+b);
}
