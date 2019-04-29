#include <deque>
#include <string>
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

template <class T>
void print(T start, T end) {
	for(; start != end; ++start) {
		cout << *start << " ";
	}
}

bool compare(int a, int b) {
	return b < a;
}

int main() {
	int t[] = { 1, 10, 8, 4, 5, 6, 3, 9, 7, 2 };
	deque<int> d1(t, t+10);
	cout << "Source collection: " << endl;
	cout << "d1:"; print(d1.begin(), d1.end()); cout << endl;
	cout << "Sorting is required in ascending order" << endl;
	sort(d1.begin(), d1.end());
	cout << "d1:"; print(d1.begin(), d1.end()); cout << endl;
	
	cout << "Finding range [4, 6]: " << endl;
	deque<int>::iterator it1 = lower_bound(d1.begin(), d1.end(), 4);
	deque<int>::iterator it2 = upper_bound(d1.begin(), d1.end(), 6);
	print(it1, it2); cout << endl;
	cout << "Finding single value range using equal_bounds: " << endl;
	pair<deque<int>::iterator, deque<int>::iterator> p = equal_range(d1.begin(), d1.end(), 4);
	print(p.first, p.second); cout << endl;
}