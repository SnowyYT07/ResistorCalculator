#include <stdio.h>
#include <stdlib.h>
int main(void) {
    printf("\e[1;36mDigite a quantidade de cores da resistencia (4 / 5 / 6):\033[0m ");
	 int escolha;
    scanf("%d", &escolha);
	 if (escolha == 4) {
        system("./resistencia4linhas.o");
    } else if (escolha == 5) {
        system("./resistencia5linhas.o");
    } else if (escolha == 6) {
        system("./resistencia6linhas.o");
    } else {
        printf("opção invalida.\n");
    }

    return 0;
}
