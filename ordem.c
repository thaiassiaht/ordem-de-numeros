#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numeros[3];
    int escolha = 0;

    printf("Digite três números inteiros positivos separados por espaços: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    int cont = 0;
    while (cont == 0){
        printf("Escolha uma das opções:\n");
        printf("(1)Mostre os números em ordem crescente\n");
        printf("(2)Mostre os números em ordem decrescente\n");
        printf("(3)Mostre o menor número entre os demais\n");
        scanf("%d", &escolha);

        if (escolha == 1){
            printf("Números em ordem crescente: %d - %d - %d\n", numeros[0], numeros[1], numeros[2]);
            cont = 1;
        }
        else{
            if (escolha == 2 ){
                printf("Números em ordem decrescente: %d - %d - %d\n", numeros[2], numeros[1], numeros[0]);
                cont = 1;
            }
            else{
                if (escolha == 3){
                    printf("O menor número entre os outros dois: %d - %d - %d\n", numeros[2], numeros[0], numeros[1]);
                    cont = 1;
                }
                else{
                    printf("Opçãoo inválida\n");
                }
            }
        }

    }

    return 0;
}
