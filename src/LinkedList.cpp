#include <stdlib.h>
#include"LinkedList.hpp"

LinkedList::LinkedList() {
	first= nullptr;
}


NodoLinkedList LinkedList::getFirst() {
	return first;
}

void LinkedList::setFirst(NodoLinkedList first) {
	this.first = first;
}

int LinkedList::empty() {
	return first == nullptr;
}

int LinkedList::size() {
	int c = 0;
  	NodoLinkedList aux = first;
	while (aux.getNext() != nullptr){
    		++c;
    		aux = aux.getNext();
  	}
  	return c;
}

void LinkedList::insertar(Persona persona){
	NodoLinkedList nodo = new NodoLinkedList(persona);
	if (first == nullptr) {
		first = nodo;
	}
	else {
		NodoLinkedList aux = first;
		while (aux.getNext() != nullptr) {
			aux = aux.getNext();
		}
		aux.setNext(nodo);
	}
}

