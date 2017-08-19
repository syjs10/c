#include <iostream>
#include <stdlib.h>
#include "MyQueue.h"
using namespace std;
int main (void)
{
	MyQueue *p = new MyQueue(4);
	p -> EnQueue(10);
	p -> EnQueue(12);
	p -> EnQueue(16);
	p -> EnQueue(18);
	cout << p -> QueueFull() << endl;
	p -> QueueTraverse();
	int e = 0;
	p ->DeQueue(e);
	cout << "\n"<< e << "\n" << endl;
	p -> QueueTraverse();
	p ->DeQueue(e);
	cout << "\n"<< e << "\n" << endl;
	p -> QueueTraverse();
	p ->DeQueue(e);
	cout << "\n"<< e << "\n" << endl;
	p -> QueueTraverse();
	p -> ClearQueue();
	p -> QueueTraverse();
	p -> EnQueue(20);
	p -> QueueTraverse();
	delete p;
	p = NULL;
	return 0;
}
