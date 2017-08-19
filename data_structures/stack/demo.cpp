#include <iostream>
#include <stdlib.h>
#include "MyStack.h"
using namespace std;
int main (void) 
{
	MyStack *pStack = new MyStack(5);
	pStack->push('a');
	pStack->push('e');
	pStack->push('i');
	pStack->push('o');
	pStack->push('u');
	//pStack->clearStack();
	
	pStack->stackTraverse(true);
	char elem = 0;
	pStack->pop(elem);
	cout << elem << endl;
	pStack->stackTraverse(true);
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
