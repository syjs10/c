#include <iostream>
#include <stdlib.h>
#include "List.h"
using namespace std;

int main(void)
{
	//3 5 7 2 9 1 8
	int e1 = 3;
	int e2 = 5;
	int e3 = 7;
	int e4 = 2;
	int e5 = 9;
	int e6 = 1;
	int e7 = 8;
	int find = 8;
	int temp = 0;
	List *list1 = new List(10);
	cout << "length:" << list1->ListLength() << endl;
	list1->ListInsert(0, &e1);
	cout << "length:" << list1->ListLength() << endl;
	list1->ListInsert(1, &e2);
	list1->ListInsert(2, &e3);
	list1->ListInsert(3, &e4);
	list1->ListInsert(4, &e5);
	list1->ListInsert(5, &e6);
	list1->ListInsert(6, &e7);
	list1->NextElem(1, &temp);
	cout << temp << endl;
	list1->GetElem(0, &temp);
	cout << temp << endl;
	if((temp = list1->LocateElem(&find)) != -1){
		cout << temp << endl;
	} else {
		cout << "No" << endl;
	}
	list1->ListDelete(0, &temp);
	if (!list1->ListEmpty()){
		cout << "Is Not Empyt" << endl;
	}
	list1->ClearList();
	if (list1->ListEmpty()){
		cout << "Is Empyt" << endl;
	}
	list1->ListTraverse();
	cout << temp << endl;
	delete list1;
	return 0;
}
