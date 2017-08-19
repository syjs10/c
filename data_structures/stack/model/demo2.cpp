#define BINARY    	2
#define OCTONARY  	8
#define HEXADECIMAL 	16
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "MyStack.h"
using namespace std;
int main (void)
{
	MyStack<char> *pStack = new MyStack<char>(30);
	MyStack<char> *pNeedStack = new MyStack<char>(30);
	char str[]= "[()]]";
	char currentNeed = 0;
	for (int i = 0; i < strlen(str); i++){
		if(str[i] != currentNeed){
			pStack->push(str[i]);
			switch (str[i]){
				case '[':
					if(currentNeed != 0){
						pNeedStack->push(currentNeed);
					}
					currentNeed = ']';
					break;
				case '(':
					if(currentNeed != 0){
						pNeedStack->push(currentNeed);
					}
					currentNeed = ')';
					break;
				default:
					cout << "no" << endl;
					return 0;
			}
		} else {
			char elem;
			pStack->pop(elem);
			if (!pNeedStack->pop(currentNeed)){
				currentNeed = 0;
			}
		}
	}
	if(pStack->stackEmpty()){
		cout << "ok" << endl;
	} else {
		cout << "no" << endl;
	}
	delete pStack;
	pStack = NULL;
	delete pNeedStack;
	pStack = NULL;
	return 0;
}
