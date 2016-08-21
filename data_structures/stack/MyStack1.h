#include  "Coordinate.h"
class MyStack {
	public:
		MyStack (int size);		//分配内存初始化空间设定栈容量
		~MyStack ();			//回收栈内存空间
		bool stackEmpty ();		//判空
		bool stackFull ();		//判满
		void clearStack ();		//清空栈
		int stackLength ();		//已有元素个数
		bool push (Coordinate elem);	//元素入栈
		bool pop (Coordinate &elem);	//元素出栈
		void stackTraverse (bool isFromButtom);	//遍历栈元素
	private:
		Coordinate *m_pBuffer;			//栈空间指针
		int m_iSize;			//栈容量
		int m_iTop;				//栈顶
};
