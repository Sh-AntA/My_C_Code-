#include<stdio.h>
int main()
{
    char s1[5];
    s1[0]='a';
    s1[1]='b';
    s1[2]='c';
    s1[3]='d';
    s1[4]='\0';
    printf("s1=%s\n",s1);
    gets(s1);

}

