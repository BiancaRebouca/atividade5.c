//Dados um capital, uma taxa de juros mensal e um período em meses, 
//informe o montante ao final de cada mês. O programa deve funcionar como a seguir: 

#include <stdio.h>

int main(){

//variavel
   float capital;
   float juros;
   int periodo;
   int acao;

//saida e entrada
   printf("Qual o capital: ");
   scanf("%f", &capital);

   printf("Qual a taxa de juros: ");
   scanf("%f", &juros);

   printf("Qual o periodo em meses: ");
   scanf("%d", &periodo);

//if
   juros = juros/100;

   for(acao=0 ; acao<periodo ; acao++){

    capital = capital +( capital * juros);  

        printf("Mes: %.2f\n",capital);
}

}