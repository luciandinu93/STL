#include <iostream>
#include <string>

int main()
{
	int x = 0;
    int y = 42;
	auto l = [x, &y]{
        std::cout << "x: " << x << std::endl;
        std::cout << "y: " << y << std::endl;
        ++y;
	};
	
    x = y = 77;
    l();
    l();
	std::cout << "final y: " << y << std::endl;
}
