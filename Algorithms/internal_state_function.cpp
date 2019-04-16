#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

template <typename T>
void print(const T& coll, const string& optstr="") {
	cout << optstr << endl;
	for(const auto& elem : coll) {
		cout << elem << " ";
	}
	cout << endl;
}

class IntSequence {
private:
	int value;
public:
	IntSequence(int initialValue) : value(initialValue) {};
	int operator() () { 
		return value++;
	}
};

int main() {
	list<int> coll;
	generate_n(back_inserter(coll), 9, IntSequence(1));
	print(coll, "coll: ");
}