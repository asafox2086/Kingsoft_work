#include <iostream>
#include <string>

// Define a standard Person class
class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& n, int a) : name(n), age(a) {
        std::cout << "[Constructor] Object successfully created!" << std::endl;
    }

    // Destructor
    ~Person() {
        std::cout << "[Destructor] Object destroyed." << std::endl;
    }

    // Member function to display details
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Stack Initialization
    Person person1("John Doe", 25);
    person1.displayInfo();

    std::cout << "------------------------" << std::endl;

    // Heap Initialization (Dynamic Allocation)
    Person* person2 = new Person("Jane Smith", 30);
    person2->displayInfo();

    // Free allocated memory
    delete person2;

    return 0;
}