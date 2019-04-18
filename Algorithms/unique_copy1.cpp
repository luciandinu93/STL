#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;

template <class T>
void print(const T& value) {
	cout << value << " ";
}

struct Equal {
	bool operator() (const int & a, const int & b) {
		return a % 2 == b % 2;
	}
};

int main() {
	int t[] = {1, 1, 2, 3, 3, 1, 6, 7, 8, 2};
	list<int> l1(t, t+10);
	cout << "Source collection: " << endl;
	cout << "l1: "; for_each(l1.begin(), l1.end(), print<int>); cout << endl << endl;
	
	cout << "Removing duplicate values - copy version: " << endl;
	vector<int> v1(l1.size());
	vector<int>::iterator newEnd = unique_copy(l1.begin(), l1.end(), v1.begin());
	cout << "Collection after removal, size did not changed" << endl;
	cout << "l1:"; for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << "v1:"; for_each(v1.begin(), v1.end(), print<int>); cout << endl;
	cout << "Displaying only valid elements:" << endl;
	cout << "v1:"; for_each(v1.begin(), newEnd, print<int>); cout << endl;
	
	cout << "Removing duplicate values: " << endl;
	list<int>::iterator newEnd1 = unique(l1.begin(), l1.end());
	cout << "Collection after removal - size did not changed: " << endl;
	cout << "l1:"; for_each(l1.begin(), l1.end(), print<int>); cout << endl;
	cout << "Display only valid elements: " << endl;
	cout << "l1:"; for_each(l1.begin(), newEnd1, print<int>); cout << endl;
	
	cout << "----------------------------------------" << endl;
	cout << "Predicate version: " << endl;
	int t1[]={1, 3, 2, 4, 5, 6, 7, 9, 8, 10};
	list<int> l2(t1, t1+10);
	cout << "Source collection: " << endl;
	cout << "l2:"; for_each(l2.begin(), l2.end(), print<int>); cout << endl;
	
	cout << "Removing duplicates value:" << endl;
	vector<int> v2(l2.size());
	vector<int>::iterator newEnd2 = unique_copy(l2.begin(), l2.end(), v2.begin(), Equal());
	cout << "Collection after remove: " << endl;
	cout << "l2:"; for_each(l2.begin(), l2.end(), print<int>); cout << endl;
	cout << "v2:"; for_each(v2.begin(), v2.end(), print<int>); cout << endl;
	cout << "Display only valid elements: " << endl;
	cout << "v2:"; for_each(v2.begin(), newEnd2, print<int>); cout << endl;
	
	cout << "Removing duplicate values" << endl;
	list<int>::iterator newEnd3 = unique(l2.begin(), l2.end(), Equal());
	cout << "Collection after removal:" << endl;
	cout << "l2:"; for_each(l2.begin(), l2.end(), print<int>); cout << endl;
	cout << "Displaying only valid elements: " << endl;
	cout << "l2:"; for_each(l2.begin(), newEnd3, print<int>); cout << endl;
}