#include <iostream>
#include "Coordinate.h"
using namespace std;
Coordinate::Coordinate(int x, int y){
	m_iX = x;
	m_iY = y;
}
void Coordinate::printCoordinate(){
	cout << "(" << m_iX << "," << m_iY << ")" << endl;
}
