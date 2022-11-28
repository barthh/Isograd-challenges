#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {
    
    int n;
    int currHeight = 0;
    int nbPages = 1;
    
    while (scanf("%d ", &n) != EOF) {
        if(n + currHeight > 10)
        {
            nbPages++;
            currHeight = n;
        }
        else
        {
            currHeight += n;   
        }
    }
    
    printf("%d", nbPages);

	return 0;
}