#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

template <class T>
void print(const T& value) {
	cout << value << " ";
}

int main() {
	cout << "Simple swap of value: " << endl;
	int a = 10, b = 100;
	cout << "a = " << a << " and b = " << b << endl;
	swap(a, b);
	cout << "After swap: " << endl;
	cout << "a = " << a << " and b = " << b << endl;
	
	cout << endl << "Simple iterator swap: " << endl;
	int t[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	list<int> l1(t, t+10);
	for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << "Swapping first and last element: " << endl;
	list<int>::iterator it = l1.end();
	advance(it, -1);
	iter_swap(l1.begin(), it);
	for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	
	cout << endl << "Swapping iterator ranges - switching halves of the list:" << endl;
	it = l1.end();
	advance(it, -4);
	swap_ranges(l1.begin(), it, it); 
	for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << endl;
}