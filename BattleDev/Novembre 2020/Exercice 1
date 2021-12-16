#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"
#include <stdbool.h> 
#include <ctype.h>

int main() {
    char s[1024];
	
    int n;
    scanf("%d", &n)== 0 ;
    
    int count = 0;

    for(int i = 0; i < n ; i++)
    {
        scanf("%s", &s)== 0 ;

        bool ok = true;
        for(int j = 0; j < 5; j++)
            if(!isdigit(s[strlen(s) - 1 -j]))
                ok = false;
                
        if(ok) count++;
	}
    
    printf("%d",count);
    return 0;
}
