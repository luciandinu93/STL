#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = { 1, 2, 7, 7, 6, 3, 9, 5, 7, 7, 7, 3, 6 };
	
	for_each(v.begin(), v.end(), [] (int elem) {cout << elem << " ";});
	cout << endl;
	
	auto pos = search_n(v.begin(), v.end(), 3, 7);
	
	cout << "value {7, 7, 7} found at position: " << distance(v.begin(), pos) << endl;
	
	auto elem_impare = search_n(v.begin(), v.end(), 4, 0, 
								[](int elem, int value) {return elem%2==1;});
								// nu conteaza valoarea "value" deoare nu e folosita de operator
							
	if(elem_impare != v.end()) {
		cout << "cele 4 elemente impare consecutive sunt: " << endl;
		for(elem_impare; elem_impare != v.end(); ++elem_impare) {
			cout << *elem_impare << " ";
		}
		cout << endl;
	} else {
		cout << "nu exista 4 elemente impare consecutive" << endl;
	}
}