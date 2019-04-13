#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Compare {
	bool operator() (const char& c1, const char& c2) {
		return tolower(c1) == tolower(c2);
	}
};

int main() {
	vector<int> v1 = {0, 1, 2, 3, 4, 5, 6};
	vector<int> v2 = {0, 1, 2, 3, 4, 6, 5};
	
	if(equal(v1.begin(), v1.end(), v2.begin()))
		cout << "V1 is equal to V2" << endl;
	else
		cout << "V1 is not equal to V2" << endl;
	
	string s1 = {'a', 'b', 'c', 'd'};
	string s2 = {'a', 'B', 'c', 'D'};
	
	// comparare case-sensitive
	if(equal(s1.begin(), s1.end(), s2.begin()))
		cout << "String 1 este egal cu String 2" << endl;
	else
		cout << "String 1 nu este egal cu String 2" << endl;
	// comparare non case-sensitive
	if(equal(s1.begin(), s1.end(), s2.begin(), Compare()))
		cout << "String 1 este egal cu String 2 (non case sensitive)" << endl;
	else
		cout << "String 1 nu este egal cu String 2 (non case sensitive)" << endl;
}