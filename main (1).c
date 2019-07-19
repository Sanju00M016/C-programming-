#include <stdio.h>

int main()
{
    int n,a[20],ver[20];
    int result;
    //printf("enter the no of socks\n");
    scanf("%d",&n);
    //printf("enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
        ver[i]=0;
    }
    int j;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && ver[j]==0 && ver[i]==0)
            {
                result++;
                ver[j]=1;
                ver[i]=1;
            }
            
        }
    }
    printf("%d",result);
}