#include <stdio.h>

int main() {
    int op, cont = 1; // Inicializa cont como 1
    float n1, n2, res;
    
    while(cont == 1) { // Usa == para comparação
        printf("Digite 1 para somar:\n");
        printf("Digite 2 para subtrair:\n");
        printf("Digite 3 para multiplicar:\n");
        printf("Digite 4 para dividir:\n");
        scanf("%d", &op);
        
        printf("Insira o primeiro número:\n");
        scanf("%f", &n1);
        
        printf("Insira o segundo número:\n"); // Corrigido o prompt
        scanf("%f", &n2);
        
        if(op == 1) {
            res = n1 + n2;
            printf("Soma: %f.\n", res);
        } else if(op == 2) {
            res = n1 - n2;
            printf("Subtração: %f.\n", res);
        } else if(op == 3) {
            res = n1 * n2;
            printf("Multiplicação: %f.\n", res);
        } else if(op == 4) {
            if(n2 == 0) {
                printf("Divisão por zero \n");
            } else {
                res = n1 / n2;
                printf("Divisão: %f.\n", res);
            }
        } else {
            printf("Opção inválida.\n");
        }
        
        printf("Se deseja continuar digite 1:\n");
        printf("Insira quaquer outro número:\n");
        scanf("%d", &cont);
	printf("Fim.\n")
    }

   
    return 0;
}
