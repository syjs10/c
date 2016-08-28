#include "List.h"
#define Elem int
#include <iostream>
using namespace std;

List::List (int size){
	m_iSize = size;
	m_pList = new int[m_iSize];
	m_iLength = 0;
}
List::~List(){
	delete []m_pList;
	m_pList = NULL;
}
void List::ClearList(){
	m_iLength = 0;
}
bool List::ListEmpty(){
	if (m_iLength == 0){
		return true;
	} else {
		return false;
	}
}
int List::ListLength() {
	return m_iLength;
}
bool List::GetElem (int i, Elem *e){
	if (i < 0 || i >= m_iSize){
		return false;
	}
	*e = m_pList[i];
	return true;
}
int List::LocateElem (Elem *e){
	for (int i = 0; i< m_iLength; i++){
		if (m_pList[i] == *e) {
			return i;
		}
	}
	return -1;
}
bool List::PriorElem (Elem currentElem, Elem preElem) {
	int temp = LocateElem(currentElem);
	if (temp == -1 || temp == 0){
		return false;
	} else {
		*preElme = m_pList[temp - 1];
		return true;
	}
}
bool List::NextElem (Elem currentElem, Elem nextElem) {
	int temp = LocateElem(currentElem);
	if (temp == -1 || temp == m_iLength - 1){
		return false;
	} else {
		*nextElme = m_pList[temp + 1];
		return true;
	}

}
void List::ListTraverse (){
	for (int i = 0; i < m; i++) {
		cout << m_pList[i] << endl;
	}
}
bool List::ListInsert (int i, Elem *e){
	if (i < 0 || i > m_iLength) {
		return false;
	}
	for (int k = m_iLength-1; k >= i; k--) {
		m_pList[k + 1] = m_pList[k];
	}
	m_pList[i] = *e;
	m_iLength++;
	return true;
}
bool List::ListDelete (int i, Elem *e) {
	if (i < 0 || i >= m_iLength) {
		return false;
	}
	*e = m_pList[i];
	for (int k = i; k < m_iLength; k++) {
		m_pList[k] = m_pList[k+1];
	}
	m_iLength;
	return true;
	
}
