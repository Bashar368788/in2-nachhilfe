#include <iostream>
#include <cmath>


namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
}

namespace Physics {
    double gravity = 9.8;

    double fallTime(double height) {
        return sqrt((2 * height) / gravity);
    }
}

// A nested namespace
namespace App::Utils {
    void printLine() {
        std::cout << "-----------------------------" << std::endl;
    }
}

int main() {
    std::cout << "Namespace Example in C++\n";

    // Using functions from the Math namespace
    int sum = Math::add(5, 3);
    int diff = Math::subtract(10, 7);
    std::cout << "Math::add(5, 3) = " << sum << std::endl;
    std::cout << "Math::subtract(10, 7) = " << diff << std::endl;

    // Using the Physics namespace
    double height = 20.0;
    double time = Physics::fallTime(height);
    std::cout << "Physics::fallTime(20.0) = " << time << " seconds\n";

    // Using a nested namespace
    App::Utils::printLine();

    return 0;
}
