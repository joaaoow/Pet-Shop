#include<stdio.h>
#include<locale.h>
#include<string.h>
#include"FUNCOES1.h"

#define MAX_CLIENTES 10
#define MAX_NOME 50

typedef struct {
	char nomePet[MAX_NOME];
	int tipo;
} Agendamento;

typedef struct {
	char data[MAX_NOME];
	char cliente[MAX_NOME];
	char medico[MAX_NOME];
} Consulta;

Cliente clientes[MAX_CLIENTES];
Agendamento agendamentos[MAX_CLIENTES];
Consulta consultas[MAX_CLIENTES];
int totalAgendamentos = 0;
int totalConsultas = 0;

void agendarServico() {
	if(totalAgendamentos < MAX_CLIENTES) {
		printf("Nome do pet: %s\n", clientes[totalAgendamentos].nomePet);
		printf("Escolha o serviço desejado: \n");
		printf("1- Banho.\n");
		printf("2- Tosa.\n");
		printf("3- Banho e Tosa.\n");
			scanf("%d", &agendamentos[totalAgendamentos].tipo);
		totalAgendamentos++;
	getch();
	system("cls");
	} else {
		printf("Limite de agendamentos atingido.\n");
	}
}

int i;
void cadastrarConsulta() {
	if(totalConsultas < MAX_CLIENTES) {
		printf("Informe a data desejada para a consulta: \n");
	getchar();
			scanf("%[^\n]", &consultas[totalConsultas].data);
		printf("Clientes cadastrados: \n");
		for(i = 0; i < totalClientes; i++) {
			printf("%d- %s\n", i + 1, clientes[i].nomeCliente);
		}
		printf("Escolha um cliente: \n");
		int clienteIndex;
		scanf("%d", &clienteIndex);
		strcpy(consultas[totalConsultas].cliente, clientes[clienteIndex - 1].nomeCliente);
		
		printf("Informe o doutor que deseja que seja feito o atendimento: \n");
		printf("1- Dr. João Pedro Silva Pereira.\n");
		printf("2- Dr. Fabiano Oliveira de Carvalho.\n");
		int medicoOpcao;
			scanf("%d", &medicoOpcao);
		if(medicoOpcao == 1) {
			strcpy(consultas[totalConsultas].medico, "Dr. João Pedro Silva Pereira");
		} else {
			strcpy(consultas[totalConsultas].medico, "Dr. Fabiano Oliveira de Carvalho");
		}
		totalConsultas++;
	getch();
	system("cls");
	} else {
		printf("Limite de consultas atingido.\n");
	}
}
int i;
void impressaoRelatorio() {
	printf("---RELÁTORIO GERAL---\n");
	printf("Clientes cadastrados: \n");
	for(i = 0; i < totalConsultas; i++) {
		printf("Nome do(a) cliente: %s\n", consultas[i].cliente);
		printf("Número do(a) cliente: %s\n", clientes[i].telefoneCliente);
		printf("Nome do(a) Pet: %s\n", clientes[i].nomePet);
		switch(agendamentos[i].tipo) {
			case 1:
				printf("Serviço escolhido: Banho.\n");
			break;
			case 2:
				printf("Serviço escolhido: Tosa.\n");
			break;
			case 3:
				printf("Serviço escolhido: Banho e Tosa.\n");
			break;
		}
		printf("Data da consulta: %s\n", consultas[i].data);
		printf("Médico escolhido: %s\n", consultas[i].medico);
		
	printf("\n");
	getch();
	system("cls");
	}
}
char senha[10];
char senhaCorreta[] = "patinha";
int main() {
	setlocale(LC_ALL, "");
	while(1) {
		printf("Informe a senha: \n");
fflush(stdin);
			gets(senha);
		if(strcmp(senha, senhaCorreta) == 0) {
			printf("Login feito com sucesso!\n");
		getch();
		system("cls");
		break;
		} else {
			printf("Login incorreto, tente novamente.\n");
		}	
	}
	
	printf("---BEM VINDO AO PETSHOP DA GALERA---\n");
	
	int opcao;
	while(1) {
		printf("---PETSHOP DA GALERA---\n");
		printf("---MENU---\n");
		printf("Escolha o serviço que deseja realizar: \n");
		printf("1 - Cadastrar Cliente\n");
        printf("2 - Agendar Banho ou Tosa\n");
        printf("3 - Consulta\n");
        printf("4 - Imprimir Relatório Geral\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);
system("cls");
	switch (opcao) {
		case 1:
                cadastrarCliente();
                getch();
                system("cls");
                break;
            case 2:
                agendarServico();
                break;
            case 3:
                cadastrarConsulta();
                break;
            case 4:
                impressaoRelatorio();
                break;
            case 5:
                printf("Volte sempre ao Petshop da Galera!\n");
                return 0;
            default:
                printf("Essa opção não existe.\n");
                break;
		}
	}
	return 0;
}
