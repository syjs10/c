#ifndef NOOD_H
#define NOOD_h
#include "Person.h"
class Node {
	public:
		Person data;
		Node *next;
		void printNode();
};


#endif
