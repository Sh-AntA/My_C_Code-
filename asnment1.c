#include<stdio.h>
#include<string.h>
void reverse(char*s);
int main()
{
    char ch[50];
    printf("enter string: ");
    gets(ch);
    reverse(ch);
    printf("%s\n",ch);
    return 0;
    {
        void reverse(char*ch)
        {
    int len=strlen(ch);
    int i=0,j=0;
    char temp[50];
    for(i=0;i<len;i++)
    {

    for(j=0;j<len;j++,i++)
    {
           if(ch[i]== '' || ch[i]== '.')
            break;
        temp[j]=ch[i];
        }
        while(j>0)
        {
            j--;
            ch[i-j-1]=temp[j];
        }
    }
}
