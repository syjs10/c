#include <iostream>
#include <stdlib.h>
#include "List.h"
using namespace std;

int main(void)
{
	//3 5 7 2 9 1 8
	int e1 = 3;
	List *list1 = new List(10);
	list1->ListInsert(0, &e1);
	list1->ListTraverse();
	delete list1;
	return 0;
}
