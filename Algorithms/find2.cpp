#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
	list<int> coll;
	
	for(int i = 1; i <= 2; ++i) {
		for(int j = 1; j <= 9; ++j) {
			coll.push_back(j);
		}
	}
	
	for(const auto& elem : coll) {
		cout << elem << " ";
	}
	cout << endl;
	
	// find first element with value 4 using find algorithm
	list<int>::iterator pos1 = find(coll.begin(), coll.end(), 4);
	
	// find the second element with value 4 using find algorithm
	list<int>::iterator pos2;
	if(pos1 != coll.end()) {
		pos2 = find(++pos1, coll.end(), 4);
	}
	
	// print all elements from forst 4 to second 4
	if(pos1 != coll.end() && pos2 != coll.end()) {
		copy(--pos1, ++pos2, ostream_iterator<int>(cout, " "));
		cout << endl;
	}
}