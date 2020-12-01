#include <stdio.h>

struct Aluno {
  char nome[50];
  int matricula;
  int g1;
  int g2;
};

void listar_alunos_e_media(int quantidade, struct Aluno alunos[]) {
  for (int i = 0; i < quantidade; i++) {
    printf("%s: %d\n", alunos[i].nome, (alunos[i].g1 + alunos[i].g2) / 2);
  }
}

void listar_alunos_em_exame(int quantidade, struct Aluno alunos[]) {
  for (int i = 0; i < quantidade; i++) {
    int total = alunos[i].g1 + alunos[i].g2;

    if (total >= 8 || total < 14) {
      printf("%s\n", alunos[i].nome);
    }
  }
}

void listar_alunos_reprovados(int quantidade, struct Aluno alunos[]) {
  for (int i = 0; i < quantidade; i++) {
    int total = alunos[i].g1 + alunos[i].g2;

    if (total < 8) {
      printf("%s\n", alunos[i].nome);
    }
  }
}

void listar_alunos_aprovados(int quantidade, struct Aluno alunos[]) {
  for (int i = 0; i < quantidade; i++) {
    int total = alunos[i].g1 + alunos[i].g2;

    if (total >= 14) {
      printf("%s\n", alunos[i].nome);
    }
  }
}

void mostrar_menu(int quantidade, struct Aluno alunos[]) {
  char opcao;

  printf("\nEscolha uma das opções a baixo:");
  printf("\na - listar todos alunos com sua respectiva média");
  printf("\nb - listar apenas os alunos em exame (nota >= 4 e nota < 7)");
  printf("\nc - listar os alunos reprovados");
  printf("\nd - listar os alunos aprovados");
  printf("\nq - sair");
  printf("\n");
  scanf(" %c", &opcao);

  switch (opcao) {
    case 'a':
      listar_alunos_e_media(quantidade, alunos);
      break;
    case 'b':
      listar_alunos_em_exame(quantidade, alunos);
      break;
    case 'c':
      listar_alunos_reprovados(quantidade, alunos);
      break;
    case 'd':
      listar_alunos_aprovados(quantidade, alunos);
      break;
    case 'q':
      return;
    default:
      printf("opção invalida.\n");
      break;
  }

  mostrar_menu(quantidade, alunos);
}

int main()
{
  int quantidade;

  printf("quantos alunos você tem? ");
  scanf("%d", &quantidade);

  struct Aluno alunos[quantidade];

  for (int i = 0; i < quantidade; i++) {
    printf("%d - insira o nome: ", i + 1);
    scanf("%s", alunos[i].nome);
    
    printf("%d - insira a matrícula: ", i + 1);
    scanf("%d", &alunos[i].matricula);
    
    printf("%d - insira a nota da G1: ", i + 1);
    scanf("%d", &alunos[i].g1);
    
    printf("%d - insira a nota da G2: ", i + 1);
    scanf("%d", &alunos[i].g2);
  }

  mostrar_menu(quantidade, alunos);

  printf("\n\n");
  return 0;
}
