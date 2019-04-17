#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
void print(const T& coll, const string& optstr="") {
	cout << optstr << endl;
	for(const auto& elem : coll) {
		cout << elem << " ";
	}
	cout << endl;
}

bool isNegative(int nr) {
	return nr < 0;
}

int main() {
	vector<int> v = {0, 1, 2, -3, 6, -9, 8 , 1, -2, 3, -5, 8};
	print(v, "vector initial: ");
	vector<int>::iterator pos = remove(v.begin(), v.end(), 8);
	print(v, "vector fara 8 ?: ");
	// stergerea elementelor egale cu 8 din vector
	v.erase(pos, v.end());
	print(v, "vector fara 8: ");
	
	// stergerea elementelor negative
	v.erase(remove_if(v.begin(), v.end(), isNegative), v.end());
	print(v, "vector fara numere negative");
}