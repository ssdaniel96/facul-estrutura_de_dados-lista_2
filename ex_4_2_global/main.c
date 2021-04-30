#include <stdio.h>
#include <stdlib.h>
int n1, n2, soma, multiplicacao;

void multiplicar(){
    multiplicacao = n1*n2;
}

void somar() {
    soma = n1+n2;
}

int main()
{
    printf("Digite valores inteiros para n1 e n2: ");
    scanf("%d %d", &n1, &n2);
    printf("\n");
    somar();
    multiplicar();
    printf("A soma e multiplicacao dos valores %d e %d eh, respectivamente, %d e %d\n", n1, n2, soma, multiplicacao);
    return 0;
}
