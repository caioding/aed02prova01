#include <stdio.h>
#include <stdio.h>
#include "questao01.h"

void iq1(float *r){
    printf("raio:");
    scanf("%f",r);
}
void pq1(float *r,float *p,float *a,float *d,float *v){
    *p= (2.0 * 3.14) * (*r);
    *a= 3.14 * ((*r)*(*r));
    *d= 2.0 * (*r);
    *v= ((4.0 * 3.14)/3.0) * ((*r)*(*r)*(*r));
}
void oq1(float p,float a, float d,float v){
    printf("perimetro: %.2f\n", p);
    printf("area: %.2f\n", a);
    printf("diametro: %.2f\n", d);
    printf("volume: %.2f\n", v);
}
void questao01(void){
    float a,b,c,d,e;

    iq1(&a);
    pq1(&a,&b,&c,&d,&e);
    oq1(b,c,d,e);
}
