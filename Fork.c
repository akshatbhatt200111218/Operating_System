#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  int p;
  p=fork();
  
  
  if(p>0)
  {
      printf("Parent with returned value as %d\n",p);
      
  }
  
  else if(p==0)
  {
    
    printf("Child with returned value as %d\n",p);
  }
  else
  {
      printf("Process Terminated!");
  }
  
  return 0;
  
}