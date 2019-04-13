#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

template<typename I>
void print_elements(const I& coll, const string& optstring) {
	cout << optstring << endl;
	for(const auto& elem : coll)
		cout << elem << " ";
	cout << endl;
}
bool doubled(int elem1, int elem2) {
	return elem1 * 2 == elem2;
}

int main() {
	vector<int> v = {0, 1, 2, 9, 8, 1, 1, 2, 3, 5, 8 ,9};
	
	print_elements(v, "elemente initiale: ");
	
	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	
	if(pos != v.end()) { // au fost gasite doua elemente egale
		cout << "primele doua elemente cu valori egale au fost gasite la pozitia:"
			 << distance(v.begin(), pos)
			 << endl;
	}
	
	// cauta elementele adicente ce returneaza true pentru functia doubled
	pos = adjacent_find(v.begin(), v.end(), doubled);
	while(pos != v.end()) {
		cout << "pozitia elementelor care respecta conditia doubled este: " 
			 << distance(v.begin(), pos)
			 << endl;
		pos = adjacent_find(++pos, v.end(), doubled);
	}
}