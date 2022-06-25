#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
#include"NodoLinkedList.hpp"
#include"Persona.hpp"

class LinkedList {
	
	NodoLinkedList first;

	public:

	LinkedList();

	int empty();

	int size();

	void insertar(Persona persona);

	NodoLinkedList getFirst();

	void setFirst(NodoLinkedList first);

	

};
#endif