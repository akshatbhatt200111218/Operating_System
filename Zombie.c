#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  int p;
  p=fork();
  
  
  if(p>0)
  {
      printf("parent");
      sleep(10);
  }
  
  else if(p==0)
  {
    exit(0);
  }
  
  return 0;
  
}