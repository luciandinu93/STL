#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

template <class T>
void print(const T& value) {
	cout << value << " ";
}

struct Pred {
	int value;
	Pred(const int& v) : value(v) {};
	bool operator() (int a) { 
		return a < value;
	}
};

template<class T>
bool is_less(const T& number) {
	return number < 5;
}

int main() {
	int t[]={1, 10, 8, 4, 5, 6, 7, 3, 9, 2};
	vector<int> v1(t, t+10);
	cout << "Source collection: " << endl;
	cout << "v1:"; for_each(v1.begin(), v1.end(), print<int>); cout << endl << endl;
	
	cout << "Normal partitioning: " << endl;
	vector<int>::iterator it = partition(v1.begin(), v1.end(), is_less<int>);
	cout << "Paritioning into two groups: < 5 and > 5: " << endl;
	cout << "v1:"; for_each(v1.begin(), v1.end(), print<int>); cout << endl;
	cout << "The first group: "; for_each(v1.begin(), it, print<int>); cout << endl;
	cout << "The second goup: "; for_each(it, v1.end(), print<int>); cout << endl;
	
	cout << endl << "Stable partitioning: " << endl;
	copy(t, t+10, v1.begin());
	cout << "Source collection: " << endl;
	cout << "v1:"; for_each(v1.begin(), v1.end(), print<int>); cout << endl;
	it = stable_partition(v1.begin(), v1.end(), is_less<int>);
	cout << "Stable partition int two groups: < 5 and > 5: " << endl;
	cout << "v1:"; for_each(v1.begin(), v1.end(), print<int>); cout << endl;
	cout << "The first group: "; for_each(v1.begin(), it, print<int>); cout << endl;
	cout << "The second group: "; for_each(it, v1.end(), print<int>); cout << endl;
}