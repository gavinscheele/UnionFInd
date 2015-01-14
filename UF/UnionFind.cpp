#include "UnionFind.h"

UnionFind::UnionFind(int size){
	this->roots[size];

}
UnionFind::~UnionFind(){

}
int UnionFind::find(int x){
	if (x == roots[x]) return x;
	else return find(roots[x]);
}
void UnionFind::myUnion(int x, int y){
	if (!connected(x, y)){
		if(!roots[x]) roots[x] = x;

		roots[y] = x;
	}
}
bool UnionFind::connected(int x, int y){
	if (find(x) == find(y)) return true;
	else return false;
}
