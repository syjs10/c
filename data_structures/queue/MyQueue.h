//环形队列
#ifndef MYQUEUE_H
#define MYQUEUE_H
#include "Customer.h"

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

#endif
