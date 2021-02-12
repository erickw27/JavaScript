#include <stdio.h>
#include <string.h>


typedef struct {
    char nome[100];
    char cpf[11];
    int idade;
} Pessoa;


int main() {
    Pessoa usuario;
    strcpy(usuario.nome, "Evandro Myller");
    usuario.idade = 30;

    printf("Olá, %s!\n", usuario.nome);
}
