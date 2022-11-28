#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"


int main() {
    char s[1024],s2[1024];
    int n;
    
    scanf("%d%s%s", &n,&s,&s2)== 0 ;

	int cumul = 0;
	
    for(int i = 0; i < n ; i++)
        if(s[i] != s2[i]) cumul++;
    
    if(cumul > 3) printf("KO");
    else printf("OK");
    
    return 0;
}
