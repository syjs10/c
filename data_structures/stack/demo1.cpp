#include <iostream>
#include <stdlib.h>
#include "MyStack1.h"
#include "Coordinate.h"
using namespace std;
int main (void) 
{
	MyStack *pStack = new MyStack(5);
	pStack->push(Coordinate(1,2));
	pStack->push(Coordinate(3,4));
	pStack->push(Coordinate(5,6));
	pStack->push(Coordinate(7,8));
	pStack->push(Coordinate(9,10));
	//pStack->clearStack();
	
	pStack->stackTraverse(true);
	pStack->stackTraverse(false);
	cout << pStack -> stackLength() << endl;
	if(pStack->stackEmpty()){
		cout << "栈为空" << endl;
	}
	if(pStack->stackFull()){
		cout << "栈为满" << endl;
	}
	delete pStack;
	pStack = NULL;
	return 0;
}
