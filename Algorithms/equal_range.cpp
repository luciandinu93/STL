#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using namespace std;

template <class T>
void print(const T& coll, const string optstr="") {
	cout << optstr;
	for(const auto& elem : coll) {
		cout << elem << " ";
	}
	cout << endl;
}

int main() {
	list<int> coll;
	
	for(int i = 1; i <= 9; i++) {
		coll.push_back(i);
		coll.push_back(i);
	}
	
	print(coll, "initial: ");
	
	// print first and last position where 5 can be inserted
	pair<list<int>::const_iterator, list<int>::const_iterator> range;
	range = equal_range(coll.begin(), coll.end(), 5);
	
	cout << "equal_range = [pos("
		 << distance(coll.cbegin(), range.first)
		 << "), pos("
		 << distance(coll.cbegin(), range.second)
		 << "));" 
		 << endl;
}