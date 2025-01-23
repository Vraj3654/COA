#include<stdio.h>
int main()
{
  int arr[]={0, 0 ,1, 1};
  int length = sizeof(arr)/sizeof(arr[0]);
  int n=3 ,i ,j ,last;
  printf("Original array : ");
  for(i=0 ; i<length ; i++)
  {
 printf("%d", arr[i]);
  }
  for(int i=0 ; i<n ; i++)
  {
    last = arr[length-1];
    for(j=length-1 ; j>0 ; j--)
    {
      arr[j] = arr[j-1];
    }
    arr[0] = last;
  }
  printf("\nArray after circular right rotation : ");
  for(i=0 ; i<length ; i++)
  {
    printf("%d", arr[i]);
  }
return 0;
}
