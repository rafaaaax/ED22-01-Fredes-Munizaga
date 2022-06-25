#include<iostream>
#include"NodoLinkedList.hpp"
#include"Persona.hpp"


NodoLinkedList::NodoLinkedList(Persona persona) {
	this.persona = persona;
	this.next = nullptr;
}
int NodoLinkedList::getID() {
	return persona;
}

NodoLinkedList NodoLinkedList::getNext()
{
	return nullptr;
}

void NodoLinkedList::setNext(NodoLinkedList next)
{
}

