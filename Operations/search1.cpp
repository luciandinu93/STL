#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

void print(const int& value) {
	cout << value << " ";
}

int main() {
	int t[]={1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 2};
	vector<int> v1(t, t+18);
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	int ts[] = {2, 3};
	cout << "Searching for the sequence 2, 3 from the beginning:\n";
	vector<int>::iterator found = search(v1.begin(), v1.end(), ts, ts+2);
	if(found != v1.end()) {
		cout << "Sequence 2, 3 has been found at position "
			 << distance(v1.begin(), found) << endl;
	} else {
		cout << "Sequence 2, 3 has not been found\n";
	}
	
	cout << "Searching for the sequence 2, 3 from the end:\n";
	found = find_end(v1.begin(), v1.end(), ts, ts+2);
	if(found != v1.end()) {
		cout << "Sequence 2, 3 has been found at position "
			 << distance(v1.begin(), found) << endl;
	} else {
		cout << "Sequence 2, 3 has not been found\n";
	}
	
	// delete found element
	v1.erase(found, found+2);
	cout << "\nNew vector: ";
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
}