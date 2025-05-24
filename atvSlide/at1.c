#include <stdio.h>

int resultadoXY(int x, int y){
	if (y == 0)
		return 1;
	else
		return x * resultadoXY(x, y-1);
}

int main(){
	int x, y, resul;
	printf("Valor de X\n");
	scanf(" %d",&x);
	printf("Valor de y\n");
	scanf(" %d",&y);
	
	resul = resultadoXY(x,y);
	
	printf("%d elevado a %d e %d\n",x,y,resul);
	return 0;
}

