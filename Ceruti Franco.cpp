#include<stdio.h>
int main()
{
	int ope;
	int cant;
	int sabor;
	int fin;
	int cajas;
	int rest;
	int cont_E;
	int acum_C;
	int acum_D;
	int acum_F;
	
	int acum_1_C=0,acum_1_D=0,acum_1_F=0;
	int acum_2_C=0,acum_2_D=0,acum_2_F=0;
	int acum_3_C=0,acum_3_D=0,acum_3_F=0;
	int acum_4_C=0,acum_4_D=0,acum_4_F=0;
	int acum_5_C=0,acum_5_D=0,acum_5_F=0;
	int acum_6_C=0,acum_6_D=0,acum_6_F=0;
	
		
	do //realizo un ciclo do while para poder finalizar la entrega de datos.
	{
		printf("que operador es? (1 2 3 4 5 o 6) \n");
		scanf("%d", &ope);
		printf("cuantos alfajores producio? \n");
		scanf("%d", &cant);
		printf("de que sabor son? \n 1-Chocolate \n 2-Dulce de leche \n 3-Fruta \n");
		scanf("%d", &sabor);
		printf("\n");

		cajas=cant/6; //divido la cantidad de alfajores por 6 para determinar la cantidad de cajas 
		rest=cant%6; //saco la cantidad de alfajores fuera de produccion (punto 3)
		
		if(rest!=0)
		{
			printf("Es una entrega con ERROR, quedaron %d alfajores fuera de produccion \n",rest);
			cont_E=cont_E+1;
		}
		printf("realizo %d cajas \n",cajas);
		
		//acumulo la cantidad de cajas por sabor de alfajor		
		if(sabor==1)
		{
			acum_C=acum_C+cajas;
		}
		if(sabor==2)
		{
			acum_D=acum_D+cajas;
		}
		if(sabor==3)
		{
			acum_F=acum_F+cajas;
		}
		
		
		//realizo los if para acumular la cantidad de alfajores por tipo producidos por operador
		if(ope==1 && sabor==1) {acum_1_C=acum_1_C+cant;}
		if(ope==1 && sabor==2) {acum_1_D=acum_1_D+cant;}
		if(ope==1 && sabor==3) {acum_1_F=acum_1_D+cant;}
		if(ope==2 && sabor==1) {acum_2_C=acum_2_C+cant;}
		if(ope==2 && sabor==2) {acum_2_D=acum_2_D+cant;}
		if(ope==2 && sabor==3) {acum_2_F=acum_2_F+cant;}
		if(ope==3 && sabor==1) {acum_3_C=acum_3_C+cant;}
		if(ope==3 && sabor==2) {acum_3_D=acum_3_D+cant;}
		if(ope==3 && sabor==3) {acum_3_F=acum_3_F+cant;}
		if(ope==4 && sabor==1) {acum_4_C=acum_4_C+cant;}
		if(ope==4 && sabor==2) {acum_4_D=acum_4_D+cant;}
		if(ope==4 && sabor==3) {acum_4_F=acum_4_F+cant;}
		if(ope==5 && sabor==1) {acum_5_C=acum_5_C+cant;}
		if(ope==5 && sabor==2) {acum_5_D=acum_5_D+cant;}
		if(ope==5 && sabor==3) {acum_5_F=acum_5_F+cant;}
		if(ope==6 && sabor==1) {acum_6_C=acum_6_C+cant;}
		if(ope==6 && sabor==2) {acum_6_D=acum_6_D+cant;}
		if(ope==6 && sabor==3) {acum_6_F=acum_6_F+cant;}
		
		printf("Desea añadir otro operador \n 1-SI  \n 0-NO \n"); //pregunto si se quiere terminar el ingreso de datos	
		scanf("%d", &fin);
	}
	while(fin!=0);
	
	
	int precio[3]; // creo el vector en el cual se guardaran los precios de las cajas de alfajores
	printf("\n");
	printf("cual es el precio de la caja de alfajores de chocolate? \n");
	scanf("%d", &precio[0]);
	printf("cual es el precio de la caja de alfajores de dulce de leche? \n");
	scanf("%d", &precio[1]);
	printf("cual es el precio de la caja de alfajores de fruta? \n");
	scanf("%d", &precio[2]);
	
	//saco las ganancias por tipo de las cajas de alfajores
	int ganancia_C=acum_C*precio[0];
	int ganancia_D=acum_D*precio[1];
	int ganancia_F=acum_F*precio[2];
	
	printf("1) se realizaron %d entregas con ERROR \n",cont_E);
	printf("2) Ganancia de las cajas de alfajores de chocolate: %d \n Ganancia de las cajas de alfajores de dulce de leche: %d \n Ganancia de las cajas de alfajores de fruta: %d \n",ganancia_C,ganancia_D,ganancia_F);
	printf("3) El Operario 1 elaboro %d alfajores de Chocolate, %d alfajores de dulce de leche y %d alfajores de fruta \n",acum_1_C,acum_1_D,acum_1_F);
	printf("El Operario 2 elaboro %d alfajores de Chocolate, %d alfajores de dulce de leche y %d alfajores de fruta \n",acum_2_C,acum_2_D,acum_2_F);
	printf("El Operario 3 elaboro %d alfajores de Chocolate, %d alfajores de dulce de leche y %d alfajores de fruta \n",acum_3_C,acum_3_D,acum_3_F);
	printf("El Operario 4 elaboro %d alfajores de Chocolate, %d alfajores de dulce de leche y %d alfajores de fruta \n",acum_4_C,acum_4_D,acum_4_F);
	printf("El Operario 5 elaboro %d alfajores de Chocolate, %d alfajores de dulce de leche y %d alfajores de fruta \n",acum_5_C,acum_5_D,acum_5_F);
	printf("El Operario 6 elaboro %d alfajores de Chocolate, %d alfajores de dulce de leche y %d alfajores de fruta \n",acum_6_C,acum_6_D,acum_6_F);
}
