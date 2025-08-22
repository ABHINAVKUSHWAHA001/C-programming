#include <stdio.h>
int main ()
{
  int age; 
  printf("enter the age ");
  scanf("%d",&age);
  if(age>18)
 {
   printf("they can vote \n");
  printf("adult\n");
  printf("they can drive\n");
 }
 
 else if (18<14)
{
  printf("they are teenager\n");

 }
 
 else if (0>18)
 {

 printf("minnor");
 }
 else 
 printf("please enter age under the 100 ");
 return 0;
  }