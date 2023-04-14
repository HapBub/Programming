#include <iostream>

using namespace std;


int nextEdge(int side1,int side2)
{	return(side1+side2-1);		}

int main()
{	int maxRange;
	maxRange=nextEdge(17,5);
	cout << maxRange << endl;		}

//GG7
