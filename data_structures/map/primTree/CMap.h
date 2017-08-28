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
#include "Edge.h"

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

	void primTree(int nodeIndex);//普里姆生成树
private:
	bool getValueFromMatrix(int row, int col, int &val);
	void breadthFirstTraverseImpl(vector<int> preVec);

	int getMinEdge(vector<Edge> edgeVec);
private:
    int m_iCapacity;
    int m_iNodeCount;
    Node *m_pNodeArray;
    int *m_pMatrix;
	Edge *m_pEdge;
};
#endif
