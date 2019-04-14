#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

template <class T>
void print(const T& value) {
	cout << value << " ";
}

struct Add {
	int _v;
	Add(int v) : _v(v) {}
	int operator() (int a) {
		return a+_v;
	}
};

struct Average {
	double operator() (const int & a, const int & b) {
		return a + b / 2.0;
	}
};

int main() {
	int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int> v1(t, t+10);
	list<double> l1(v1.size());
	cout << "Source collection: " << endl;
	cout << "v1: "; for_each(v1.begin(), v1.end(), print<int>); cout << endl << endl;
	cout << "Adding value 10 to all the elements of the collection: " << endl;
	transform(v1.begin(), v1.end(), l1.begin(), Add(10));
	cout << "l1: "; for_each(l1.begin(), l1.end(), print<double>); cout << endl << endl;
	
	cout << "Adding value 10 to all elements and storing them in the same collection: " << endl;
	transform(l1.begin(), l1.end(), l1.begin(), Add(10));
	cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl << endl;
	
	list<double> l2(l1.size());
	cout << "Calculating average of elements from two collections: " << endl;
	transform(v1.begin(), v1.end(), l1.rbegin(), l2.begin(), Average());
	cout << "l2: "; for_each(l2.begin(), l2.end(), print<double>); cout << endl << endl;
}