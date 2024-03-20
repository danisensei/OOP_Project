#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    std::string sound;

public:
    Animal(std::string _name, std::string _sound) : name(_name), sound(_sound) {}

    virtual void makeSound() const {
        std::cout << name << " says " << sound << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(std::string _name) : Animal(_name, "Woof") {} //dog makes sound
};

class Cat : public Animal {
public:
    Cat(std::string _name) : Animal(_name, "Meow") {} //cat makes its sound
};

class Cow : public Animal {
public:
    Cow(std::string _name) : Animal(_name, "Moo") {}
};

int main() {
    Dog dog("Buddy");
    Cat cat("Whiskers");
    Cow cow("Bessie");

    dog.makeSound();
    cat.makeSound();
    cow.makeSound();

    return 0;
}
