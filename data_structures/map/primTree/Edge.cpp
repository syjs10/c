#include "Edge.h"

Edge::Edge(int NodeIndexA, int NodeIndexB, int weigntValue)
{
	m_iNodeIndexA  = NodeIndexA;
	m_iNodeIndexB  = NodeIndexB;
	m_iWeightValue = weigntValue;
	m_bSelected    = false;
}