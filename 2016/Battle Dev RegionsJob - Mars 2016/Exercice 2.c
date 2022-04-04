#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {

	float fl,fi,tl,ti;
	int n, nbr = 0;
	scanf("%f %f %f %f %d",&fl,&fi,&tl,&ti,&n) == 0;
	
    for(int i = 0; i < n; i++)
    {
        float lat,lng;
        scanf("%f %f", &lat, &lng) == 0;
        
        if(fl < lat && tl > lat && fi < lng && ti > lng)
            nbr++;
    }

    printf("%d",nbr);
    
    return 0;
}
