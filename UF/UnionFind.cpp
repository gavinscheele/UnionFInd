#include "stdafx.h"

UnionFind::UnionFind(int size){

	for (int i = 0; i < size+1; i++)
		this->roots.push_back(i);
}
UnionFind::~UnionFind(){
}
int UnionFind::find(int x){
	while (roots.at(x) != x){
		x = roots.at(roots.at(x));
	}
	return x;
}
void UnionFind::myUnion(int x, int y){
	roots.at(find(y)) = find(x);
}
bool UnionFind::connected(int x, int y){
	if (find(x) == find(y)) return true;
	else return false;
}

ostream& operator<<(ostream& os, const UnionFind& uf){
	int rootSize = sizeof(uf.roots) / sizeof(uf.roots.at(0));
	for (int i = 1; i < rootSize; i++)
		os << i << " ";

	os << "\n";

	for (int i = 1; i < rootSize; i++){
		os << uf.roots.at(i) << " ";
	}
	return os;
}

