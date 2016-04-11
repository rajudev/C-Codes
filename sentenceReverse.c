/*
algorithm

1) Reverse the individual words, we get the below string.
     "i ekil siht margorp yrev hcum"
2) Reverse the whole string from start to end and you get the desired output.
     "much very program this like i"
3) Reverse the alphabets in alternate words by counting spaces.
  for odd spaces reverse the word.
  for even spaces let the word as it is.

  " much yrev program siht like i"


*/




#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void reverseWords(char *s);
void reverse(char *begin, char *end);
void reverseAlphabetsOfAlternateWords(char *s);
void countSpaces(char *s);

int main()
{
  char s[] = "India lost to Australia in worldcup semifinals";
  char *temp = s;
  int i, count = 0;
  int j = 0;
  reverseWords(s);
  printf("%s", s);
  printf("\n");

// To count the number of spaces in the sentence
  countSpaces(s);

  printf("\n");
  reverseAlphabetsOfAlternateWords(s);
  printf("%s", s);


  getchar();
  return 0;
}

void reverseWords(char *s)
{
    char *word_begin = NULL;
    char *temp = s; /* temp is for word boundry */

    /*STEP 1 of the above algorithm */
    while( *temp )
    {
        /*This condition is to make sure that the string start with
          valid character (not space) only*/
        if (( word_begin == NULL ) && (*temp != ' ') )
        {
            word_begin=temp;
        }
        if(word_begin && ((*(temp+1) == ' ') || (*(temp+1) == '\0')))
        {
            reverse(word_begin, temp);
            word_begin = NULL;
        }
        temp++;
    } /* End of while */

    /*STEP 2 of the above algorithm */
    reverse(s, temp-1);

}

void reverse(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
  }
}

// TO count number of spaces.
void countSpaces(char *s)
{
  int i, count = 0;
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]==' ')
    count++;
  }

  printf("Spaces = %d",count);

}





/* Step 3 to reverse alternate words */

void reverseAlphabetsOfAlternateWords(char *s)
{

  char *word_begin = NULL;
  char *temp = s; /* temp is for word boundry */

  if (( word_begin == NULL ) && (*temp != ' ')  && count == 1)
  {
    word_begin=temp;
  }
  if(word_begin && ((*(temp+1) == ' ') || (*(temp+1) == '\0')))
  {
    reverse(word_begin, temp);
    word_begin = NULL;
  }
  temp++;
}


/*
References

1. http://www.geeksforgeeks.org/reverse-words-in-a-given-string/


*/
