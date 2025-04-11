#include <iostream>


int main(int argc, char const *argv[])
{
    int hilfsvariable = 5;
    int *a = &hilfsvariable;
    // int *a = new int(5); // Dynamische SpeicherallokatioN
    *a = 7; // Dereferenzierung, der Wert von b wird auf 7 gesetzt
    // delete a; // Dynamische Speicherfreigabe
    // int *a = nullptr; // Nullpointer
    int  b = 10;
    int  c = *a + b;

    
    
    std::cout << "The Value of a: "  << *a <<std::endl;
    std::cout << "The Adress of a: "  << a <<std::endl;

    std::cout << "The Value of b: "  << b <<std::endl;
    std::cout << "The Value of b: "  << &b <<std::endl;

    std::cout << "The Value of a: "  << c << std::endl;
    std::cout << "The Adress of a: "  << &c <<std::endl;

    return 0;
}
