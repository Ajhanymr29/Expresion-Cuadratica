#include<stdio.h>
#include<math.h>

main(){

	float x1, x2, r, a, b, c;
	printf("\n\t\tSolucion de una expresion de segundo grado");
	printf("\n\t\t_______________\n\n\n");
	printf("\t\t\tEscribe el valor de a --> ");
    scanf("%f", &a);
	printf("\t\t\tEscribe el valor de b --> ");
	scanf("%f", &b);
	printf("\t\t\tEscribe el valor de c --> ");
	scanf("%f", &c);

	x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("\n\t\t\tx1=%.f   x2=%.f", x1, x2);
    return 0;
}
