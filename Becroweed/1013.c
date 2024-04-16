#include<stdio.h>

int main() {
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    // Triangle = 0.5 * base * height
    printf("TRIANGULO: %.3lf\n", 0.5*A*C);
    // Circle = pi * radius * radius
    printf("CIRCULO: %.3lf\n", 3.14159 *C*C);
   // Trapezoid = ((A + B) * height) / 2
    printf("TRAPEZIO: %.3lf\n", ((A + B)*C)/2);  
    // Square = side * side
    printf("QUADRADO: %.3lf\n", B*B);
    // Rectangle = length * width
    printf("RETANGULO: %.3lf\n", A*B);

    return 0;
}
