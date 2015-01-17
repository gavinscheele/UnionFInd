#include <iostream>
#include <vector>
using namespace std;


class UnionFind{
public:
	UnionFind(int size);

	// Destructor
	~UnionFind();


	// Find operation
	int find(int x);

	// Union operation
	void myUnion(int x, int y);

	// Connected(x, y)?
	bool connected(int x, int y);

	friend ostream& operator<<(ostream& os, const UnionFind& uf);
private:
	vector<int> roots;

};