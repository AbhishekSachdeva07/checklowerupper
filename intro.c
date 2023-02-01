#include <stdio.h>
#include <ctype.h>
int main ()
{
    char a;
    printf("Enter Character\n");
    scanf("%c",&a);
    if (isupper(a)){
        printf("It's Uppercase");
    }
    else{
        printf("It's Lowercase");
    }
    return 0;
}