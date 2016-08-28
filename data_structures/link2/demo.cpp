#include <stdlib.h>
#include "List.h"
#include <iostream>
using namespace std;

int main(void) 
{
	Node temp;
	Node node1;
	node1.data = 3;
	Node node2;
	node2.data = 4;
	Node node3;
	node3.data = 5;
	Node node4;
	node4.data = 6;
	List *pList = new List();
	Node node5;
	node5.data = 7;
/*
	pList -> ListInsertHead(&node1);
	pList -> ListInsertHead(&node2);
	pList -> ListInsertHead(&node3);
	pList -> ListInsertHead(&node4);
*/

	pList -> ListInsertTail(&node1);
	pList -> ListInsertTail(&node2);
	pList -> ListInsertTail(&node3);
	pList -> ListInsertTail(&node4);

	pList -> ListInsert(1, &node5);
	bool i = pList -> NextElem(&node5, &temp);
//	pList -> ListDelete(1, &temp);
//	pList -> GetElem(1, &temp);
//	pList -> ListDelete(1, &temp);
	pList -> ListTraverse();
	cout << i <<endl;
	cout << "temp = "<< temp.data << endl;
	delete pList;
	pList = NULL;
	return 0;
}
