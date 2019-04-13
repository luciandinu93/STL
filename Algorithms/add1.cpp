#include <list>
#include <algorithm>
#include <iostream>
#include <string>

template<typename I>
void print(const I& coll, const std::string& optstr = "")
{
	std::cout << optstr;
	for(const auto& elem : coll)
		std::cout << elem << " ";
	std::cout << std::endl;
}

class AddValue
{
private:
	int theValue;
public:
	AddValue(int v) : theValue(v) {}
	void operator() (int& elem) const {elem += theValue;}
};

int main()
{
	std::list<int> coll;
	
	for(int i = 1; i <= 9; ++i)
		coll.push_back(i);
	
	print(coll, "initialized: ");
	
	std::for_each(coll.begin(), coll.end(), AddValue(10));
	
	print(coll, "after adding 10: ");
	
	std::for_each(coll.begin(), coll.end(), AddValue(*coll.begin()));
	
	print(coll, "after adding first element: ");
}