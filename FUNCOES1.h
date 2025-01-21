#include<stdio.h>
#include<string.h>

#define MAX_NOME 50
#define MAX_CLIENTES 10
typedef struct {
	char nomeCliente[MAX_NOME];
	char nomePet[MAX_NOME];
	char telefoneCliente[MAX_NOME];
} Cliente;

Cliente clientes[MAX_CLIENTES];
int totalClientes = 0;
void cadastrarCliente() {
	if(totalClientes < MAX_CLIENTES) {
		printf("Informe o nome do(a) cliente: \n");
	getchar();
			scanf("%[^\n]", clientes[totalClientes].nomeCliente);
		printf("Informe o nome do(a) pet: \n");
	getchar();
			scanf("%[^\n]", clientes[totalClientes].nomePet);
		printf("Informe o número de telfone do(a) cliente: \n");
	getchar();
			scanf("%[^\n]", clientes[totalClientes].telefoneCliente);
			totalClientes++;
	} else {
		printf("Limite de clientes que podem ser cadastrados atingido.\n");
	}
}
