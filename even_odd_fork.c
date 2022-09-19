//Even odd program using fork

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int n;
    printf("Enter till what value  you want to enter?\n");
    scanf("%d",&n);
        int p=fork();
        int i;
        if(p== 0)
        {
                for(i=1;i<n;i++)
                        if(i%2 == 0)
                                printf("even %d\n",i);
        }
        else
        {
                for(i=1;i<n;i++)
                        if(i%2 != 0)
                                printf("odd %d\n",i);
        }
        return 0;
}