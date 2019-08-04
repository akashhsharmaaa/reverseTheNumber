#include<stdio.h>
int main(void)
{
  int n,temp=10,n2=0;
  printf("enter number\n");
  scanf("%d",&n);
  for (size_t i = 0; n > 0; i++) {
    temp=n%10;
    n2=n2+temp;
    n2=n2*10;
    n=n/10;
  }
  n2=n2/10;
  printf("after swapping- %d",n2);
}
