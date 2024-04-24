#include <stdio.h>
#include "labs.h"

int main(){
    int variant;
    printf("Vedite cifru dly laby:\n");
    scanf("%d", &variant);

    if (variant == 1) {
        laba1();    
    }
    else if (variant == 2)
    {
        laba2();
    }
    else if (variant == 3)
    {
        laba3();
    }
    else if (variant == 4)
    {
        laba4();
    }
    else if(variant == 5)
    {
        laba5();
    }
    else if(variant == 6)
    {
        laba6();
    }
    else if(variant == 7)
    {
        laba7();
    }
    else
    {
        printf("Takogo varianta net ili eshe ne sdelan :)");
    }
    return 0;
}