#include<stdio.h>
#include<string.h>

int main()
{
  char str[200], temp;
  int i, j=0;


  printf("Please input the string: ");
  scanf("%s", str );
  printf("You entered: %s\n", str);


  j = strlen (str) - 1;

  while (i < j)
  {
     temp = str[i];
     str[i] = str[j];
     str[j] = temp;
     i++;
     j--;
  }

  printf("Reverse of string is: %s", str );

    printf("\n");
      printf("\n");
  return 0;

}
