#include <deque>
#include <string>
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

template <class T> void print (T start, T end) {
	for( ; start != end; ++start) {
		cout << *start << " ";
	}
}

bool compare (int a, int b) {
	return b < a;
}

void printMessage(bool value, int element) {
	if(value) {
		cout << "Element " << element << " has been found" << endl;
	} else {
		cout << "Element " << element << " has not been found" << endl;
	}
}

int main() {
	int t[] = {1, 10, 8, 4, 5, 6, 3, 9, 7, 2};
	deque<int> d1(t, t+10);
	cout << "Source collection: " << endl;
	cout << "d1: "; print(d1.begin(), d1.end()); cout << endl;
	cout << "Sorting is required: " << endl;
	sort(d1.begin(), d1.end());
	cout << "d1: "; print(d1.begin(), d1.end()); cout << endl;
	
	cout << "Finding element [5]: ";
	printMessage(binary_search(d1.begin(), d1.end(), 5), 5);
	
	cout << "-------------------------------------------" << endl;
	cout << "Searching for element in the collection not stored properly" << endl;
	cout << "Finding element [5]: ";
	printMessage(binary_search(d1.begin(), d1.end(), 5, compare), 5); cout << endl;
}