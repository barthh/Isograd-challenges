#include <stdlib.h>
#include <stdio.h>
#include "string.h"
#include "libisograd.h"
#include <stdbool.h> 

int main() {
    char s[20][10];

    for(int i = 0; i < 20 ; i++) scanf("%s", &s[i])== 0 ;

    int res = -1;

    for(int i = 0; i < 10 ; i++)
        if(s[0][i] != *"#")
            for(int j = 1; j < 20 ; j++)
                if(s[j][i] == *"#" || j == 19)
                {
                    bool isok = true;
                    for(int k = 0; k < 10; k++)
                        if(k != i)
                        {
                            if(s[j][i] == *"#")
                            {
                                if(s[j-1][k] == *".") isok = false; //Try last position if '#''
                            }
                            else if(s[j][k] == *".") isok = false; //Try current position if the last is empty
                        }
                    if(isok) res = i;
                    break;
                }

    if(res < 0) printf("NOPE");
    else printf("BOOM %d", res+1);
    return 0;
}
