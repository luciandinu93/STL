#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = {0, 1, 2, 3, 6, 9, 8 , 1, 2, 3, 5, 8 ,9};
	vector<int> sub = {1, 2, 3};
	
	vector<int>::iterator pos1 = search(v.begin(), v.end(), sub.begin(), sub.end());
	vector<int>::iterator pos2 = find_end(v.begin(), v.end(), sub.begin(), sub.end());
	
	// display initial elements
	cout << "initial elements:" << endl;
	for(const auto& elem : v) 
		cout << elem << " ";
	cout << endl;
	
	// print element from [pos1, pos2)
	for(pos1; pos1 != pos2; ++pos1) {
		cout << *pos1 << " ";
	}
	cout << endl;
	
	// remove elements from [pos1, pos2]
	v.erase(pos1, ++pos2);
	
	// display remaining elements
	cout << "remaining elements are:" << endl;
	for(const auto& elem : v) 
		cout << elem << " ";
	cout << endl;
}