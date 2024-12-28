#include <iostream>

#include "Math.h"

int main(int argc, char** argv)
{
    std::cout << MathLib::Math::sum(10, 15) << '\n';

    std::cout << MathLib::Math::sub(10, 15) << '\n';

    return 0;
}