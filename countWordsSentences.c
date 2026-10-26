#include<stdio.h>
int main ()
{
  char str[200];
  int i = 0;
  int characters = 0, words = 0, sentences = 0;
  printf("Enter a string: ");
  scanf("%[^\n]", str);
  while (str[i] != '\0')
  {
    if (str[i] != ' ')
    {
      characters++;
    }
    if ((str[i] != ' ' && str[i] != '\t') && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
    {
      words++;
    }
    if (str[i] == '.' || str[i] == '!' || str[i] == '?')
    {
      sentences++;
    }
    i++;
  }
  printf("Number of characters = %d\n", characters);
  printf("Number of words = %d\n", words);
  printf("Number of sentences = %d\n", sentences);
  return 0;
}
