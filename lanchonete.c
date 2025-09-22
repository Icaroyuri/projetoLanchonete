#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(){

	setlocale(LC_ALL,"Portuguese");
 
  // variaveis
 int matricula;
 char nome[100];
 char endereco[200];
 char telefone[14];
 int dia, mes, ano;
 double salario;
 char turno[6];
 int opcao;
 int continuar = 1;
 int d = -1;

 do{ 
  
  //Menu Principal
  printf("|*************** Bem vindo a Lanchonete Full Belly ***************|\n");
  printf("|               Escolha uma das opções  a baixo:                |\n");
  printf("| 1 - Sistema de Funcionários.                                   |\n");
  printf("| 2 - Sistema de Estoque.                                         |\n");
  printf("| 3 - Sistema de Vendas.                                          |\n");
  printf("| 0 - Sair                                                        |\n");
  printf("|_________________________________________________________________|\n");
  printf("Opção:)>");
  scanf("%d", &d);
  
      switch (d){
      case 1:
          //coleta de dados e repetição
          continuar = 1;
          while(continuar){
            //menu

                printf("\n|================ Menu Funcionários ================| \n");
                printf("| Digite 1 para cadastrar um funcionário;           |\n");
                printf("| Digite 2 para visualizar os dados do funcionário; |\n");
                printf("| Digite 0 para sair do programa!                    |\n");
                printf("|====================================================|\n");
                printf("Opção: ");
                scanf("%d", &opcao);
                  
                

                switch (opcao){
                  
                  case 1://cadastrar funcionário
                      printf("Digite a matricula do Funcionário: \n");
                      scanf("%d", &matricula);

                      getchar();

                      printf("Digite o nome completo do Funcionário: \n");
                      fgets(nome, sizeof(nome), stdin);
                      nome[strcspn(nome,"\n")]='\0';

                      printf("Digite o endereço do Funcionário: \n");
                      fgets(endereco, sizeof(endereco), stdin);
                      endereco[strcspn(endereco,"\n")]='\0';

                      printf("Digite o telefone do Funcionário: \n");
                      fgets(telefone, sizeof(telefone), stdin);
                      telefone[strcspn(telefone,"\n")]='\0';

                      printf("Digite a Data de nascimento do Funcionário dia, mês e ano: \n");
                      scanf("%d %d %d", &dia, &mes, &ano);

                      printf("Digite o valor do salário do Funcionário: \n");
                      scanf("%lf", &salario);

                      getchar();

                      printf("Digite o turno de trabalho do Funcionário: \n");
                      fgets(turno, sizeof(turno),stdin);
                      turno[strcspn(turno,"\n")]='\0';

                      printf("\n=>=>=>=>=>=>=>=>=> Cadastro finalizado <=<=<=<=<=<=<=<=<=\n");
                    
                    break;
                  case 2:
                      printf("\n*******************************\n");
                      printf("Matricula: %05d\n", matricula);
                      printf("Nome: %s\n", nome);
                      printf("Endereço: %s\n",endereco);
                      printf("Telefone: %s\n", telefone);
                      printf("Data de nascimento: %02d/%02d/%04d\n", dia, mes,ano);
                      printf("Salário: %.2lf\n", salario);
                      printf("Turno de trabalho: %s\n",turno);
                      printf("******************************\n");
                    
                    break;
                  case 0:
                    printf("Voltando ao Menu principal ...\n");
                    continuar = 0;
                    break;

                  default:
                      printf("Opção invalida!\n");
                    break;
                  }
                }
        break;
      case 2:
        printf("Sistema de Estoque.\n");
        break;

      case 3:
        printf("Sistema de Vendas.\n");
        break;
      case 0:
        printf("\n Encerrando...\n");
        break;  

      default:
        printf("Opção inválida! \n");
        break;
      }
    

  } while (d!= 0 && d< 4);
 
  return 0;

}
