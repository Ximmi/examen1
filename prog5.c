#include <stdio.h>

//5.- pida un num de minutos e imprima las hrs y mins equivalentes

int main(){
	int mins, horas;
	printf("Teclea el numero de minutos\n");
	scanf("%d", &mins);
	horas=mins/60;
	printf("Son %d horas y %d minutos", horas, mins-(horas*60));

return 0;
}


