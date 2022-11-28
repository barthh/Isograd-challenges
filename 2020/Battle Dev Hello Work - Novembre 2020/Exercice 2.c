#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {
    
    int n;
    scanf("%d", &n)== 0;

    int night = 0;
    char s[16];
    
    for(int i = 0; i < n ; i++) {
        int h;
        scanf("%d%s", &h,&s) == 0 ;
        if(h >= 20 || h < 8) night++;
	}
	
	if(2 * night > n) printf("SUSPICIOUS");
	else printf("OK");
    
    return 0;
}
