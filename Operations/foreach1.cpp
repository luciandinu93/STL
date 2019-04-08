#include <iostream>
#include <list>
#include <set>
#include <algorithm>

using namespace std;

void print(const int & value) {
	cout << value << " ";
}

struct Print {
	void operator() (const int & value) {
		cout << value << " ";
	}
};

int main() {
	int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	list<int> l1(t, t+10);
	cout << "Print all elements of the container using function\n";
	for_each(l1.begin(), l1.end(), print); 
	cout << endl;
	cout << "Print all elements of the container using function object\n";
	for_each(l1.begin(), l1.end(), Print());
	cout << endl;
	
	set<int> s1(t, t+10);
	cout << "Print all elements of set using function\n";
	for_each(s1.begin(), s1.end(), print);
	cout << endl;
	cout << "Print all elements of set using function object\n";
	for_each(s1.begin(), s1.end(), Print());
	cout << endl;
}
