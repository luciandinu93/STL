#include <iostream>
#include <deque>
#include <set>
#include <algorithm>

using namespace std;

bool odd(const int& value) {
	return value % 2 != 0;
}

struct Even {
	bool operator()(const int& value) {
		return value % 2 == 0;
	}
};

int main() {
	int t[] = {10, 2, 4, 3, 5, 6, 7, 8, 9, 1};
	deque<int> d1(t, t+10);
	cout << "Look for the first odd element in the container:\n";
	deque<int>::iterator found = find_if(d1.begin(), d1.end(), odd);
	if(found != d1.end()) {
		cout << "Found odd element: " << *found << " ";
	} else {
		cout << "Odd element not found \n";
	}
	cout << endl;
	
	cout << "Look for the first even element in the container:\n";
	found = find_if(d1.begin(), d1.end(), Even());
	if(found != d1.end()) {
		cout << "Found even element: " << *found << " ";
	} else {
		cout << "Even element not found \n";
	}
	cout << endl;
	
	set<int> s1(t, t+10);
	
	cout << "Look for the first odd element in the set: \n";
	set<int>::iterator founds = find_if(s1.begin(), s1.end(), odd);
	if(founds != s1.end()) {
		cout << "Found odd element: " << *founds << endl;
	} else {
		cout << "Odd element not found\n";
	}
	
	cout << "Look for the forst even element in the set: \n";
	founds = find_if(s1.begin(), s1.end(), Even());
	if(founds != s1.end()) {
		cout << "Found even element: " << *founds << endl;
	} else {
		cout << "Even element not found\n";
	}
	cout << endl;
}
	