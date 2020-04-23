#include <stdio.h>
#include <string.h>

int calculadora(float num1, float num2, int operadora){
     switch (operadora){
                case 1:
                        system("cls || clear");
                        printf("O RESULTADO DE %.2f + %.2f = %.2f\n",num1, num2, num1+num2);
                        main();
                        break;
                case 2:
                        system("cls || clear");
                        printf("O RESULTADO DE %.2f - %.2f = %.2f\n",num1, num2, num1-num2);
                        main();
                        break;
                case 3:
                        system("cls || clear");
                        printf("O RESULTADO DE %.2f * %.2f = %.2f\n",num1, num2, num1*num2);
                        main();
                        break;
                case 4:
                        system("cls || clear");
                        printf("O RESULTADO DE %.2f / %.2f = %.2f\n",num1, num2, num1/num2);
                        main();
                        break;
                case 5:
                        system("cls || clear");
                        printf("O RESULTADO DE %.2f ELEVADO A %.2f = %.2f\n",num1, num2, pow(num1,num2));
                        main();
                        break;
                case 6:
                        system("cls || clear");
                        printf("O RESULTADO DE RAIZ %.2f de %.2f = %.2f\n",num1, num2, pow(num2,(1/num1)));
                        main();
                        break;
                case 7:
                        system("cls || clear");
                        printf("O RESULTADO DE RESTO DA DIVISAO ENTRE %.2f E %.2f = %.2f\n",num1, num2, ((int)num1%(int)num2));
                        main();
                        break;
                default:
                        printf("Operacao Invalida");
                }
}

int main(){
    int decisao, operadora;
    float num1, num2;
    char operador;
    
        printf("===============CALCULADORA LIGADA==============\n");
        printf("Deseja realizar uma nova operacao: \n(1 - SIM /// 0 - NAO)\n");
        printf("=>");
        scanf("%i",&decisao);
        if(decisao == 1){
                printf("==================CALCULADORA==================\n");
                printf("Soma (+) ======================== Subtracao (-)\n");
                printf("Divisao (/) ================= Multiplicacao (*)\n");
                printf("Potencia (@) ================ Raiz Quadrada (#)\n");
                printf("Resto da Divisao (!) ========================== \n");
                printf("DIGITE 0 para Finalizar!!!\n");
                printf("2 # 4 = 2 |||| 3 # 64 = 4\n");


/*          PODE SUBSTITUIR AS LINHAS ABAIXO.
                printf("O Tipo da Operacao");
                scanf("%s",&operador);
                printf("Digite o Primeiro Numero: ");
                scanf("%f",&num1);
                printf("Segundo Numero:");
                scanf("%f",&num2);*/


                printf("DIGITE SUA OPERACAO: (EX: 10 + 10)\n");
                scanf("%f",&num1);
                scanf("%s",&operador);
                scanf("%f",&num2);
                if(operador == '+'){
                    printf("Entrou no if\n");
                    operadora = 1;
                    calculadora(num1, num2, operadora);
                }else if(operador == '-'){
                    operadora = 2;
                    calculadora(num1, num2, operadora);
                }else if(operador == '*'){
                    operadora = 3;
                    calculadora(num1, num2, operadora);
                }else if(operador == '/'){
                    operadora = 4;
                    calculadora(num1, num2, operadora);
                }else if(operador == '@'){
                    operadora = 5;
                    calculadora(num1, num2, operadora);
                }else if(operador == '#'){
                    operadora = 6;
                    calculadora(num1, num2, operadora);
                }else if(operador == '!'){
                    operadora = 7;
                    calculadora(num1, num2, operadora);
                }else if(operador == '0' ){
                        printf("...");
                } else {
                    printf("Voce Digitou uma Operacao Invalida.\n");
                }
                    
        }else if(decisao == 0) {
            printf("============DESLIGANDO CALCULADORA...==========");
        } else {
            printf("==============OPERACAO INVALIDA!!==============\n");
            printf("============DESLIGANDO CALCULADORA...==========");
        }
    
}




