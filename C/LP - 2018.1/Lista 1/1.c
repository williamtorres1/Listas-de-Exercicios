#include <stdio.h>
#include <stdlib.h>
int main()
{	/*
	Dadas a base e a altura de um triangulo, calcular a sua area.
				Area = Base * Altura/2
	*/
	float area=0,base=0,altura=0;
	printf("Digite o valor da base e da altura, em metros: ");
	scanf("%f %f",&base,&altura);
	area=(base*altura)/2;
	printf("A Area desse triangulo eh %f metro(s) \n",area);
	system("pause");
	return 1;
}
