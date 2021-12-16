#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"
#include <stdbool.h> 

int main() {
    
    int n;
    scanf("%d", &n)== 0 ;
    
    char s[n];
    scanf("%s", &s) == 0 ;
    
    int count = 0, base[26] = {0};
    
    for(int i = 0; i < n; i++) base[s[i] - 65]++;
    for(int i = 0; i < 26; i++) base[i] = base[i]/2;

    if(n%2 == 0)
    {
        int v[26] = {0};
        
        for(int i = 0; i < n/2; i++)
        {
            if(i == 0) 
                for(int i = 0; i < n/2; i++) v[s[i] - 65]++;
            else
            {
                v[s[i-1] - 65]--; //Remove left one
                v[s[i-1+n/2] - 65]++; //Add right one
            }

        	bool isok = true;
        	for(int j = 0; j < 26; j++)
        	    if(v[j] != base[j])
        	        isok = false;
        	        
        	if(isok) count++;
        }
    	
    }

    printf("%d",count * 2);
    
    return 0;
}
