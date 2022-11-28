#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {

    int n;
    scanf("%d", &n) == 0 ;
    
    int v[n];
    for(int i = 0; i < n ; i++) scanf("%d", &v[i]) == 0 ;
    
    unsigned long long int total = 0;
    for(int i = 0; i < n ; i++) {
        int d = 0;
        for(int j = i + 1; j < n; j++)
        {
            if(v[j] == v[i]) d = abs(i-j);
            if(v[j] >= v[i]) break;
        }
        total += d;
	}

    printf("%u",total);
    
    return 0;
}
