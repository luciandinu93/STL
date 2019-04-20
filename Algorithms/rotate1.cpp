#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
#include <vector>
using namespace std;

template <class T>
void print(const T& value) {
	cout << value << " ";
}

int main() {
	int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	list<int> l1(t, t+10);
	cout << "Source collection: " << endl;
	cout << "l1:"; for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << "Rotating elements - putting 3 on top:" << endl;
	list<int>::iterator it = l1.begin();
	advance(it, 2);
	rotate(l1.begin(), it, l1.end());
	cout << "Collection after rotate: " << endl;
	cout << "l1:"; for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << "Rotating elements - putting 7 on top:" << endl;
	it = l1.begin();
	advance(it, 4);
	rotate(l1.begin(), it, l1.end());
	cout << "Collection after totate: " << endl;
	cout << "l1:"; for_each(l1.begin(), l1.end(), print<int>); cout << endl;
}