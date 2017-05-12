#include <stdio.h>
#include <stdlib.h>


struct Nodo {
    int numero;
    Nodo *der;
    Nodo *izq;
};

Nodo *crearNodo (int numero){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->numero = numero;
    nuevoNodo->der = NULL;
    nuevoNodo->izq = NULL;
    return nuevoNodo;
}

void insertarNodo(Nodo *&arbol , int numero){
    if (arbol == NULL){ //si la raiz es nula entonces el arbol esta vacio
        arbol = crearNodo(numero);
    }
    else {
        if (numero < arbol->numero)
            insertarNodo(arbol->izq, numero);
        else
            insertarNodo(arbol->der, numero);
    }
}

void mostrarArbol(Nodo *arbol, int cont){
    if(arbol == NULL){
        return;
    }
    else{
        mostrarArbol(arbol->der, cont + 1);
        for(int i=0; i<cont; i++){
            printf("   ");
        }
        printf("%d \n",arbol->numero);
        mostrarArbol(arbol->izq, cont + 1);
    }
}

//El recorrido en Pre-Orden (Visita raiz, recorre el subarbol izquierdo, recorre subarbol derecho)
void preOrden(Nodo *arbol){
    if(arbol == NULL){
        return; //en caso que el arbol sea nulo no se imprime nada
    }
    else{
        printf("%d, ", arbol->numero); //se imprime el dato del arbol
        preOrden(arbol->izq); // se recorre el arbol por la izquierda
        preOrden(arbol->der); // se recorre el arbol por la derecha
    }
}


//El recorrido en in-Orden (recorre el subarbol izquierdo, Visita raiz, recorre subarbol derecho)
void inOrden(Nodo *arbol){
    if(arbol == NULL){
        return; //en caso que el arbol sea nulo no se imprime nada
    }
    else{
        printf("%d, ", arbol->numero); //se imprime el dato del arbol
        inOrden(arbol->izq); // se recorre el arbol por la izquierda
        inOrden(arbol->der); // se recorre el arbol por la derecha
    }
}

//El recorrido en post-Orden (recorre el subarbol izquierdo, recorre subarbol derecho, Visita raiz)
void postOrden(Nodo *arbol){
    if(arbol == NULL){
        return; //en caso que el arbol sea nulo no se imprime nada
    }
    else{
        printf("%d, ", arbol->numero); //se imprime el dato del arbol
        inOrden(arbol->izq); // se recorre el arbol por la izquierda
        inOrden(arbol->der); // se recorre el arbol por la derecha
    }
}


int main()
{
    int opcion = 0; //guarda la opcion del menu
    int numero = 0; //guarda el numero entero a ingresar en la pila
    Nodo *arbol = NULL; //se crea un puntero de tipo nodo para la cabecera de la pila
    while(opcion != 4)
    {
        //menu del programa y opciones
        system("cls");
        printf("PROGRAMA PARA GESTIONAR ARBOLES BINARIOS \n \n");
        printf("-----------MENU DE OPCIONES-------------------- \n \n");
        printf("1. Insertar numeros en el arbol \n");
        printf("2. Mostrar arbol \n");
        printf("3. Recorre arbol en pre-orden \n");
         printf("3. Recorre arbol en pre-orden \n");
          printf("3. Recorre arbol en pre-orden \n");
        printf("4. Salir (sale del programa) \n\n");
        printf("Por favor digite una opcion: ");
        scanf("%d",&opcion);

        switch(opcion) //dependiendo de la opcion hace
        {
            case 1:
                system("cls");
                printf("INSERTAR PILA \n\n");
                printf("Digite el numero entero a ingresar a la Pila: ");
                scanf("%d",&numero);
                insertarNodo(arbol,numero);
                system("pause");
                break;
            case 2:
                system("cls");
                printf("Mostrar Arbol \n\n");
                mostrarArbol(arbol,0);
                system("pause");
                break;
            case 3:
                system("cls");
                printf("LISTAR PILA \n\n");

                system("pause");
                break;
            case 4:
                break;
            default:
                system("cls");
                printf("La opcion digitada no es correcta \n");
                system("pause");
                break;
        }

    }
    return 0;
}

