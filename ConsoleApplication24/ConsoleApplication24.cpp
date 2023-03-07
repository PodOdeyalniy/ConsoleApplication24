#include <iostream>
#include <string>

class MobilePhone {
public:
    MobilePhone(std::string number) : number_(number) {}
    std::string GetNumber() const {
        return number_;
    }
private:
    std::string number_;
};

class Person {
public:
    Person(std::string name, std::string phone_number)
        : name_(name), mobile_phone_(phone_number) {}
    std::string GetName() const {
        return name_;
    }
    MobilePhone GetMobilePhone() const {
        return mobile_phone_;
    }
private:
    std::string name_;
    MobilePhone mobile_phone_;
};

int main() {
    Person john("John", "123-456-7890");
    std::cout << john.GetName() << "'s phone number is "
        << john.GetMobilePhone().GetNumber() << std::endl;
    return 0;
}