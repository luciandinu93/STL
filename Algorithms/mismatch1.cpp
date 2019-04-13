#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v1 = {0, 1, 2, 9, 8, 1, 1, 2, 3, 5, 8 ,9};
	vector<int> v2 = {0, 1, 2, 9, 6, 1, 1, 3};

	pair<vector<int>::iterator, vector<int>::iterator> result = mismatch(v1.begin(), v1.end(), v2.begin());
	
	cout << "Prima valoare care difera din v1 este: " << *result.first << endl;
	cout << "Prima valoare care dinfera din v2 este: " << *result.second << endl;
	
	// vector<int>::iterator too long ?
	typedef vector<int>::iterator IntVecIt;
	
	pair<IntVecIt, IntVecIt> compare_result = mismatch(v1.begin(), v1.end(), v2.begin(), greater_equal<int>());
	
	if(compare_result.first != v1.end()) {
		cout << *compare_result.first << " not greater than " << *compare_result.second << endl;
	} else {
		cout << "V1 always greater or equal with V2" << endl;
	}
}