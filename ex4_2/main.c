#include <stdio.h>
#include <stdlib.h>

int multiplicar(int n1, int n2){
    return n1*n2;
}

int somar(int n1, int n2) {
    return n1+n2;
}

int main()
{
    int n1, n2, soma, multiplicacao;
    printf("Digite valores inteiros para n1 e n2: ");
    scanf("%d %d", &n1, &n2);
    printf("\n");
    soma = somar(n1, n2);
    multiplicacao = multiplicar(n1, n2);
    printf("A soma e multiplicacao dos valores %d e %d eh, respectivamente, %d e %d\n", n1, n2, soma, multiplicacao);
    return 0;
}
