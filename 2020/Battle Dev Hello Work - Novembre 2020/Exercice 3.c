#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"
#include <stdbool.h> 

int main() {
    
    int n;
    scanf("%d", &n) == 0 ;
    
    int agentSup[n-1], inf, sup, rang[10] = {0};

    for(int i = 0; i < n-1; i++) {
        scanf("%d %d",&inf,&sup) == 0;
        agentSup[inf] = sup;
    }
    
    for(int i = 0; i < n ; i++) {
        int numRang = 0, agent = i;
        while(agent != 0) {
            agent = agentSup[agent];
            numRang++;
        }   
        rang[numRang]++;
    }
    
    for(int i = 0; i<10;i++) printf("%d ", rang[i]);
    
    return 0;
}
