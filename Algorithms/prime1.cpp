#include <list>
#include <algorithm>
#include <iostream>
#include <cstdlib> // for abs()
using namespace std;

bool isPrime(int number) {
	number = abs(number);
	
	if(number == 0 || number == 1) {
		return false;
	}
	
	int divisor = number / 2; // to add explanation 
	while(divisor>1) {
		if(number%divisor == 0)
			return false;
		--divisor;
	}
	
	return true;
}

int main() {
	list<int> coll;
	
	// insert elements from 24 to 30
	for(int i = 24; i <= 30; ++i) {
		coll.push_back(i);
	}
	
	// search from prime numbers
	auto pos = find_if(coll.cbegin(), coll.cend(), isPrime);
	
	if(pos != coll.end()) {
		cout << *pos << " is the first prime number found" << endl;
	} else {
		cout << "no prime number found" << endl;
	}
}