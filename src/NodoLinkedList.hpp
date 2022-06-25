#ifndef NODOLINKEDLIST_H
#define NODOLINKEDLIST_H

#include<iostream>
#include"Persona.hpp"

class NodoLinkedList {
	private:
		Persona persona;
		NodoLinkedList next;

	public:
		NodoLinkedList(Persona persona);
		Persona  getPersona();
		NodoLinkedList getNext();
		void setNext(NodoLinkedList next);
		

};
#endif