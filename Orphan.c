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
      exit(0);
  }
  
  else if(p==0)
  {
    
    sleep(10);
  }
  
  return 0;
  
}
