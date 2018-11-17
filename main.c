#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, ternary[20], j;

    while(scanf("%d", &n)==1 && n>=0) {
        i = 0;
        if(n == 0) {
            ternary[0] = 0;
            i = 1;
        } else {
            while(n > 0) {
                ternary[i] = n%3;
                n = n/3;
                i++;

            }
        }


        for( j = i-1; j >=0; j--) {
            printf("%d", ternary[j]);
        }
        printf("\n");

    }
    return 0;
}
