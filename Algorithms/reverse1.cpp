#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;

template<class T>
void print(const T & value)
{
	cout << value << " ";
}

int main() {
	int t[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	list<int> l1(t, t+10);
	cout << "Source collection: " << endl;
	for(const auto& elem : l1) {
		cout << elem << " ";
	}
	cout << endl;
	cout << "l1:"; for_each(l1.begin(), l1.end(), print<int>); cout << endl << endl;
	
	cout << "Reversing order, copy version: " << endl;
	vector<int> v1(l1.size());
	reverse_copy(l1.begin(), l1.end(), v1.begin());
	cout << "l1:"; for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << "v1:"; for_each(v1.begin(), v1.end(), print<int>); cout << endl << endl;
	
	cout << "Reversing order: " << endl;
	reverse(l1.begin(), l1.end());
	cout << "l1:"; for_each(l1.begin(), l1.end(), print<int>); cout << endl << endl;
}