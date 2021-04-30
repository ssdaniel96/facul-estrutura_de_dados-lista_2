#include <iostream>

using namespace std;

void multiplicar(int n1, int n2, int *multiplicacao){
    *multiplicacao = n1*n2;
}

void somar(int n1, int n2, int *soma) {
    *soma = n1+n2;
}

int main()
{
    int n1, n2, soma, multiplicacao;
    printf("Digite valores inteiros para n1 e n2: ");
    scanf("%d %d", &n1, &n2);
    printf("\n");
    somar(n1, n2, &soma);
    multiplicar(n1, n2, &multiplicacao);
    printf("A soma e multiplicacao dos valores %d e %d eh, respectivamente, %d e %d\n", n1, n2, soma, multiplicacao);
    return 0;
}
