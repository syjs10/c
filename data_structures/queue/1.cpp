#include <string>
#include <iostream>
using namespace std;
class Customer{
	public:
		Customer(string name, int age);
		void printInfo() const;
	private:
		string m_strName;
		int m_iAge;
};
Customer::Customer(string name = "", int age = 0){
	m_strName = name;
	m_iAge    = age;
}
void Customer::printInfo() const {
	cout << "姓名： " << m_strName << endl;
	cout << "年龄： " << m_iAge << endl;
	cout << endl;
}
class MyQueue{
	public:
		MyQueue(int queueCapacity);    //创建队列
		virtual ~MyQueue();			   //销毁队列
		void ClearQueue();			   //清空队列
		bool QueueEmpty() const;	   //判空队列
		bool QueueFull() const;
		int QueueLength() const;	   //队列长度
		bool EnQueue(Customer element);	   //新元素入队
		bool DeQueue(Customer &element);	   //首元素出列
		void QueueTraverse();		   //打印队列
	private:
		Customer *m_pQueue;                 //队列数组指针
		int m_iQueueLen;			   //队列元素个数
		int m_iQueueCapacity;		   //队列数组容量
		int m_iHead;				   //队列头
		int m_iTail;				   //队列尾
};
MyQueue::MyQueue(int queueCapacity) {
	m_iQueueCapacity = queueCapacity;
	m_pQueue         = new Customer [m_iQueueCapacity];
	ClearQueue();
}
MyQueue::~MyQueue(){
	delete [] m_pQueue;
	m_pQueue = NULL;
}
void MyQueue::ClearQueue(){
	m_iHead     = 0;
	m_iTail     = 0;
	m_iQueueLen = 0;
}


bool MyQueue::QueueEmpty() const{
	if(m_iQueueLen == 0){
		return true;
	} else {
		return false;
	}
}
int MyQueue::QueueLength() const{
	return m_iQueueLen;
}
bool MyQueue::QueueFull() const{
	if (m_iQueueLen == m_iQueueCapacity){
		return true;
	} else {
		return false;
	}
}
bool MyQueue::EnQueue(Customer element){
	if (QueueFull()){
		return false;
	} else {
		m_pQueue[m_iTail] = element;
		m_iTail++;
		m_iTail = m_iTail % m_iQueueCapacity;
		m_iQueueLen++;
		return true;
	}
}
bool MyQueue::DeQueue(Customer &element){
	if (QueueEmpty()){
		return false;
	} else {
		element = m_pQueue[m_iHead];
		m_iHead++;
		m_iHead = m_iHead % m_iQueueCapacity;
		m_iQueueLen--;
		return true;
	}
}
void MyQueue::QueueTraverse(){
	for (int i = m_iHead; i < m_iQueueLen+m_iHead; i++){
		//cout << m_pQueue[i % m_iQueueCapacity] << endl;
		m_pQueue[i%m_iQueueCapacity].printInfo();
	}

}

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
