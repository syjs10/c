#include <iostream>
using namespace std;
template <typename T>
class MyStack {
	public:
		MyStack (int size);		//分配内存初始化空间设定栈容量
		~MyStack ();			//回收栈内存空间
		bool stackEmpty ();		//判空
		bool stackFull ();		//判满
		void clearStack ();		//清空栈
		int stackLength ();		//已有元素个数
		bool push (T elem);	//元素入栈
		bool pop (T &elem);	//元素出栈
		void stackTraverse (bool isFromButtom);	//遍历栈元素
	private:
		T *m_pBuffer;			//栈空间指针
		int m_iSize;			//栈容量
		int m_iTop;				//栈顶
};

template <typename T>
MyStack<T>::MyStack(int size) {
	m_iSize = size;
	m_pBuffer = new T[size];
	m_iTop = 0;
}
template <typename T>
MyStack<T>::~MyStack(){
	delete []m_pBuffer;
}
template <typename T>
bool MyStack<T>::stackEmpty(){
	if (0 == m_iTop){
		return true;
	} else {
		return false;
	}
}
template <typename T>
bool MyStack<T>::stackFull(){
	if (m_iTop == m_iSize){
		return true;
	} else {
		return false;
	}
}
template <typename T>
void MyStack<T>::clearStack(){
	m_iTop = 0;
}
template <typename T>
int MyStack<T>::stackLength(){
	return m_iTop;
}
template <typename T>
bool MyStack<T>::push(T elem){
	if(!stackFull()){
		m_pBuffer[m_iTop] = elem;
		m_iTop++;
		return true;
	} else {
		return false;
	}
}
template <typename T>
bool MyStack<T>::pop(T &elem){
	if(!stackEmpty()){
		m_iTop--;
		elem = m_pBuffer[m_iTop];
		return true;
	} else {
		return false;
	}
}
template <typename T>
void MyStack<T>::stackTraverse(bool isFromButtom){
	if (isFromButtom){
		for (int i=0; i<m_iTop; i++){
			cout << m_pBuffer[i];
		}
	} else {
		for (int i=m_iTop-1; i>=0; i--){
			cout << m_pBuffer[i];
		}
	}
}
