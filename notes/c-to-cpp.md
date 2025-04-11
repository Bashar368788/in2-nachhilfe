## From C to C++

### 🚀 Why C++?

C++ was created as an **extension of the C language**, keeping all of C's power while adding **object-oriented programming (OOP)** and many modern features.

Reasons to choose C++:
- Combines **low-level control** (like C) with **high-level abstractions**.
- Supports **Object-Oriented Programming** for better code organization.
- Offers features like **classes, templates, exception handling, and STL**.
- Ideal for **system programming**, **game development**, **performance-critical apps**.

---

### 🤝 Similarities Between C and C++

C++ maintains **full compatibility with C**:
- Same **syntax for variables, loops, conditionals, arrays, and pointers**.
- C code can be compiled using a C++ compiler.
- You can use **`printf`**, **`scanf`**, and standard C libraries in C++.

In short, every valid C program is *almost* a valid C++ program.

---

### 📌 Pointers

Pointers in C++ work the same as in C:

```cpp
int a = 10;
int* ptr = &a; // ptr points to the address of a
```

But in C++, you can also use **smart pointers** (like `std::unique_ptr` and `std::shared_ptr`) for safer memory management.

---

### 🧠 Functions & New Features in C++

C++ functions are similar to C:

```cpp
int add(int a, int b) {
    return a + b;
}
```

#### ✅ Pass by Reference
C++ allows **pass by reference** using `&`, so you can modify variables directly:

```cpp
void increment(int& x) {
    x++;
}
```

- This avoids unnecessary copies.
- Not available in C.

#### ✅ Function Overloading
C++ supports functions with the **same name but different parameters**:

```cpp
int sum(int a, int b);
double sum(double a, double b);
```

---

### 🧱 Structs in C++

Structs in C++ are more powerful than in C. In C++:
- You can define **methods** inside structs.
- You can use **constructors**.

```cpp
struct Point {
    int x, y;

    void print() {
        std::cout << x << ", " << y << std::endl;
    }
};
```

In C, structs are just containers for data. In C++, they're almost like classes.

---

### 🏛️ Classes

C++ introduces **classes** as a way to group **data and behavior**:

```cpp
class Car {
public:
    string brand;
    void drive() {
        cout << "Driving " << brand << endl;
    }
};
```

- `public`, `private`, and `protected` control access.
- Classes are the building blocks of OOP in C++.

---

### 🎯 Object-Oriented Principles

C++ brings full OOP support:

1. **Encapsulation** – Wrap data and methods inside a class.
2. **Abstraction** – Hide complexity, show only necessary parts.
3. **Inheritance** – Create new classes based on existing ones.
4. **Polymorphism** – Use functions/objects in multiple forms.

Example:
```cpp
class Animal {
public:
    virtual void speak() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof" << endl;
    }
};
```

This is how C evolves into a more expressive and structured language in C++.

