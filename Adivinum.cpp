#include <stdlib.h>
#include <stdio.h>
#include <time.h>

main(){
int n,numAleatorio,numIngresado;
int i=1;
srand(time(NULL));
numAleatorio=(rand()%9999)+1000;
printf("Numero generado: %d\n", numAleatorio);

for(i=1; i<11; i++){
	printf("Intento numero *%d*: ", (i), numIngresado);
	scanf("%d",&numIngresado);
}


}
