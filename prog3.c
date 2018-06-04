#include <stdio.h>

//3.- lea 5 caracteres y los imprima, luego lea otros 3 caracteres y los imprima (no puedes usar printf ni scanf)
int main(){
	char c1, c2, c3, c4, c5, c6, c7, c8;
	puts("Dame 5 caracteres\n");
	c1=getchar();
	c2=getchar();
	c3=getchar();
	c4=getchar();
	c5=getchar();
	puts("Los caracteres son:\n");
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	puts("\nTeclea otros 3\n");
	getchar();
	c6=getchar();
	c7=getchar();
	c8=getchar();
	puts("Los otros caracteres son:\n");
	putchar(c6);
	putchar(c7);
	putchar(c8);
	
return 0;
}
