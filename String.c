#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Heeh";
    char b[100];
    strcpy(b,a);
    strrev(b);

    if(strcmp(a,b)==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    
    return 0;
}