#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool is_negative(const int& elem) {
	return elem < 0;
}

template <typename T>
void print(const T& coll, const string& optstr="") {
	cout << optstr;
	for(const auto& elem : coll) {
		cout << elem << " ";
	}
	cout << endl;
}

int main() {
	vector<int> v = {0, 1, 2, -3, 6, -9, 8 , 1, -2, 3, -5, 8};
	
	print(v, "v initial: ");
	// inlocuiesc pe 8 cu 10
	cout << "Inlocuiesc pe 8 cu 10" << endl;
	replace(v.begin(), v.end(), 8, 10);
	print(v, "v dupa inlocuire: ");
	// inlocuiesc numerele negative cu 0
	cout << "Inlocuiesc numerele negative cu 0" << endl;
	replace_if(v.begin(), v.end(), is_negative, 0);
	print(v, "v dupa inlocuire: ");
}