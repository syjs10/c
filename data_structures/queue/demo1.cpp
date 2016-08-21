#include <iostream>
#include <stdlib.h>
#include "MyQueue.h"
#include "Customer.h"
using namespace std;

int main (void)
{
	MyQueue *p = new MyQueue(4);
	Customer c1("张三", 20);
	Customer c2("李四", 30);
	Customer c3("王五", 24);
	p -> EnQueue(c1);
	p -> EnQueue(c2);
	p -> EnQueue(c3);
	p -> QueueTraverse();
	return 0;
}
