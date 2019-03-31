#include <tuple>
#include <iostream>
#include <complex>
#include <string>

int main()
{
	// create a four element tuple
	std::tuple<std::string, int, int, std::complex<double>> t;
	
	// create and intialize a tuple explicit
	std::tuple<int, float, std::string> t1(41, 6.3, "nico");
	
	// iterate over elements
	std::cout << std::get<0>(t1) << " ";
	std::cout << std::get<1>(t1) << " ";
	std::cout << std::get<2>(t1) << " ";
	std::cout << std::endl;
	
	// create tuple with make tuple
	auto t2 = std::make_tuple(22, 44, "nico");
	
	// assign second value in t2 to t1
	std::get<1>(t1) = std::get<1>(t2);
	
	if(t1 < t2)
		t1 = t2;
}