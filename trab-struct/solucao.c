#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void salvar_arquivo(int quantidade, struct Aluno alunos[]) {
  FILE *arquivo = fopen("resultado.txt", "w");

  if (arquivo == NULL) {
    printf("erro ao abrir arquivo.\n");
    return;
  }

  for (int i = 0; i < quantidade; i++) {
    char linha[124];
    snprintf(linha, 124, "%d\t|\t%s\t|\t%d\t|\t%d", alunos[i].matricula , alunos[i].nome , alunos[i].g1 , alunos[i].g2);
    fputs(linha, arquivo);
  }

  fputs("\n", arquivo);
  fclose(arquivo);
  printf("arquivo salvo em: ./resultado.txt\n");
}

void le_arquivo() {
  char nomeDoArquivo[50];

  printf("insira o nome do arquivo: ");
  scanf("%s", nomeDoArquivo);

  FILE *arquivo = fopen(nomeDoArquivo, "w");

  if (arquivo == NULL) {
    printf("erro ao abrir arquivo.\n");
    return;
  }

  char linha[124];

  int quantidade;
  // struct Alunos alunos[];

  while (!feof(arquivo)) {
    fgets(linha, 124, arquivo);

    char separator[] = "\t|\t";
    struct Aluno aluno;

    aluno.matricula = atoi(strtok(linha, separator));
    strncpy(aluno.nome, strtok(NULL, separator), 50);
    aluno.g1 = atoi(strtok(NULL, separator));
    aluno.g2 = atoi(strtok(NULL, separator));

    printf("%s", aluno.nome);
  }

  fclose(arquivo);
  // mostra_menu(quantidade, alunos);
}

void mostrar_menu(int quantidade, struct Aluno alunos[]) {
  char opcao;

  printf("\nEscolha uma das opções a baixo:");
  printf("\na - listar todos alunos com sua respectiva média");
  printf("\nb - listar apenas os alunos em exame (nota >= 4 e nota < 7)");
  printf("\nc - listar os alunos reprovados");
  printf("\nd - listar os alunos aprovados");
  printf("\ne - salvar arquivo");
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
    case 'e':
      salvar_arquivo(quantidade, alunos);
      break;
    default:
      printf("opção invalida.\n");
      break;
  }

  mostrar_menu(quantidade, alunos);
}

int main()
{
  char opcao;
  int quantidade;

  printf("Escolha uma das opções a baixo:");
  printf("\na - inserir alunos manualmente");
  printf("\nb - ler de arquivo");
  printf("\n");
  scanf(" %c", &opcao);

  if (opcao == 'a') {
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
  } else {
    if (opcao == 'b') {
      le_arquivo();
    } else {
      printf("opção inválida.");
    }
  }

  printf("\n\n");
  return 0;
}
