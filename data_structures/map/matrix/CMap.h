/*************************************************************************
	> File Name: map.h
	> Author: 
	> Mail: 
	> Created Time: 2017年08月19日 星期六 10时13分32秒
 ************************************************************************/

#ifndef _MAP_H
#define _MAP_H
#include <vector>
#include <string.h>
using namespace std;
#include "Node.h"
class CMap
{
public:
	CMap(int capacity);
	~CMap();
	bool addNode(Node *pNode);
	void resetNode();
	bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1);
	bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1);

	void printMatrix();

	void depthFirstTraverse(int nodeIndex);
	void breadthFirstTraverse(int nodeIndex);
private:
	bool getValueFromMatrix(int row, int col, int &val);
	void breadthFirstTraverseImpl(vector<int> preVec);
private:
    int m_iCapacity;
    int m_iNodeCount;
    Node *m_pNodeArray;
    int *m_pMatrix;

};
#endif
