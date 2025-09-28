#include <stdio.h>

int main(){

    int a[] = {321,345,64,758,879,234,47,97,970,243,45,7908};

    int i = sizeof(a) / sizeof(a[0]);
    int c = 0 ;
    int min = a[0] ;

    for (c = 0; c<i ; c++){

        if(a[c] < min ){
            min = a[c] ;
        }
    }
    printf("Minimun is %d", min);

return 0;
}
