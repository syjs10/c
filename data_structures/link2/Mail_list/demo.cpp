#include <stdlib.h>
#include "List.h"
#include <iostream>
using namespace std;

int menu()
{
	cout << "功能菜单" << endl;
	cout << "1.新建联系人" << endl;
	cout << "2.删除联系人" << endl;
	cout << "3.浏览通讯录" << endl;
	cout << "4.退出通讯录" << endl;
	cout << "请输入：";
	int order = 0;
	cin >> order;
	return order;
}
void createPerson(List *pList){
	Node node;
	Person person;
	cout << "请输入姓名：";
	cin >> person.name;
	cout << "请输入电话：";
	cin >> person.phone;
	node.data = person;
	pList->ListInsertTail(&node);
}
int main() 
{
	int userOrder = 0;
	List *pList = new List();
	while (userOrder != 4) {
		userOrder = menu();
		switch (userOrder) {
			case 1:
				cout << "用户指令--->>新建联系人" << endl;
				createPerson(pList);
				break;
			case 2:
				cout << "用户指令--->>删除联系人" << endl;
				break;
			case 3:
				cout << "用户指令--->>浏览通讯录" << endl;
				pList->ListTraverse();
				break;
			case 4:
				cout << "用户指令--->>提出通讯录" << endl;
				break;
		}
	}
	delete pList;
	pList = NULL;
	return 0;
}
