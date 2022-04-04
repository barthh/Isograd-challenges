#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"


int main() {

    int n;
    scanf("%d", &n) == 0 ;
    
    int max = 0;
    
    for(int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m)== 0 ;
        if(m > max) max = m;
	}
	
    printf("%d",max);
    
    return 0;
}
