#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int B_count;
    scanf("%d",&B_count);
    int B[B_count];
    for(int i=0;i<B_count;i++){
        scanf("%d",&B[i]);
    }
    int s=0,i;
    for(i=0;i<B_count-1;i++){
        if(B[i]%2!=0){
            B[i]++;
            B[i+1]++;
            s+=2;
        }

    }
    if(B[B_count-1]%2==0){
        printf("%d",s);
    }
    else{
        printf("NO");
    }
}
