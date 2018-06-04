#include <stdio.h>

//4.- pida 5 ints e imprima su promedio
int main(){

int e1, e2, e3, e4, e5;

printf("Dame 5 numeros (separalos con espacios)\n");
scanf("%d %d %d %d %d", &e1, &e2, &e3, &e4, &e5);
printf("Su promedio es: %d\n", (e1+e2+e3+e4+e5)/5);

return 0;
}
