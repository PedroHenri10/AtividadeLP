// Autores: Pedro Guaita, Pedro Henrique, Matheus Cavalheiro e João Victor.
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#include <ctype.h>
 
#define controle 100
 
typedef struct {
        char nomeAluno[50];
        int idadeAluno;
        char sexo[2];
        char universidade[50];
        char curso[50];
        int semestre;
        char documento[20];
        char email[30];
        int telefone;
        int matricula;
} str_alunos;

str_alunos Alunos[controle];

int qtdAlunos = 0;
 
void cadastrarAluno(){
    
    int novosAlunos = 0;
    
    printf("\n");
    printf("Quantos alunos novos serão cadastrados: ");
    scanf("%d", &novosAlunos);
    __fpurge(stdin);
    
    if (qtdAlunos + novosAlunos > controle) {
        printf("\nErro: Número de alunos excede o limite do array.\n");
        return; 
    }
    
    for(int i = 0; i < novosAlunos; i++){
        
    do {
        printf("\nDigite o nome do Aluno: ");
        fgets(Alunos[qtdAlunos].nomeAluno, 50, stdin);
        Alunos[qtdAlunos].nomeAluno[strcspn(Alunos[qtdAlunos].nomeAluno, "\n")] = '\0';
            if(strlen(Alunos[qtdAlunos].nomeAluno) == 0) {
                printf("Aluno não pode estar vazio. Digite novamente.\n");
            }
    } while(strlen(Alunos[qtdAlunos].nomeAluno) == 0);
    
     do {
        printf("Digite a idade do Aluno: ");
        scanf("%d", &Alunos[qtdAlunos].idadeAluno);
        __fpurge(stdin);

        if (Alunos[qtdAlunos].idadeAluno < 16 || Alunos[qtdAlunos].idadeAluno > 120) {
            printf("Idade inválida. Digite uma idade entre 16 e 120.\n");
        }
        }while (Alunos[qtdAlunos].idadeAluno < 16 || Alunos[qtdAlunos].idadeAluno > 120);

    do {
        printf("Digite o sexo do Aluno com f ou m: ");
        scanf("%c", &Alunos[qtdAlunos].sexo);
        __fpurge(stdin);

        if (Alunos[qtdAlunos].sexo[qtdAlunos] != 'f' && Alunos[qtdAlunos].sexo[qtdAlunos] != 'm') {
            printf("Sexo inválido. Digite 'f' para feminino ou 'm' para masculino.\n");
        }
    } while (Alunos[qtdAlunos].sexo[qtdAlunos] != 'f' && Alunos[qtdAlunos].sexo[qtdAlunos] != 'm');
    
    do {
        printf("Digite a universidade do Aluno: ");
        fgets(Alunos[qtdAlunos].universidade, 50, stdin);
        Alunos[qtdAlunos].universidade[strcspn(Alunos[qtdAlunos].universidade, "\n")] = '\0';
        if(strlen(Alunos[qtdAlunos].universidade) == 0) {
            printf("Universidade não pode estar vazia. Digite novamente.\n");
        }
    }while(strlen(Alunos[qtdAlunos].universidade) == 0);
    
    do {
        printf("Digite o curso do Aluno: ");
        fgets(Alunos[qtdAlunos].curso, 50, stdin);
        Alunos[qtdAlunos].curso[strcspn(Alunos[qtdAlunos].curso, "\n")] = '\0';
        if(strlen(Alunos[qtdAlunos].curso) == 0) {
        printf("Curso não pode estar vazio. Digite novamente.\n");
        }
    }while(strlen(Alunos[qtdAlunos].curso) == 0);
    
    do {
        printf("Digite apenas o número do semestre do Aluno: ");
        scanf("%d", &Alunos[qtdAlunos].semestre);
        __fpurge(stdin);

        if (Alunos[qtdAlunos].semestre < 1 || Alunos[qtdAlunos].semestre > 10) {
            printf("Semestre inválido. Digite um semestre entre 1 e 10.\n");
        }
    }while (Alunos[qtdAlunos].semestre < 1 || Alunos[qtdAlunos].semestre > 10);

    printf("Digite o documento do Aluno: ");
    fgets(Alunos[qtdAlunos].documento, 20, stdin);
    __fpurge(stdin);
    
    printf("Digite o email do Aluno: ");
    fgets(Alunos[qtdAlunos].email, 30, stdin);
    __fpurge(stdin);
    
    printf("Digite apenas os números de telefone do Aluno: ");
    scanf("%d", &Alunos[qtdAlunos].telefone);
    __fpurge(stdin);
    
    do{
        printf("Digite os números da matricula do Aluno: ");
        scanf("%d", &Alunos[qtdAlunos].matricula);
        __fpurge(stdin);
    
    
    int matriculaExiste = 0;
            for (int j = 0; j < qtdAlunos; j++) {
                if (Alunos[j].matricula == Alunos[qtdAlunos].matricula) {
                    matriculaExiste = 1;
                    printf("Matrícula já existente. Digite outra matrícula.\n");
                    break; 
                }
            }

            if(!matriculaExiste) {
                break; 
            }

        }while (1);
    
    qtdAlunos ++;
    printf("\nAluno cadastrado com sucesso! \n");
  }
}

void listarAlunos() {
    if (qtdAlunos == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    printf("\nLista de Alunos:\n");
    for (int i = 0; i < qtdAlunos; i++) {
        printf("Nome: %s\n", Alunos[i].nomeAluno);
        printf("Idade: %d\n", Alunos[i].idadeAluno);
        printf("Sexo: %c\n", Alunos[i].sexo[0]); // Imprime apenas o primeiro caractere do sexo
        printf("Universidade: %s\n", Alunos[i].universidade);
        printf("Curso: %s\n", Alunos[i].curso);
        printf("Semestre: %d\n", Alunos[i].semestre);
        printf("Documento: %s\n", Alunos[i].documento);
        printf("Email: %s\n", Alunos[i].email);
        printf("Telefone: %d\n", Alunos[i].telefone);
        printf("Matrícula: %d\n\n", Alunos[i].matricula);
    }
}
    
int main() {
    
    int opcao;
    
do{   
printf("\nEscolha uma das opções do menu: \n");
        printf("0 - Sair\n");
        printf("1 - Cadastro:\n");
        printf("2 - Lista de Alunos:\n");
        printf("3 - Buscar por Aluno:\n");
        printf("4 - Carregar dados dos alunos:\n");
        printf("5 - Salvar dados dos alunos:\n");
    scanf("%d", &opcao);
    __fpurge(stdin);
 
switch (opcao){
    case 1:
        cadastrarAluno();
    break;
    
    case 2:
        listarAlunos();
    break;
    
    case 3:
        // buscarAlunos();
    break;
    
    case 4:
        // carregar();
    break;
    
    case 5:
        // salvar();
    break;
    
    case 0:
        printf("\nprograma encerrado!\n");
    break;
    
    default:
        printf("Opção invalida!!!");
    }
}  while(opcao != 0);
 
return 0;
}