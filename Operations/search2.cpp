#include <iostream>
#include <vector>
#include <algorithm>
#include <ctype.h>
#include <iterator>

using namespace std;

void print(const char& value) {
	cout << value << " ";
}

bool compare(const char& f, const char& s) {
	return tolower(f) == tolower(s);
}

int main () {
	char t[]={'a','b', 'c', 'd', 'A', 'b','D', 'A', 'b', 'C', 'a', 'f'};
	vector<int> v1(t, t+12);
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	char ts[] = {'b', 'c'};
	cout << "Searching for the sequence b, c from beginning\n";
	vector<int>::iterator found = search(v1.begin(), v1.end(), ts, ts+2, compare);
	if(found != v1.end()) {
		cout << "Sequence b,c has been found at position: "
			 << distance(v1.begin(), found) << endl;
	} else {
		cout << "Sequence b,c has not been found\n";
	}
	cout << endl;
	
	cout << "Searching for the sequence b, c from the end\n";
	found = find_end(v1.begin(), v1.end(), ts, ts+2, compare);
	if(found != v1.end()) {
		cout << "Sequence b,c has been found at position: "
			 << distance(v1.begin(), found) << endl;
	} else {
		cout << "Sequence b,c has not been found\n";
	}
	cout << endl;
}