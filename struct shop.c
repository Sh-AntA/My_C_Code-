#include<stdio.h>
struct shop
{
    int dress;
    int road;
    char name[50];
};
int main()
{
    struct shop s1;
    s1.dress=100;
    s1.road =18;
    strcpy(s1.name,"dreams");
    printf("%d\n%d\n%s",s1.dress,s1.road,s1.name);
    return 0;
}
