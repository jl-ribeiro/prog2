#include <stdio.h>

int main(){
	int cont_char = 0;
	char string[101];
	printf("Digite o uma palavra (max. 100 caracteres): ");
	scanf("%s", string);
	for(int i = 0; i < 101; i++){
		if(string[i] == '\0')
			break;
		else
			cont_char++;
	}
	printf("A palavra possui %d caracteres.\n", cont_char);
	return 1;
}
