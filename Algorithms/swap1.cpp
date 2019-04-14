#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <class T>
void print(const T& elem) {
	cout << elem << " ";
}

int main() {
	vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int> v2 = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	cout << "Initial vectors: " << endl;
	for_each(v1.begin(), v1.end(), print<int>); cout << endl;
	for_each(v2.begin(), v2.end(), print<int>); cout << endl;
	swap(v1, v2);
	cout << "After swap: " << endl;
	for_each(v1.begin(), v1.end(), print<int>); cout << endl;
	for_each(v2.begin(), v2.end(), print<int>); cout << endl;
	
	// get intial values for v1
	cout << "iter_swap on first and last element of v1: " << endl;
	v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter_swap(v1.begin(), --v1.end());
	for_each(v1.begin(), v1.end(), print<int>); cout << endl;
	
	// get initial values for v2
	cout << "swap ranges on first three elements with last three elements: " << endl;
	v2 = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	swap_ranges(v2.begin(), v2.begin()+3, v2.end()-3);
	for_each(v2.begin(), v2.end(), print<int>); cout << endl;
}