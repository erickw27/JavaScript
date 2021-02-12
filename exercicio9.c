#include <stdio.h>
#include <string.h>


typedef struct {
    char nome[100];
    char cpf[11];
    int idade;
} Pessoa;


int main() {
    Pessoa usuarios[2];

    // Primeiro usuário
    strcpy(usuarios[0].nome, "Fulano de Souza");
    usuarios[0].idade = 30;

    // Segundo usuário
    strcpy(usuarios[1].nome, "Sicrano da Silva");
    usuarios[1].idade = 20;

    // Exibe usuários
    for (int contador = 0; contador < 2; contador++) {
        Pessoa usuario = usuarios[contador];
        printf("Usuário: %s, idade: %d\n", usuario.nome, usuario.idade);
    }
}
