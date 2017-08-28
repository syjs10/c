#ifndef EDGE_H
#define EDGE_H
class Edge
{
public:
	Edge(int NodeIndexA = 0, int NodeIndexB = 0, int weigntValue = 0);
	int m_iNodeIndexA;
	int m_iNodeIndexB;
	int m_iWeightValue;
	bool m_bSelected;
		
};
#endif