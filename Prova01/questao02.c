#include <stdio.h>
#include <stdio.h>
#include "questao02.h"

void iq2 (float *sb){
    printf("digite o slario bruto: \n");
    scanf("%f",sb);
}
void pq2 (float *sb, float *sl){
    if (*sb < 2000){
        *sl = *sb * 0.90;
    }else{
        *sl = *sb * 0.80;
    }
}
void oq2 (float sl){
    printf("o slario linquido eh: %.2f\n", sl);
}
void questao02(void){
    float a, b;

    iq2(&a);
    pq2(&a,&b);
    oq2(b);
}

