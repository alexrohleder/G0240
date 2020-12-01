#include <stdio.h>

void listar_alunos_e_media(
  int quantidade,
  char nomes[][50],
  int notaG1[],
  int notaG2[]
) {
  for (int i = 0; i < quantidade; i++) {
    printf("%s: %d", nomes[i], (notaG1[i] + notaG2[i]) / 2);
  }
}

void listar_alunos_em_exame(
  int quantidade,
  char nomes[][50],
  int notaG1[],
  int notaG2[]
) {
  for (int i = 0; i < quantidade; i++) {
    int total = notaG1[i] + notaG2[i];

    if (total >= 8 || total < 14) {
      printf("%s", nomes[i]);
    }
  }
}

void listar_alunos_reprovados(
  int quantidade,
  char nomes[][50],
  int notaG1[],
  int notaG2[]
) {
  for (int i = 0; i < quantidade; i++) {
    int total = notaG1[i] + notaG2[i];

    if (total < 8) {
      printf("%s", nomes[i]);
    }
  }
}

void listar_alunos_aprovados(
  int quantidade,
  char nomes[][50],
  int notaG1[],
  int notaG2[]
) {
  for (int i = 0; i < quantidade; i++) {
    int total = notaG1[i] + notaG2[i];

    if (total >= 14) {
      printf("%s", nomes[i]);
    }
  }
}

int main()
{
  int quantidade;

  printf("quantos alunos você tem? ");
  scanf("%d", &quantidade);

  char nomes[quantidade][50];
  int matricula[quantidade], notaG1[quantidade], notaG2[quantidade];

  for (int i = 0; i < quantidade; i++) {
    printf("%d - insira o nome: ", i + 1);
    scanf("%s", nomes[i]);
    
    printf("%d - insira a matrícula: ", i + 1);
    scanf("%d", &matricula[i]);
    
    printf("%d - insira a nota da G1: ", i + 1);
    scanf("%d", &notaG1[i]);
    
    printf("%d - insira a nota da G2: ", i + 1);
    scanf("%d", &notaG2[i]);
  }
  
  char opcao;

  printf("\nEscolha uma das opções a baixo:");
  printf("\na - listar todos alunos com sua respectiva média");
  printf("\nb - listar apenas os alunos em exame (nota >= 4 e nota < 7)");
  printf("\nc - listar os alunos reprovados");
  printf("\nd - listar os alunos aprovados");
  printf("\n");
  scanf(" %c", &opcao);

  switch (opcao) {
    case 'a':
      listar_alunos_e_media(quantidade, nomes, notaG1, notaG2);
      break;
    case 'b':
      listar_alunos_em_exame(quantidade, nomes, notaG1, notaG2);
      break;
    case 'c':
      listar_alunos_reprovados(quantidade, nomes, notaG1, notaG2);
      break;
    case 'd':
      listar_alunos_aprovados(quantidade, nomes, notaG1, notaG2);
      break;
    default:
      printf("opção invalida.");
      break;
  }

  printf("\n\n");
  return 0;
}
