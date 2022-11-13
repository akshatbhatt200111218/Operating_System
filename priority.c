#include<stdio.h>
#include<stdlib.h>


struct process
{
    int pid,at,bt,ct,rbt,st,pri;
}ps[100];



int main()
{
     int n;
     printf("enter no of process");
     scanf("%d",&n);

     for(int i=0;i<n;i++)
     {
         printf("enter at bt and priority \n");
         scanf("%d%d%d",&ps[i].at,&ps[i].bt,&ps[i].pri);
         ps[i].pid=i;
         ps[i].rbt=ps[i].bt;
     }

   int completed=0;

   int current_time=0;

   int is_completed[20]={0};

   

   while(completed != n)
   {
       int max_pri=-1;
   
       int max_ind=-1;
       
       for(int i=0;i<n;i++)
       {

       if(ps[i].at<=current_time &&  ps[i].rbt>0 && is_completed[i]==0 )
       {
         if(ps[i].pri > max_pri   )
         {
             max_pri =ps[i].pri;
             max_ind =i;
         }

         if(ps[i].pri == max_pri)
         {
             if(ps[i].at < ps[max_ind].at )
             {
                 max_pri = ps[i].pri;
                 max_ind =i;
             }
         }



       }

       }

       if(max_ind == -1)
       {
          current_time++;
       }

       else
       {  
          if(ps[max_ind].rbt ==  ps[max_ind].bt)
          {
              ps[max_ind].st=current_time;
          }
          ps[max_ind].rbt--;
          current_time++;

          if(ps[max_ind].rbt==0)
          {
              ps[max_ind].ct=current_time;
              
              is_completed[max_ind]=1;
              
              completed ++;
              
          } 
          
       }

      


   }

    for(int i=0;i<n;i++)
       {
           printf("process %d\t  %d\n",ps[i].pid,ps[i].ct);
       }
return 0;

}