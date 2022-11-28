#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {
    
    int n;
    scanf("%d", &n)== 0 ;
    
    char s[n], res[100] = "Pas de magasin";
    
    while(scanf("%s",s) != EOF)
        //The city name is always in one word with lowercase letters
        if(strcmp(s,"lyon") == 0 || strcmp(s,"marseille") == 0|| strcmp(s,"paris") == 0|| strcmp(s,"nantes") == 0) strcpy(res,s);

    printf("%s",res);

    return 0;
}
