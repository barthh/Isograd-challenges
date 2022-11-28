#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"

int main() {

    int n,m;
    scanf("%d%d", &n,&m)== 0 ;
    
    int a[20];
    float b[20];
    
    for(int i = 0; i < m ; i++)
        scanf("%d%f",&a[i],&b[i]) == 0;

	for(int i = 0; i < m - 1; i++)
	    for(int j = 0; j < m - i - 1; j++)
	        if(b[j] < b[j+1]) {
	            int c = a[j];
	            a[j] = a[j+1];
	            a[j+1] = c;
	            
	            float h = b[j];
	            b[j] = b[j+1];
	            b[j+1] = h;
	        }

	int total = 0;
	
	for(int d = 0; d < m; d++) {
        total += a[d];
      	if(total > n) {
      	    printf("%d",d + 1);
      	    break;
      	}
      	if(d == m - 1) {
      	    printf("KO");
      	    break;
      	}
	}

   return 0;
}
