#include <stdio.h>
int main()
{
  int a[10];
  for(int i=0;i<10;i++){
    a[i]=i;
  }
  for(int j=0;j<10;j++){
    printf("%d\n",a[j]);
  }
  
  return 0;
  
}
