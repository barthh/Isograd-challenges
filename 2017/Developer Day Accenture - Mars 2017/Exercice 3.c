#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {
    
    int n;
    scanf("%d", &n) == 0 ;

	int v[4] = {0};
    
    for(int i = 0; i < n ; i++) {
        int h,m;
        scanf("%d:%d", &h,&m) == 0 ;

        if(h >= 0 && h <= 4) v[0]++;
        if(h == 5 && m <= 29) v[0]++;
        if(h == 5 && m > 29) v[1]++;
        if(h >= 6 && h <= 11) v[1]++;
        if(h >= 12 && h <= 17) v[2]++;
        if(h >= 18 && h <= 22) v[3]++;
        if(h == 23 && m <= 29) v[3]++;
        if(h == 23 && m > 29) v[0]++;
	}

    int max = 0, val;
    
    for(int i = 0; i < 4 ; i++)
        if(max < v[i]) {
            max = v[i];
            val = i;
        }
    
    if(val == 0) printf("N");
    if(val == 1) printf("M");
    if(val == 2) printf("AM");
    if(val == 3) printf("S");
    
    return 0;
}
