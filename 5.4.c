//Numa eleição há três candidatos, identificados como A, B e C. Dados os votos dos eleitores,
// informe o resultado da eleição, conforme exemplificado a seguir:

#include <stdio.h>
int main(){

int eleitores;
int acao;
char voto;
int soma=0;
int soma1=0;
int soma2=0;
int soma3=0;



printf("Informe o numero de eleitores: ");
scanf("%d", &eleitores);

    for(acao=0; acao<eleitores; acao++){
    printf("Qual dos candidatos A, B ou C : ");
    scanf("%*c%c", &voto);

        if(voto=='A'){
        soma=soma+1;
    }

        else if(voto=='B'){
        soma1=soma1+1;
    }

        else if(voto=='C'){
        soma2=soma2+1;
    }

        else{
        soma3=soma3+1;
    }

    }

    printf("Resultado da eleicao: \n");
    printf("A: %d \n", soma );
    printf("B: %d \n", soma1);
    printf("C: %d \n", soma2);
    printf("nulo: %d", soma3);
}



