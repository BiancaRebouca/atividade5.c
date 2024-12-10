//Dadas as notas dos alunos de uma turma, informe a média da turma. O programa deve funcionar como indicado a seguir:

#include <stdio.h>

int main() {

//declaração de variável

    int alunos;
    int acao;
    float nota;
    float soma=0;

//saida e entrada

    printf("informe o numero de alunos: ");
    scanf("%d", &alunos);

//acao
for(acao=0; acao<alunos; acao++){

    printf("qual a nota: ");
    scanf("%f",&nota);

        soma = nota + soma;
}

//acao cálculo

    soma = soma/alunos;

        printf("Media da turma e %.2f \n",soma);


}
