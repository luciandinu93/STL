#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

bool isEven(int value) {
	if(value % 2 == 0)
		return true;
	return false;
}

int main() {
	list<int> v = {0, 1, 2, 9, 8, 1, 1, 2, 3, 5, 8 ,9};
	
	cout << "Am gasit " << count(v.begin(), v.end(), 1) << " valori egale cu 1." << endl;
	
	cout << "Am gasit " << count_if(v.begin(), v.end(), isEven) << " valori pare." << endl;
}

