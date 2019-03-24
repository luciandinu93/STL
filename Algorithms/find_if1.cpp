#include <algorithm>
#include <list>
#include <iostream>

int main()
{
    std::list<int> coll;

    coll = {1, 2, 3, 35, 6, 7, 25, 33, 1, 3};

    auto pos25 = std::find(coll.begin(), coll.end(), 25);
    auto pos35 = std::find(pos25, coll.end(), 35);
    
    auto pos = std::find_if(coll.begin(), coll.end(),
                            [] (int i) {
                                return i == 25 || i == 35;
                            });
    if(pos == coll.end()) {
        std::cout << "No element 25 or 35 found" << std::endl;
    }
    else if (*pos == 25) {
        pos25 = pos;
        pos35 = std::find(pos25, coll.end(), 35);
    }
    else {
        pos35 = pos;
        pos25 = std::find(pos35, coll.end(), 25);
    }
}
