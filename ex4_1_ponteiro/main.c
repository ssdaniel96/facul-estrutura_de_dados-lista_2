#include <stdio.h>
#include <stdlib.h>

void calcular_media_simples(float n1, float n2, float n3, float *result){
    *result = (n1+n2+n3)/3.0;
}

void calcular_media_ponderada(float n1, float n2, float n3, float *result){
    *result = ((n1*2.0)+(n2*3.0)+(n3 * 5.0))/10.0;
}

int main()
{
    float n1, n2, n3, media_simples, media_ponderada;
    printf("Insira o valores da nota1, nota2 e nota3 (respectivamente): ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("\n");
    calcular_media_simples(n1, n2, n3, &media_simples);
    calcular_media_ponderada(n1, n2, n3, &media_ponderada);
    printf("O valor para media simples eh: %.2f\nO valor para media ponderada eh: %.2f", media_simples, media_ponderada);
    return 0;
}
