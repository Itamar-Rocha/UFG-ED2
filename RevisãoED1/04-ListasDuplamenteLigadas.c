#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

Node* head = NULL;

void insertFront(int value) { // Insere um novo Node na lista
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}

void deleteNode(Node* node) { // Remove um Node da lista
    if (node == head)
        head = node->next;
    if (node->next != NULL)
        node->next->prev = node->prev;
    if (node->prev != NULL)
        node->prev->next = node->next;
    free(node);
}

void printList() { // Imprime os elementos da lista
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void buscar(int valor) { // Busca por um valor específico na lista
	Node* temp = head;
		while (temp != NULL) {
			if (temp->data == valor) {
				printf("Valor %d encontrado.\n", valor);

				puts("Detalhes:");

				if (temp->prev != NULL) {
					printf("Valor anterior: %d\n", temp->prev->data);
				} else {
					puts("Não possui valor anterior");
				}

				if (temp->next != NULL) {
					printf("Valor posterior: %d\n", temp->next->data);
				} else {
					puts("Não possui valor posterior");
				}

				return;
			}
			temp = temp->next;
    }
	printf("O valor %d não foi encontrado.\n", valor);
}

int main() {
    insertFront(10);
    insertFront(20);
    printList();
    return 0;
}
