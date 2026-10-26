#include<stdio.h>
int main ()
{
  char str1[] = "hello";
  char str2[] = "world";
  int i;
  int areEqual = 1;
  for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
  {
    if (str1[i] != str2[i])
    {
      areEqual = 0;
      break;
    }
  }
  if (areEqual)
  {
    printf("The strings are equal.\n");
  }
  else
  {
    printf("The strings are not equal.\n");
  }
  return 0;
}
