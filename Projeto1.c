#include<stdio.h>

int main ()
{
    //Declarar variaveis para menu principal dando seguimento menus secundarios
    int opcao;
    int opcaoPortugues;
    int opcaoIngles;

    //mensagem de boas vindas ao utilizador
    printf("Bem-vindo(a) à nossa aplicação de Cálculos Eletricos \n");

    //Apresentar opções de menu
    printf("1- Menu em Portugues \n");
    printf("2- English Menu \n");
    printf("3- Sair \n");

    //Dar a escolher ao utilizador a opçao desejada
    printf("Preparado(a) para começar? Vamos facilitar seus cálculos elétricos! \n");
    printf ("Digite a opçao Desejada:____");
    scanf("%d", &opcao);

    //Processar a opção escolhida
    switch (opcao)
    {
        case 1:
            printf("Escolheste o Menu em Portugues, Vamos Começar! \n");
                while (1)
                {
                    //Mostrar opçoes:
                    printf("--------MENU_EM_PORTUGUES-------- \n");
                    printf("1- Calcular resistencias em serie ou paralelo \n");
                    printf("2- Calculos de bobines \n");
                    printf("3- Calcular capacitancia de condensadores \n");
                    printf("4- Conversoes Estrtela-Triangulo \n");
                    printf("5- Calculos Lei de Ohm \n");
                    printf("6- Descobrir valores de resistencias atraves de cores \n");
                    printf("7- Calcular Divisor de Corrente");
                    printf("8- Calcular Divisor de tensao \n");
                    printf("9- Gerador de Ondas \n");
                    printf("10- Voltar ao Menu Principal \n");

                    printf("Escolha uma opcao:____");
                    scanf("%d", &opcaoPortugues);

                }
    }
}