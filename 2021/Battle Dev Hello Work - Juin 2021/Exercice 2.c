#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"
#include <stdbool.h> 
#include <ctype.h>

int main() {
    char s[1024];
    
    int n;
    scanf("%d", &n) == 0 ;

    char val[n][100];
    int count[n], total = 0;
    
	for(int i = 0; i < n ; i++)
    {
        scanf("%s", &s) == 0 ;
        bool exist = false;
        
        for(int j = 0; j < total; j++)
        {
            if(strcmp(val[j], s) == 0)
            {
                exist = true;
                count[j]++;
                break;
            }
        }
        
        if(!exist || total == 0)
        {
            strcpy(val[total], s);
            count[total] = 1;
            total++;
        }
	}
    
    for(int i = 0; i < n ; i++)
        if(count[i] == 2)
        {
            printf("%s",val[i]);
            break;
        }
    
    
    return 0;
}
