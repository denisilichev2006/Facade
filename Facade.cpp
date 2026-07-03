#include <iostream>
#include <string>

class Subsystem1 {
public:
    std::string Operation1() const { return "Subsystem1: Ready!\n"; }
    std::string OperationN() const { return "Subsystem1: Go!\n"; }
};

class Subsystem2 {
public:
    std::string Operation1() const { return "Subsystem2: Get ready!\n"; }
    std::string OperationZ() const { return "Subsystem2: Fire!\n"; }
};

class Facade {
private:
    Subsystem1 subsystem1_;
    Subsystem2 subsystem2_;

public:
    std::string Operation() {
        std::string result = "Facade initializes subsystems:\n";
        result += subsystem1_.Operation1();
        result += subsystem2_.Operation1();
        result += "Facade orders subsystems to perform the action:\n";
        result += subsystem1_.OperationN();
        result += subsystem2_.OperationZ();
        return result;
    }
};

int main() {
    Facade facade;
    std::cout << facade.Operation();
    return 0;
}