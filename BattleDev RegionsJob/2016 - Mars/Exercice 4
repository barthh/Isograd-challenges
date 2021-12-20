#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {

    int n;
    scanf("%d", &n) == 0 ;
    
    int pyl[n], result[n];
    for(int i = 0; i < n ; i++)
        scanf("%d", &pyl[i]) == 0;
    
    for(int i = 0; i < n ; i++)
    {
        int total = 0, max = 0;
        for(int j = i - 1; j >= 0 ; j--)
            if(pyl[j] > max)
            {
                total++;
                max = pyl[j];
            }
        
        max = 0;
        for(int j = i + 1; j < n ; j++)
            if(pyl[j] > max)
            {
                total++;
                max = pyl[j];
            }
        
        result[i] = total;
	  }
	
    for(int i = 0; i < n ; i++) printf("%d ",result[i]);
    
    return 0;
}
