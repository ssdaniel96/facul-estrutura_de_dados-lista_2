#include <stdio.h>
#include <stdlib.h>
//vou escolher o primeiro cujos parâmetros eram por valor

float calcular_media_simples(float n1, float n2, float n3){
    return (n1+n2+n3)/3.0;
}

float calcular_media_ponderada(float n1, float n2, float n3){
    return ((n1*2.0)+(n2*3.0)+(n3 * 5.0))/10.0;
}

int main()
{
    // decidi usar só um ponteiro
    float n1, n2, n3, media_simples, media_ponderada, (*calcular)(float, float, float);
    calcular = calcular_media_simples;
    printf("Insira o valores da nota1, nota2 e nota3 (respectivamente): ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("\n");
    media_simples = calcular(n1, n2, n3);
    calcular = calcular_media_ponderada;
    media_ponderada = calcular(n1, n2, n3);
    printf("O valor para media simples eh: %.2f\nO valor para media ponderada eh: %.2f", media_simples, media_ponderada);
    return 0;
}
