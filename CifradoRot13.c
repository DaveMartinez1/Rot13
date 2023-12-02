#include <stdio.h>

#define TAMANO_MAX 60

void rot13(char texto[TAMANO_MAX]) {
    int i = 0;

    while (texto[i] != '\0') {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = ((texto[i] - 'A' + 13) % 26) + 'A';
        } else if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = ((texto[i] - 'a' + 13) % 26) + 'a';
        }
        i++;
    }
    
}

int main() {
    char texto[TAMANO_MAX];
    
    printf("Ingrese el texto a cifrar: ");
    fgets(texto, sizeof(texto), stdin);

    rot13(texto);

    printf("Resultado: %s\n", texto);

    return 0;
}