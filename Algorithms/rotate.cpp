#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

template <typename T>
void print(const T& coll, const string& optstr="") {
	cout << optstr;
	for(const auto& elem : coll) {
		cout << elem << " ";
	}
	cout << endl;
}

int main() {
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	print(v, "intial v: ");
	cout << "v.begin() + 4 = " << *(v.begin()+4) << endl;
	rotate(v.begin(), v.begin()+4, v.end());
	print(v, "after rotate v: ");
}