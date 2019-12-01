#include <iostream>

int main(int argc, const char * argv[]) {

    int i = 3 / 2;
    double j = 3 / 2;
    auto k = 3 / 2;
    auto l = 3.0 / 2;

    i = static_cast<int>(3.2);
    i = static_cast<int>(2.9);
    i = -1;
    std::cout << i << std::endl;

    double d = 2.7;
    std::cout << i << std::endl;
    i = static_cast<int>(d);
    d = i;
    
    bool flag = true;
    flag = false;
    flag = static_cast<bool>(7);
    std::cout << i << std::endl;

    return 0;
}
