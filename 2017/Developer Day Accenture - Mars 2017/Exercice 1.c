#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {
    
    int n,t;
    scanf("%d%d", &n,&t)== 0 ;
    
    char s[n];
	int v[n], total = 0;
    
    for(int i = 0; i < n ; i++) {
        int u,v;
        scanf("%d%d", &u,&v) == 0 ;
        total += u;
        t += v;
	}

    if(t <= total) printf("OK");
    else printf("KO");
    
    return 0;
}
