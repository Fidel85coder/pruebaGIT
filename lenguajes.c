#include <stdio.h>
#include <stdlib.h>

// estructuras a utilizar

typedef int Tdato;

typedef struct nodo
{
    Tdato dato;
    struct nodo *sig;
} Tnodo;

// declaración de funciones

int menu();
Tnodo *crear_nodo(Tdato dato);
Tnodo* inicializar_lista();
void imprimir_lista(Tnodo *cab);

// Main 

int main()
{
    int opcion = 0;
    Tnodo *lista;

    printf("Ejercicios de listas simples\n");
    while ((opcion = menu()) != 0)
    {
        switch (opcion)
        {
        case 1:
            lista = inicializar_lista();
            break;
        case 2:
            imprimir_lista(lista);
            break;
        default:
            printf("Esa opcion no existe\n");
            break;
        }
    }
}

// Funciones

int menu()
{
    int opcion = 0;

    printf("1 - Inicializar una lista\n");
    printf("2 - Imprimir una lista\n");
    printf("3 - Buscar en una lista\n");
    printf("4 - Insertar al inicio\n");
    printf("5 - Insertar al final\n");
    printf("6 - Insertar en una posición\n");
    printf("7 - Insertar ordenado\n");
    printf("8 - Liberar una lista\n");
    printf("0 - Terminar\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);
    return opcion;
}

Tnodo *crear_nodo(Tdato dato)
{
    Tnodo *nuevo_nodo = (Tnodo *)malloc(sizeof(Tnodo));
    if (nuevo_nodo == NULL)
    {
        printf("No se pudo asignar memoria.");
        return NULL;
    }
    nuevo_nodo->dato = dato;
    nuevo_nodo->sig = NULL;
    return nuevo_nodo;
}

Tnodo* inicializar_lista()
{
    return NULL;
}

void imprimir_lista(Tnodo *cab)
{
    Tnodo *aux = cab;

    if (cab == NULL)
    {
        printf("La lista está vacía.\n");
        return;
    }

    while(aux != NULL)
    {
        printf("%i ", aux->dato);
        aux = aux->sig;
    }
    printf("\n");
}