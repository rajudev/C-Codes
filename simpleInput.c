#include<stdio.h>

int main(void)
{
  char name[200], ch;
  int i=0;

  printf("Enter string ");

/* terminates if a user hits enter*/

  while( ch != '\n')
  {
    ch = getchar();
    name [i] = ch;
    i++;

  }

/*\\ Inserting null character at end*/

  name [i] = '\0';
  printf("Name : %s " , name );
  return 0;

}
