#include<stdio.h>
#include <string.h>
void reverse(char *ch);
int main()
{
 char str[50];
 printf("Enter Input ");
 gets(str);
 reverse(str);
 printf("%s\n", str);
 return 0;
}
void reverse(char *str)
{
 int len = strlen(str);
 int i = 0, j = 0;
 char temp[50];
 for (i = 0; i < l; i++)
 {
 for (j = 0; i < l; j++; i++)
 {
 if (str[i] == ' ' || str[i] == '.')
 break;
 temp[j] = str[i];
 }
 while (j > 0)
 {
 j--;
 str[i - j - 1] = temp[j];
 }
 }
}
