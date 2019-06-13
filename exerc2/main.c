
#include <stdio.h>

int main(){
    int a, b;
    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    if(a > 0 && b > 0){
        printf("Divisao inteira: a / b = %d\n", a /b);
        printf("Divisao real: a / b = %f", (float) a / b);
    }
    else
        printf("Erro encontrado, verifique se  A e B sao positivos e se B eh diferente de zero.");
    return 0;
}
