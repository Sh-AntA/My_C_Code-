#include<stdio.h>
int main ()
{
    int m;
    scanf("%d",&m);
    switch(m/10)
    {
        case 10:
        case 9:
        case 8:
        printf("a+",m);
        break;
        case 7:
        printf("a",m);
        break;
        case 6:
        printf("a-",m);
        break;
        case 5:
        printf("b",m);
        break;
        case 4:
        printf("c",m);
        break;
        default:
            if(m>=33)
                printf("d",m);
            else
                printf("f",m);
        }
        return 0;
}
