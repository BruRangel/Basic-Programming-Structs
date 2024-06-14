#include <stdio.h>
#include <math.h>

void expression_a (float a, float b, float c){
    float x = (a/(b-c));
    printf("Result of a) for %.2f, %.2f and %.2f is %.2f\n", a, b, c, x);
}

void expression_b (float p, float r, float n){
    float d = (p-r)/n;
    printf("Result of b) for %.2f, %.2f and %.2f is %.2f\n", p, r, n, d);
}

void expression_c (float c){
    float f = c*(9.0/5.0)+32;
    printf("Result of c) for %.2f is %.2f\n", c, f);
}

void expression_d (float f){
    float c = (f-32)*(9.0/5.0);
    printf("Result of d) for %.2f is %.2f\n", f, c);
}

void expression_e (float m, float a, float h, float v){
    float x = m * (a*h+(pow(v, 2)/2));
    printf("Result of e) for %.2f, %.2f, %.2f and %.2f is %.2f\n", m, a, h, v, x);
}

void expression_f (float c, float r){
    float f = sqrt((1/c)-(pow(r, 2)/(pow(c, 2)*4)));
    printf("Result of f) for %.2f and %.2f is %.2f\n", c, r, f);
}

int main(){
    expression_a(3, 2, 3);
    expression_b(2, 3, 2);
    expression_c(10);
    expression_d(10);
    expression_e(5, 4, 3, 2);
    expression_f(2, 2);

    return 0;
}
