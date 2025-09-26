/*
Grupo:
Gustavo Henrique Nascimento Silva
Matheus Augusto Eleoterio De Souza
Denilson Porfirio de Lima 
Polibio Cássio Alves da Costa 
Mateus Melo Rodrigues Morais
Felipe Alves Figueiredo
Icaro Yuri Veloso Rodrigues*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main()
{

  setlocale(LC_ALL, "Portuguese");

  // variaveis
  int matricula = 0;
  char codigoitem[15] = "";
  char nome[100] = "";
  char nomepro[100] = "";
  char endereco[200] = "";
  char descpro[200] = "";
  char telefone[14] = "";
  int dia = 0;
  int mes = 0;
  int ano = 0;
  int diap = 0;
  int mesp = 0;
  int anop = 0;
  double salario = 0;
  double preco = 0;
  char turno[6] = "";
  int opcao = 0;
  int continuar = 1;
  int d = -1;
  int quantVendidos = 0;
  double fatura = 0.0;
  char codigoVenda[15] = "";
  int matriculaVenda = 0;
  int quantiten = 0;
  int funcionario_cadastrado = 0;
  int item_cadastrado = 0;

  do
  {

    // Menu Principal
    printf("|*************** Bem vindo a Lanchonete Full Belly ***************|\n");
    printf("|               Escolha uma das opções  a baixo:                |\n");
    printf("| 1 - Sistema de Funcionários.                                   |\n");
    printf("| 2 - Sistema de Estoque.                                         |\n");
    printf("| 3 - Sistema de Vendas.                                          |\n");
    printf("| 0 - Sair                                                        |\n");
    printf("|_________________________________________________________________|\n");
    printf("Opção:)>");
    if (scanf("%d", &d) != 1)
    {
      int clear;
      while ((clear = getchar()) != '\n')
        ;
      d = -1;
    }

    switch (d)
    {
    case 1:
      // coleta de dados defuncionarios e repetição
      continuar = 1;
      while (continuar)
      {
        // menu funcionários

        printf("\n|================ Menu Funcionários ================| \n");
        printf("| Digite 1 para cadastrar um funcionário;           |\n");
        printf("| Digite 2 para visualizar os dados do funcionário; |\n");
        printf("| Digite 0 para sair da seção!                      |\n");
        printf("|====================================================|\n");
        printf("Opção: ");
        if (scanf("%d", &opcao) != 1)
        {
          int clear;
          while ((clear = getchar()) != '\n')
            ;
          opcao = -1;
        }

        switch (opcao)
        {

        case 1: // cadastrar funcionário
          printf("Digite a matricula do Funcionário: \n");
          scanf("%d", &matricula);

          getchar();

          printf("Digite o nome completo do Funcionário: \n");
          fgets(nome, sizeof(nome), stdin);
          nome[strcspn(nome, "\n")] = '\0';

          printf("Digite o endereço do Funcionário: \n");
          fgets(endereco, sizeof(endereco), stdin);
          endereco[strcspn(endereco, "\n")] = '\0';

          printf("Digite o telefone do Funcionário: \n");
          fgets(telefone, sizeof(telefone), stdin);
          telefone[strcspn(telefone, "\n")] = '\0';

          printf("Digite a Data de nascimento do Funcionário dia, mês e ano, separados por espaços (ex: xx xx xxxx): \n");
          scanf("%d %d %d", &dia, &mes, &ano);

          printf("Digite o valor do salário do Funcionário: \n");
          scanf("%lf", &salario);

          getchar();

          printf("Digite o turno de trabalho do Funcionário: \n");
          fgets(turno, sizeof(turno), stdin);
          turno[strcspn(turno, "\n")] = '\0';

          printf("\n=>=>=>=>=>=>=>=>=> Cadastro finalizado <=<=<=<=<=<=<=<=<=\n");
          funcionario_cadastrado = 1;
          break;

        case 2: // Visualizar o funcionário
          if (funcionario_cadastrado == 1)
          {
            printf("\n*******************************\n");
            printf("Matricula: %05d\n", matricula);
            printf("Nome: %s\n", nome);
            printf("Endereço: %s\n", endereco);
            printf("Telefone: %s\n", telefone);
            printf("Data de nascimento: %02d/%02d/%04d\n", dia, mes, ano);
            printf("Salário:R$ %.2lf\n", salario);
            printf("Turno de trabalho: %s\n", turno);
            printf("******************************\n");
          }
          else
          {
            printf("\n*** Nenhum funcionário cadastrado ***\n");
            printf("Matricula: \n");
            printf("Nome: \n");
            printf("Endereço: \n");
            printf("Telefone: \n");
            printf("Data de nascimento: \n");
            printf("Salário: \n");
            printf("Turno de trabalho: \n");
            printf("*************************************\n");
          }
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
      // coleta de dados de estoque e repetição
      continuar = 1;
      while (continuar)
      {
        // menu de estoque

        printf("\n|================ Menu de Estoque =================| \n");
        printf("| Digite 1 para cadastrar um iten no estoque;      |\n");
        printf("| Digite 2 para visualizar os dados do iten;       |\n");
        printf("| Digite 0 para sair da seção!                   |\n");
        printf("|==================================================|\n");
        printf("Opção: ");
        if (scanf("%d", &opcao) != 1)
        {
          int clear;
          while ((clear = getchar()) != '\n')
            ;
          opcao = -1;
        }

        switch (opcao)
        {

        case 1: // cadastrar o item
          getchar();
          printf("Digite o código do iten: \n");
          fgets(codigoitem, sizeof(codigoitem), stdin);
          codigoitem[strcspn(codigoitem, "\n")] = '\0';

          printf("Digite o nome do produto: \n");
          fgets(nomepro, sizeof(nomepro), stdin);
          nomepro[strcspn(nomepro, "\n")] = '\0';

          printf("Digite a descrição do produto: \n");
          fgets(descpro, sizeof(descpro), stdin);
          descpro[strcspn(descpro, "\n")] = '\0';

          printf("Digite o preço do produto: \n");
          scanf("%lf", &preco);

          printf("Digite a Data de validade do produto dia, mês e ano, separados por espaço (ex: xx xx xxxx): \n");
          scanf("%d %d %d", &diap, &mesp, &anop);

          printf("Digite a quantidade do iten em estoque: \n");
          scanf("%d", &quantiten);

          printf("\n=>=>=>=>=>=>=>=>=> Produto Cadastro com Sucesso! <=<=<=<=<=<=<=<=<=\n");
          item_cadastrado = 1;

          break;

        case 2: // Visualizar o item
          if (item_cadastrado == 1)
          {
            printf("\n*************** Iten cadastrado e em Estoque ****************\n");
            printf("Código do Iten: %s\n", codigoitem);
            printf("Nome do produto: %s\n", nomepro);
            printf("Descrição do produto: %s\n", descpro);
            printf("Preço do Produto: R$ %.2lf\n", preco);
            printf("Data de Validade do produto: Val %02d/%02d/%04d\n", diap, mesp, anop);
            printf("Quantidade do iten em estoque: %d\n", quantiten);
            printf("*************************************************************\n");
          }
          else
          {
            printf("\n*************** Nenhum item cadastrado ****************\n");
            printf("Código do Iten: \n");
            printf("Nome do produto: \n");
            printf("Descrição do produto: \n");
            printf("Preço do Produto: \n");
            printf("Data de Validade do produto: \n");
            printf("Quantidade do iten em estoque: \n");
            printf("*******************************************************\n");
          }
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
      if (funcionario_cadastrado == 0 || item_cadastrado == 0)
      {
        printf("\n|==================== ATENÇÃO ====================|\n");
        printf("| É necessário cadastrar um funcionário e um item |\n");
        printf("| antes de registrar uma venda.                   |\n");
        printf("| Utilize as opções 1 e 2 do menu principal.    |\n");
        printf("|=================================================|\n\n");
        break;
      }
      if (quantVendidos != 0)
      {
        printf("\n|================ Última Venda =================| \n");
        printf("Nome do produto: %s\n", nomepro);
        printf("Nome do vendedor: %s\n", nome);
        printf("Quantidade vendida: %d\n", quantVendidos);
        printf("Total do valor: %lf\n", fatura);
      }
      else
      {
        printf("\n|================ Última Venda =================| \n");
        printf("Nome do produto: \n");
        printf("Nome do vendedor: \n");
        printf("Quantidade vendida: \n");
        printf("Total do valor: \n");
      }
      continuar = 1;
      while (continuar)
      {
        printf("\n|==================================================| \n");
        printf("| Digite 1 para cadastrar uma nova venda;          |\n");
        printf("| Digite 0 para sair da seção!                   |\n");
        printf("|==================================================|\n");
        printf("Opção: ");

        if (scanf("%d", &opcao) != 1)
        {
          int clear;
          while ((clear = getchar()) != '\n')
            ;
          opcao = -1;
        }
        switch (opcao)
        {
        case 1:
          getchar();
          printf("Digite o código do iten: \n");
          fgets(codigoVenda, sizeof(codigoVenda), stdin);
          codigoVenda[strcspn(codigoVenda, "\n")] = '\0';

          printf("Digite a matricula do Funcionário: \n");
          scanf("%d", &matriculaVenda);

          printf("Digite quantos produtos gostaria de comprar: \n");
          scanf("%d", &quantVendidos);

          if (quantVendidos > quantiten)
          {
            printf("Não há produtos o suficiente!\n");
            quantVendidos = 0;
          }
          else
          {
            fatura = quantVendidos * preco;
            quantiten = quantiten - quantVendidos;
          }
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
    case 0:
      printf("\n Encerrando...\n");
      break;

    default:
      printf("Opção inválida! \n");
      break;
    }

  } while (d != 0);

  return 0;
}
