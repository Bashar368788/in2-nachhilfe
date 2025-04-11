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

namespace Mohamad {
void print (const char * msg)
std::cout << msg << std::endl;

}

int main() {
    std::cout << "Namespace Example in C++\n";

    

    




    return 0;
}
