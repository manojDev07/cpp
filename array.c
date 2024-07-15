#include<stdio.h>
int main()


{
  int size,sum=0;
  printf("Enter size of array");
  scanf("%d",&size);

  int a[size];

  for(int i=0;i < size;i++)
  {
     printf("Enter No %d",i);
     scanf("%d",&a[i]);

     sum = sum + a[i];

  }
  printf("total of All Numbers is %d",sum);
  return 0;
}