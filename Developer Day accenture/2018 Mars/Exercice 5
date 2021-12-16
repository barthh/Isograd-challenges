#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {

    int n;
    scanf("%d", &n)== 0 ;
    
    char s[n];
    scanf("%s", &s) == 0;
    
    for(int i = 0; i < n ; i++)
        if(s[i] >= 97 && s[i] <= 122) 
            printf("%d-", s[i] - 96);
        else
        {
            if(s[i] >= 65 && s[i] <= 90) 
                printf("%d-", s[i] - 64);
            else
                printf("%c-",s[i]);
        }

    return 0;
}
