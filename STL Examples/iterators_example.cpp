#include <list>
#include <vector>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
	// containers
	vector<int> v(10);
	deque<int> d(10);
	list<int> l(10);
	
	int i = 1;
	// vector
	vector<int>::iterator itV;
	for(itV = v.begin(); itV != v.end(); ++itV, ++i)
	{
		*itV = i;
	}
	for(itV = v.begin(); itV != v.end(); ++itV)
	{
		cout << *itV << " ";
	}
	cout << endl;
	
	return 0;
}