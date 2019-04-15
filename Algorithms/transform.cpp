#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <typename T>
void print(const T& elem) {
	cout << elem << " ";
}

template <typename T>
T square (T elem) {
	return elem * elem;
}

int main() {
	vector<int> v = {0, 1, 2, 3, 6, 9, 8 , 1, 2, 3, 5, 8 ,9};
	cout << "v: "; for_each(v.begin(), v.end(), print<int>); cout << endl;
	transform(v.begin(), v.end(), v.begin(), square<int>);
	cout << "v(transformed): "; for_each(v.begin(), v.end(), print<int>); cout << endl;
}