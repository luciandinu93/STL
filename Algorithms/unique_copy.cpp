#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void print(const T& coll, const string& optstr="") {
	cout << optstr;
	for(const auto& elem : coll) {
		cout << elem << " ";
	}
	cout << endl;
}

bool isNegative(const int& a, const int& b) {
	return a < 0 && b < 0;
}

int main() {
	vector<int> v = {0, 1, 3, 3, -6, -9, 8, 8 , 1, -2, -3, -5, 8};
	print(v, "v= ");
	vector<int> v2(v.size());
	print(v2, "v2= ");
	auto newEnd = unique_copy(v.begin(), v.end(), v2.begin());
	print(v2, "v2= ");
	auto newEnd2 = unique(v.begin(), v.end(), isNegative);
	print(v, "v= ");
	cout << "only valid positions: " << endl;
	v.erase(newEnd2, v.end());
	print(v, "v= ");
}