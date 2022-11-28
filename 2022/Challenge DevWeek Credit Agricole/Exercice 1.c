#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {
    
    char s[1024];
    scanf("%s", &s) == 0;
    
    for(int i = 1; i < strlen(s); i++)
        s[i] = s[0];

    printf("%s", s);

    return 0;
}