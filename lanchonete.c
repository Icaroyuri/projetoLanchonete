#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(){

	setlocale(LC_ALL,"Portuguese");
 
  // variaveis
 int matricula;
 char codigoitem[15];
 char nome[100], nomepro[100];
 char endereco[200], descpro[200];
 char telefone[14];
 int dia, mes, ano, diap, mesp, anop, quantiten;
 double salario, preco;
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
  if (scanf("%d", &d) !=1){
    int clear;
    while((clear = getchar()) != '\n');
    d = -1;
  }
  
      switch (d){
      case 1:
          //coleta de dados defuncionarios e repetição
          continuar = 1;
          while(continuar){
            //menu funcionários

                printf("\n|================ Menu Funcionários ================| \n");
                printf("| Digite 1 para cadastrar um funcionário;           |\n");
                printf("| Digite 2 para visualizar os dados do funcionário; |\n");
                printf("| Digite 0 para sair da seção!                      |\n");
                printf("|====================================================|\n");
                printf("Opção: ");
                if (scanf("%d", &opcao) !=1){
                    int clear;
                    while((clear = getchar()) != '\n');
                    opcao = -1;
                }
                  
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
                      printf("Salário:R$ %.2lf\n", salario);
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
         //coleta de dados de estoque e repetição
          continuar = 1;
          while(continuar){
            //menu de esoque
          

                printf("\n|================ Menu de Estoque =================| \n");
                printf("| Digite 1 para cadastrar um iten no estoque;      |\n");
                printf("| Digite 2 para visualizar os dados do iten;       |\n");
                printf("| Digite 0 para sair da seção!                   |\n");
                printf("|==================================================|\n");
                printf("Opção: ");
                if (scanf("%d", &opcao) !=1){
                    int clear;
                    while((clear = getchar()) != '\n');
                    opcao = -1;
                }
                  
                switch (opcao){
                  
                  case 1://cadastrar o iten
                      printf("Digite o código do iten: \n");
                      fgets(codigoitem, sizeof(codigoitem), stdin);
                      codigoitem[strcspn(codigoitem,"\n")]='\0';

                     
                      printf("Digite o nome do produto: \n");
                      fgets(nomepro, sizeof(nomepro), stdin);
                      nomepro[strcspn(nomepro,"\n")]='\0';

                      printf("Digite a descrição do produto: \n");
                      fgets(descpro, sizeof(descpro), stdin);
                      descpro[strcspn(descpro,"\n")]='\0';

                      printf("Digite o preço do produto: \n");
                      scanf("%lf", &preco);
                                            
                      printf("Digite a Data de validade do produto dia, mês e ano: \n");
                      scanf("%d %d %d", &diap, &mesp, &anop);

                      printf("Digite a quantidade do iten em estoque: \n");
                      scanf("%d", &quantiten);

                      printf("\n=>=>=>=>=>=>=>=>=> Produto Cadastro com Sucesso! <=<=<=<=<=<=<=<=<=\n");
                    break;
                    
                  case 2:
                      printf("\n*************** Iten cadastrado e em Estoque ****************\n");
                      printf("Código do Iten: %s\n", codigoitem);
                      printf("Nome do produto: %s\n", nomepro);
                      printf("Descrição do produto: %s\n",descpro);
                      printf("Preço do Produto: R$ %.2lf\n", preco);
                      printf("Data de Validade do produto: Val %02d/%02d/%04d\n", diap, mesp,anop);
                      printf("Quantidade do iten em estoque: %d\n", quantiten);
                      printf("*************************************************************\n");
                    
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
