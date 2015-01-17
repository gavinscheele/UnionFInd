// UF.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	int op, x, y;

	freopen("uf-medium-in.txt","r", stdin);
	freopen("uf-small-Out.txt","w", stdout);
	scanf("%d", &n);
	UnionFind *uf = new UnionFind(n);
	//cout << *uf << endl;
	string correct = "F F F F F F F F F F F F F F F F F F F T F F F F F F F F F F F F F F F F F F F F F F F F F F F T T F F F T T T F T T F T T F T F T F T T T T T T T T T F T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T T ";
	string myOutput = "";
	while (3 == scanf("%d %d %d", &op, &x, &y))
	{

		//printf("%d %d %d\n", op, x, y);
		if (op == -1 && x == -1 && y == -1) break;

		if (!op) // Connect/ Union
		{
			uf->myUnion(x, y);
		}
		else // Connected/ Find
		{
			if (uf->connected(x, y)){
				//cout << "T" << endl;
				myOutput += "T ";
			}
			else{
				//cout << "F" << endl;
				myOutput += "F ";

			}
		}
		//cout << *uf << endl;

	}
	uf->~UnionFind();
	if (correct.compare(myOutput) == 0) return 0;
	else return -1;

}

