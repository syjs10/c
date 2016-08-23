#define BINARY    	2
#define OCTONARY  	8
#define HEXADECIMAL 	16
#include <iostream>
#include <stdlib.h>
#include "MyStack.h"
using namespace std;
int main (void)
{
	char num[] = "0123456789ABCDEF";
	MyStack<char> *pStack = new MyStack<char>(50);
	int N = 10;
	int mod = 0;
	while (N != 0) {
		mod = N % 16;
		pStack->push(num[mod]);
		N /= 16;
	}
	pStack->stackTraverse(false);
	cout << endl;
	delete pStack;
	pStack = NULL;
	return 0;
}
