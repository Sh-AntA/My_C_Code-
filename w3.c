#include<stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main()
{
  struct myStructure s1;

  // Trying to assign a value to the string
  strcpy(s1.myString,"some");
  // Trying to print the value
  printf("My string: %s\n", s1.myString);

  struct myStructure s2;
  s2=s1;
  printf("%s",s2.myString);

  return 0;
}
