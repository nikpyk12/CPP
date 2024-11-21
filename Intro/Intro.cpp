#include <iostream>

int main(int argc, char* argv[])
{
    int a = 9;
    int b = 5;
    std::cout << a / (double)b; // Новый стиль: static_cast<double>(b)
    return 0;
}
