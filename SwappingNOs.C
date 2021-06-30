#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter the value of a and b: ");
  scanf("%d %d",&a,&b);
  temp=a;
  b=temp;
  printf("After swapping value of a=%d and b=%d",a,b);
  return 0;  
}

