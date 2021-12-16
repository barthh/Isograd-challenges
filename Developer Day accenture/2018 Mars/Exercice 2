#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {

    int pluie = 0, temp = 0;
    
    for(int i = 0; i < 24 ; i++)
    {
        int t,p;
        scanf("%d %d", &t,&p) == 0 ;
        
        temp += t;
        pluie += p;
	}
	
    if(temp%24 != 0) temp += 24 - temp%24;
    
    if (temp/24 - pluie < 0) printf("0");
    else printf("%d",temp/24 - pluie);

    return 0;
}
