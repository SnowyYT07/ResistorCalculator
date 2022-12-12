#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void main(){
	double preto = 0, castanho = 1, vermelho = 2, laranja = 3, amarelo = 4, verde = 5, azul = 6, roxo = 7, cizento= 8, branco = 9, ouro = 10, prata = 11, linha1, linha2, linha3, linha4, total;
	printf("\e[44m###################################################\n");
	printf("\e[44m#########Tabela de cores das resistencias##########\n");
	printf("\e[44m###################################################\e[0m\n");
	printf("[0] Preto\n");
	printf("[1] Castanho\n");
	printf("[2] Vermelho\n");
	printf("[3] Laranja\n");
	printf("[4] Amarelo\n");
	printf("[5] Verde\n");
	printf("[6] Azul\n");
	printf("[7] Roxo\n");
	printf("[8] Cizento\n");
	printf("[9] Branco\n");
	printf("[10] Ouro\n");
	printf("[11] Prata\n\n");


   printf("Digite o numero referente a cor da linha 1 (exemplo '1' para castanho): ");
	scanf("%lf", &linha1);
	if(linha1 == 0 || linha1 > 9){
		main();
	}
   printf("Digite o numero referente a cor da linha 2 (exemplo '7' para roxo): ");
	scanf("%lf", &linha2);
	if(linha2 > 9){
		main();
	}
	printf("Digite o numero referente a cor (exemplo '3' para laranja): ");
	scanf("%lf", &linha3);
	if(linha3 > 9){
		main();
	}
	printf("Digite o numero referente a cor (exemplo '11' para prata): ");
	scanf("%lf", &linha4);
	if(linha4 > 11){
		main();
	}
	total = linha1 * 10;
	total = total + linha2;
	if(linha3 == 0)
{
		total = total * 1;
		printf("O valor da resistencia é : ");
}
	else if(linha3 == 1)
{
		total = total * 10;
		printf("O valor da resistencia é : \e[1;33m");
}
   else if(linha3 == 2)
{
      total = total * 100;
      printf("O valor da resistencia é : \e[1;33m");
}
   else if(linha3 == 3)
{
      total = total * 1000;
      printf("O valor da resistencia é : \e[1;33m");
}
   else if(linha3 == 4)
{
      total = total * 10000;
      printf("O valor da resistencia é : \e[1;33m");
}
   else if(linha3 == 5)
{
      total = total * 100000;
      printf("O valor da resistencia é : \e[1;33m");
}
   else if(linha3 == 6)
{
      total = total * 1000000;
      printf("O valor da resistencia é : \e[1;33m");
}
	else if(linha3 == 10)
{
		total = total / 10;
		printf("O valor da resistencia é : \e[1;33m");
}
	else if(linha3 == 11)
{
		total = total / 100;
		printf("O valor da resistencia é : \e[1;33m");
}



	else{
		printf("O valor total da resistencia é : \e[1;33m");
}

	printf("%lf\n", total);
	if(linha4 == 1)
{
		printf("\nA tolerancia da resistencia é :  +-1 de %lf", total);

}
	if(linha4 == 2)
{
		printf("\nA tolerancia da resistencia é : +-2 de %lf", total);
}
	if(linha4 == 10)
{
		printf("\nA tolerancia da resistencia é : +-5 de %lf", total);
}
	if(linha4 == 11)
{
		printf("\nA tolerancia da resistencia é : +-10 de %lf", total);
}}




