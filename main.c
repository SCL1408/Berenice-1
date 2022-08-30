#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Declara��o de vari�veis*/
    /*VARI�VEIS INTEIRAS
    escolha controla a escolha do usu�rio no menu
    quantidade armazena o n�mero de itens que o cliente deseja
    parcela armazena o valor de cada parcela no caso de uma compra a prazo
    invalido controla o codigo pulando os comandos seguintes ap�s uma entrada inv�lida*/
    int escolha, quantidade, parcela;
    /*VARI�VEIA DE PONTO FLUTUANTE
    valor_unitario armazena o valor de um item do produto escolhido
    valor_quantidade armazena o valor do total de intens selecionados
    valor_final armazena o valor final da compra, ap�s o c�lculo do desconto ou acr�scimo
    valor_pago calcula o valor inicialmente pago pelo cliente (usado no c�lculo do troco)
    troco armazena o valor do troco da compra*/
    float valor_unitario, valor_quantidade, valor_final, valor_pago, troco;
    /*Exibi��o do menu de produtos e escolha pelo usu�rio*/
    printf("Selecione o item a ser comprado digitando seu respectivo codigo\n");
    printf("	Codigo	|         Produto	|	  Preco");
    printf("\n---------------	|-----------------------|----------------------");
    printf("\n	1	|      Pao de forma	|	R$ 7.50");
    printf("\n	2	|     Pao de centeio	|	R$ 8.69");
    printf("\n	3	|      Broa de milho	|	R$ 5.00");
    printf("\n	4	|          Sonho	|	R$ 4.50");
    printf("\n	5	|         Tubaina	|	R$ 3.25");
    printf("\nEscolha: ");
    scanf("%i", &escolha);
    getchar();
    printf("\n\n");
    switch(escolha)
    {
        case 1:
            printf("Pao de forma selecionado");
            /*ACII art de um p�o*/
            printf("\n    _______");
            printf("\n   /       )");
            printf("\n  /_____   | ");
            printf("\n (  '   ) / ");
            printf("\n  |.  '| / ");
            printf("\n  |____|/  ");
            valor_unitario = 7.5;//coleta o valor de 1un desse item
            break;
        case 2:
            printf("Pao de centeio selecionado");
            /*ACII art de um p�o*/
            printf("\n    _______");
            printf("\n   /       )");
            printf("\n  /_____   | ");
            printf("\n (  '   ) / ");
            printf("\n  |.  '| / ");
            printf("\n  |____|/  ");
            valor_unitario = 8.69;//coleta o valor de 1un desse item
            break;
        case 3:
            printf("Broa de milho selecionada");
            /*ASCCI art de uma broa*/
            printf("\n       ___  ");
            printf("\n    _.'   `._  ");
            printf("\n  .'         `.");
            printf("\n_(_____________)___");
            valor_unitario = 5;//coleta o valor de 1un desse item
            break;
        case 4:
            printf("Sonho selecionado");
            /*ASCII art de um sonho*/
            printf("\n  .-'''-.");
            printf("\n /' .  '. \\ ");
            printf("\n(`-..:...-')");
            printf("\n ;-......-;");
            printf("\n  '------'");
            valor_unitario = 4.5;//coleta o valor de 1un desse item
            break;
        case 5:
            printf("Tubaina selecionada");
            /*ASCII art da tuba�na*/
            printf("\n            _                                   ");
            printf("\n            _                                   ");
            printf("\n           ! !                                   ");
            printf("\n           ; :                                ");
            printf("\n          ;   :                                ");
            printf("\n         ;_____:                          ");
            printf("\n         !Tuba !                                 ");
            printf("\n         !_____!                                ");
            printf("\n         :     :");
            printf("\n         :     ;                                       ");
            printf("\n         .'   '.                             ");
            printf("\n         :     :                            ");
            printf("\n          '''''");
            valor_unitario = 3.25;//coleta o valor de 1un desse item
            break;
        default:
            printf("Escolha invalida");
            printf("\n\n");
            return 1;
            break;
    }
    printf("\n\n");
    printf("Insira a quantidade desejada: ");//coleta da quantidade desejada pelo cliente
    scanf("%i", &quantidade);
    getchar();
    valor_quantidade = valor_unitario*quantidade;//c�lculo do valor total dos itens desejados
    printf("\n\nO valor bruto da compra eh %.2f reais.\nEscolha a forma de pagamento abaixo digitando seu codigo", valor_quantidade);//exibe o valor total bruto
    printf("\n\n");
    if(valor_quantidade<=50)
    {
        /*apresenta o menu de sele�ao da forma de pagamento e coleta a escolha do usu�rio*/
        printf("\n       Codigo	|	Forma de Pagamento    	|	Descricao");
        printf("\n---------------	|------------------------------	|--------------------------------------");
        printf("\n	1	|	       A vista		|      5 porcento de desconto no total");
        printf("\n	2	|	  A prazo (ate 3x)	|     5 porcento de acrescimo no total");
        printf("\n	3	|	A prazo (acima de 3x)	|     8 porcento de acrescimo no total");
        printf("\nEscolha: ");
        scanf("%i", &escolha);
        getchar();
        /*coleta do n�mero de parcelas desejadas pelo cliente*/
        if(escolha==2)
        {
            printf("Insira o numero de parcelas desejadas: ");
            scanf("%i", &parcela);
            getchar();
            if (parcela==1)
            {
                escolha=1;
            }
            else if (parcela>3)//corre��o de sele��o caso o usu�rio isira mais de 3 parcelas, mas tinha seleciona a op��o de menos ou 3
            {
                escolha=3;
            }
        }else if(escolha==3)
        {
            printf("Insira o numero de parcelas desejadas: ");
            scanf("%i", &parcela);
            getchar();
            if (parcela==1)
            {
                escolha=1;
            }
            else if (parcela<=3)//corre��o de sele��o caso o usu�rio isira menos de 3 parcelas, mas tinha seleciona a op��o de mais de 3
            {
                escolha=2;
            }
        }else if(escolha>3)
        {
            printf("Opcao invalida");
            printf("\n\n");
            return 2;
        }
    }else if(valor_quantidade>50 && valor_quantidade<=100)
    {
        /*apresenta o menu de sele�ao da forma de pagamento e coleta a escolha do usu�rio*/
        printf("\n       Codigo	|	Forma de Pagamento    	|	Descricao");
        printf("\n---------------	|------------------------------	|--------------------------------------");
        printf("\n	1	|	       A vista		|     10 porcento de desconto no total");
        printf("\n	2	|	  A prazo (ate 3x)	|     5 porcento de acrescimo no total");
        printf("\n	3	|	A prazo (acima de 3x)	|     8 porcento de acrescimo no total");
        printf("\nEscolha: ");
        scanf("%i", &escolha);
        getchar();
        if (escolha==1)//reajuste da sele��o para o switch a seguir
        {
            escolha=4;
        } else if(escolha==2)
        {
            printf("Insira o numero de parcelas desejadas: ");
            scanf("%i", &parcela);
            getchar();
            if (parcela==1)
            {
                escolha=4;
            }
            else if (parcela>3)//corre��o de sele��o caso o usu�rio isira mais de 3 parcelas, mas tinha seleciona a op��o de menos ou 3
            {
                escolha=3;
            }
        }else if(escolha==3)
        {
            printf("Insira o numero de parcelas desejadas: ");
            scanf("%i", &parcela);
            getchar();
            if (parcela==1)
            {
                escolha=4;
            }
            else if (parcela<=3)//corre��o de sele��o caso o usu�rio isira menos de 3 parcelas, mas tinha seleciona a op��o de mais de 3
            {
                escolha=2;
            }
        }else
        {
            printf("Opcao invalida");
            printf("\n\n");
            return 3;
        }
    }else//valor quantidade>100
    {
        /*apresenta o menu de sele�ao da forma de pagamento e coleta a escolha do usu�rio*/
        printf("\n       Codigo	|	Forma de Pagamento    	|	Descricao");
        printf("\n---------------	|------------------------------	|--------------------------------------");
        printf("\n	1	|	       A vista		|     18 porcento de desconto no total");
        printf("\n	2	|	  A prazo (ate 3x)	|     5 porcento de acrescimo no total");
        printf("\n	3	|	A prazo (acima de 3x)	|     8 porcento de acrescimo no total");
        printf("\nEscolha: ");
        scanf("%i", &escolha);
        getchar();
        if (escolha==1)//reajuste da sele��o para o switch a seguir
        {
            escolha=5;
        }else if(escolha==2){
            printf("Insira o numero de parcelas desejadas: ");
            scanf("%i", &parcela);
            getchar();
            if (parcela==1)
            {
                escolha=5;
            }
            else if (parcela>3)//corre��o de sele��o caso o usu�rio isira mais de 3 parcelas, mas tinha seleciona a op��o de menos ou 3
            {
                escolha=3;
            }
        }else if(escolha==3){
            printf("Insira o numero de parcelas desejadas: ");
            scanf("%i", &parcela);
            getchar();
            if (parcela==1)
            {
                escolha=5;
            }
            else if (parcela<=3)//corre��o de sele��o caso o usu�rio isira menos de 3 parcelas, mas tinha seleciona a op��o de mais de 3
            {
                escolha=2;
            }
        }else
        {
            printf("Opcao invalida");
            printf("\n\n");
            return 4;
        }
    }
    printf("\n\n");
    printf("Operacao: ");
    switch(escolha)//switch que calcula o valor final da compra
    {
        case 1://A vista <=50 reais
            valor_final = 0.95*valor_quantidade;
            printf("5 porcento de desconto");
            break;
        case 2://A prazo <= 3 parcelas
            valor_final = 1.05*valor_quantidade;
            printf("5 porcento de acrescimo");
            break;
        case 3://A prazo >3 parcelas
            valor_final = 1.08*valor_quantidade;
            printf("8 porcento de acrescimo");
            break;
        case 4://A vista >50 e <=100 reais
            valor_final = 0.9*valor_quantidade;
            printf("10 porcento de desconto");
            break;
        case 5://A vista >100 reais
            valor_final = 0.82*valor_quantidade;
            printf("18 porcento de desconto");
            break;
        default:
            printf("Escolha inv�lida");
            printf("\n\n");
            return 5;
            break;
    }
    printf("\n");
    printf("Sera pago %.2f reais", valor_final);//apresenta o resultado final
    switch(escolha)
    {
        case 1: case 4: case 5://cases de pagamento a vista vai calcular o TROCO
            printf("\n\nCALCULO DO TROCO");
            printf("\nInsira o valor pago pelo cliente: ");
            scanf("%f", &valor_pago);
            getchar();
            if (valor_pago<valor_final)
            {
                printf("Falta dinheiro. Pague o que deve!");
            }else if(valor_pago==valor_final)
            {
                printf("Nao ha necessidade de troco");
            }else
            {
                troco=valor_pago-valor_final;
                printf("O troco eh de: %.2f", troco);
            }
            break;
        case 2: case 3://Apresenta o numero de parcela e o valor de cada uma
            printf(" em %i parcelas de %.2f reais", parcela, (valor_final/parcela));
            break;
        default:
            /*default vazio intencionalmente, pois representa entrada inv�lida e o usu�rio j� foi informado no switch anterior*/
            break;
    }
    printf("\n\n");
    printf("Agradecemos a preferencia!\n");
    printf("\n\n");
    return 0;
}
