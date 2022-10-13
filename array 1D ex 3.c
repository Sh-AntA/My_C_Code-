#include<stdio.h>
int main()
{
    int i,n,a[i];
    int sum=0;
    printf("Enter the numbers:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf(" the sum is : %d \n",sum);
    return 0;
}
