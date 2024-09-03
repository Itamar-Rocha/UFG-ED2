#include <stdio.h>
#include <stdlib.h>
#define INIT_SIZE 3

int *pilha = (int *) malloc(INIT_SIZE * sizeof(int));
int size = INIT_SIZE;
int topo = -1;

void increaseSize() {
	size *= 2;
	pilha = (int *) realloc(pilha, size * sizeof(int)); 
}

int isEmpty() { // Verifica se a pilha está vazia
	if (topo == -1) {return 1;}
	else {return 0;}
}

void push(int elemento) { // Adiciona um elemento na pilha
		while(topo > size - 1) {
			increaseSize();
		}
		pilha[++topo] = elemento;
}

int pop() { // Remove um elemento da pilha
    if (topo == -1) {
        printf("Pilha vazia!\n");
        return -1;
    } else {
        return pilha[topo--];
    }
}

int top() { // Retorna o elemento do topo da pilha
    if (topo == -1) {
        printf("Pilha vazia!\n");
        return -1;
    } else {
        return pilha[topo];
    }
}

void imprimir() { // Imprime os elementos da pilha
    printf("Conteúdo da pilha:\n");
    for (int i = topo; i >= 0; i--) {
        printf("%d ", pilha[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    imprimir();
    printf("Elemento no topo: %d\n", top());
    printf("Elemento removido: %d\n", pop());
    imprimir();
    return 0;
}
