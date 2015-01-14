// UF.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	int op, x, y;
	//freopen("uf-medium.in", "r", stdin);
	scanf_s("%d", &n);
	UnionFind *uf = new UnionFind(n);
	while (3 == scanf_s("%d %d %d", &op, &x, &y))
	{
		//printf("%d %d %d\n", op, x, y);
		if (op == -1 && x == -1 && y == -1) break;

		if (!op) // Connect/ Union
		{
			uf->myUnion(x, y);
		}
		else // Connected/ Find
		{
			cout << uf->connected(x, y) << endl;
		}
	}
	uf->~UnionFind();
	return 0;

}

