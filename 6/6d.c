// Write a program to execute strlen(), strcpy(),strcat(),strncat().

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char str1[20] = "Deepak Modi";
//   printf("Length of string str1: %d \n", strlen(str1));
//   printf("Size of string str1: %d \n", sizeof(str1));

//   return 0;
// }

// #include <stdio.h>
// #include <string.h>
// void main()
// {

//   char s1[30] = "string 1";
//   char s2[30] = "string 2 is copied";
//   strcpy(s1, s2);
//   printf("String s1 is: %s", s1);
  
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char s1[10] = "Hello";
//   char s2[10] = "World";
//   strcat(s1, s2);
//   printf("Output string after concatenation: %s", s1);

//   return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
  char s1[10] = "Hello";
  char s2[10] = "World";
  strncat(s1, s2, 3);
  printf("\nConcatenation using strncat: %s", s1);
  return 0;
}
