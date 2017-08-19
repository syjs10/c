#ifndef LIST_H
#define LIST_H
#define Elem int
class List {
	public:
		List(int size);
		~List();
		void ClearList ();
		bool ListEmpty ();
		int ListLength ();
		bool GetElem (int i, Elem *e);
		int LocateElem (Elem *e);
		bool PriorElem (Elem currentElem, Elem preElem);
		bool NextElem (Elem currentElem, Elem nextElem);
		void ListTraverse ();
		bool ListInsert (int i, Elem *e);
		bool ListDelete (int i, Elem *e);
	private:
		int *m_pList;
		int m_iSize;
		int m_iLength;
}
#endif

