#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {
    
    int n;
    scanf("%d", &n)== 0 ;
    
    int v[n],w[n];
    
    for(int i = 0; i < n ; i++) {
        scanf("%d", &v[i])== 0 ;
        
        if(i == 0) w[0] = 15;
        else {
            if(v[i] > v[i-1]) {
                if(w[i-1] > 10) w[i] = 20;
                else w[i] = 15;
            }
            if(v[i] < v[i-1]) {
                if(w[i-1] < 10) w[i] = 0;
                else w[i] = 5;
            }
            if(v[i] == v[i-1])
                w[i] = 10;
        }
	}

    int total = 0;
    for(int i = 0; i < n ; i++) {
        total += w[i];
	}
    
    if(total%n != 0) total += n;

    printf("%d",total/n);
    
    return 0;
}
