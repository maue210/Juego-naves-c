#include <iostream>
#include<conio.h>
using namespace std;
struct Nodo{
	int dato1;
	int dato2;
	Nodo *siguiente;
	};
	void insertarLista(Nodo *&lista,int n,int m){
	Nodo *nuevo_nodo= new Nodo();
	nuevo_nodo->dato1= n;
	nuevo_nodo->dato2= m;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	while((aux1 !=NULL)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista == aux1){
		lista=nuevo_nodo;
	}else{
		aux2->siguiente= nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
	//cout<<"\tElemento:  "<<n<<"insertado: "<<m<<"insertado\n";
}
void mostrarlista(Nodo *lista){
	Nodo *actual = lista;

	while (actual != NULL){
		cout<<actual->dato1<<"->"<<actual->dato2<<"|";
		actual=actual->siguiente;
	}
	
}
