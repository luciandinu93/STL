#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> sub = {8, 9};
	vector<int> v = {0, 1, 2, 3, 6, 9, 8 , 1, 2, 3, 5, 8 ,9};
	
	auto pos = find_first_of(v.begin(), v.end(), sub.begin(), sub.end());
	
	int posIndex = distance(v.begin(), pos);
	
	cout << "Primul element din interval se regaseste la pozitia: " << posIndex << endl;
	
	v.erase(pos, v.end());
	
	for(const auto& elem : v)
		cout << elem << " ";
	
	cout << endl;
}