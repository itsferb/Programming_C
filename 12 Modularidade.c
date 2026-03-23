#include <stdio.h>
 
// Função genérica para entrada de dados
void entradaDados() {
    // código para a função entradaDados
}
 
// Função genérica para cálculo da média
float calcularMedia() {
    // código para a função calcularMedia
}
 
// Função genérica para exibir dados
void exibirMedia() {
    // código para a função exibirMedia
}
 
int main() {
    float media;
 
    entradaDados();
    media = calcularMedia();
    exibirMedia();
 
    return 0;
}

/*
Facilita a reutilização de código e manutenção futura, pois primeiro você cria as funções e depois só aciona elas.
*/