#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void main(){
	double preto = 0, castanho = 1, vermelho = 2, laranja = 3, amarelo = 4, verde = 5, azul = 6, roxo = 7, cizento= 8, branco = 9, ouro = 10, prata = 11, linha1, linha2, linha3, linha4, linha5, linha6, total, total2;
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
	if(linha1 == 0){
		main();
	}
	else if(linha1 >= 10){
		main();
	}
   printf("Digite o numero referente a cor da linha 2 (exemplo '7' para roxo): ");
	scanf("%lf", &linha2);
	if(linha2 > 9){
		main();
	}
	printf("Digite o numero referente a cor da linha 3(exemplo '3' para laranja): ");
	scanf("%lf", &linha3);
	if(linha3 > 9){
		main();
	}
	printf("Digite o numero referente a cor da linha 4(exemplo '2' para vermelho): ");
	scanf("%lf", &linha4);
	if(linha4 > 11){
		main();
	}
	printf("Digite o numero referente a cor da linha 5(exemplo '11' para prata): ");
	scanf("%lf", &linha5);
	if(linha5 > 11){
		main();
	}
	printf("Digite o numero referente a cor da linha 6(exemplo '2' para vermelho): ");
	scanf("%lf", &linha6);
	if(linha6 > 11){
		main();
	}
	total = linha1 * 100;
	total2 = linha2 * 10;
	total = total + total2;
	total = total + linha3;
	if(linha4 == 0)
{
		total = total * 1;
		printf("O valor da resistencia é : \e[1;33m");
}
	else if(linha4 == 1)
{
		total = total * 10;
		printf("O valor da resistencia é : \e[1;33m");
}
   else if(linha4 == 2)
{
      total = total * 100;
      printf("O valor da resistencia é : \e[1;33m");
}
   else if(linha4 == 3)
{
      total = total * 1000;
      printf("O valor da resistencia é : \e[1;33m");
}
   else if(linha4 == 4)
{
      total = total * 10000;
      printf("O valor da resistencia é : \e[1;33m");
}
   else if(linha4 == 5)
{
      total = total * 100000;
      printf("O valor da resistencia é : \e[1;33m");
}
   else if(linha4 == 6)
{
      total = total * 1000000;
      printf("O valor da resistencia é : \e[1;33m");
}
	else{
		printf("O valor total da resistencia é : \e[1;33m");
}

	printf("%lf\n", total);
        if(linha5 == 1)
{
                printf("\nA tolerancia da resistencia é :  +-1 de %lf", total);

}
        if(linha5 == 2)
{
                printf("\nA tolerancia da resistencia é : +-2 de %lf", total);
}
        if(linha5 == 10)
{
                printf("\nA tolerancia da resistencia é : +-5 de %lf", total);
}
        if(linha5 == 11)
{
                printf("\nA tolerancia da resistencia é : +-10 de %lf", total);
}
		  if(linha6 == 0)
{
					 printf("\nO coeficiente termico é 200ppm");
}
		  if(linha6 == 1)
{
					 printf("\nO coeficiente termico é 100ppm");
}
		  if(linha6 == 2)
{
                printf("\nO coeficiente termico é 50ppm");
}
        if(linha6 == 3)
{
                printf("\nO coeficiente termico é 15ppm");
}
        if(linha6 == 4)
{
                printf("\nO coeficiente termico é 25ppm");
}
        if(linha6 == 6)
{
                printf("\nO coeficiente termico é 10ppm");
}
        if(linha6 == 7)
{
                printf("\nO coeficiente termico é 5ppm");
}
        if(linha6 == 8)
{
                printf("\nO coeficiente termico é 1ppm");
}









}
