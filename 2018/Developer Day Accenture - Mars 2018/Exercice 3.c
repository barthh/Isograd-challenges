#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {

    int n,id;
    scanf("%d%d", &n,&id)== 0 ;

    int somme = 0;
    
    for(int i = 0; i < n ; i++) {
        int m;
        scanf("%d", &m)== 0 ;
        
        somme += m;
	}
    
    if(somme*2 == id) printf("OK");
    else printf("KO");
    
    return 0;
}
