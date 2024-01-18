// Write a program to enter two strings and compare these two with strcmp().
#include <stdio.h>
#include <string.h>
int main(){
    char s1[20] = "Deepak";
    char s2[20] = "DeepakModi";

    // strcmp
    // below it is comparing all characters of s1 and s2
    if (strcmp(s1, s2) == 0){
        printf("string 1 and string 2 are equal");
    }
    else{
        printf("string 1 and 2 are different");
    }

    return 0;
}
