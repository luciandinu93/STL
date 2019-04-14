#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void print(const T& coll, const string& optstr) {
	cout << optstr << endl;
	for(const auto& elem : coll) 
		cout << elem << " ";
	cout << endl;
}

int main() {
	vector<char> source(10, '.');
	for(int c = 'a'; c <= 'f'; ++c) {
		source.push_back(c);
	}
	source.insert(source.end(), 10, '.');
	
	print(source, "source: ");
	
	// copy all letters in front of 'a'
	vector<char> c1(source.cbegin(), source.cend());
	copy(c1.begin()+10, c1.begin()+16, c1.begin()+7);
	print(c1, "c1: ");
	
	// copy_backward all letters behind of 'f'
	vector<char> c2(source.cbegin(), source.cend());
	copy_backward(c2.begin()+10, c2.begin()+16, c2.begin()+19);
	print(c2, "c2: ");
}