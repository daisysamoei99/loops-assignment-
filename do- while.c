// c program to write do while
#include <stdio.h>
int main()
{
 int n=50;
 do
  {
   printf("enter value");
   scanf("%d",&n);
   printf("the value is ;%d\n",n);
  }
while(n !=20);
printf("do-while loop body finished");
return 0;
}