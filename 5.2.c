//Dadas as idades dos pacientes de uma clínica, informe a idade daquele mais idoso.
//Considere que todas as idades são distintas e que o número de pacientes é informado pelo usuário,
// no momento da execução do programa. 
#include <stdio.h>


int main(){

//variavel
    int pacientes;
    int acao;
    int idade;
    int idade1=0;
    
//saida e entrada
    printf("informe o numero de pacientes : ");
    scanf("%d", &pacientes);

//repeticao
for(acao=0;acao<pacientes;acao++){

    printf("Qual a idade: ");
    scanf("%d", &idade);

          if(idade>idade1){
          idade1=idade;
          }   
}

//saida
    printf("O paciente mais velho tem %d anos", idade1);
}

    


    
