#include <iostream>
#include <string>

class Vehicle {
    public:
    std::string name;
    Vehicle(std::string name) : name(name) {};
    virtual ~Vehicle() {};
    void Move() {
        std::cout << "Vehicle: "<< name << " moving ...\n";
    };
    virtual void Stop() {
        std::cout << "Vehicle: " << name << " stopping ...\n";
    };
    virtual void Beep() {
        std::cout << "Vehicle: " << name << " beeping ...\n";
    }
};

class Car : public Vehicle {
    public:
    Car(std::string name) : Vehicle(name) {};
    ~Car() {};
    void Move() {
        std::cout << "Car: " << name << " moving ...\n";
    };
    void Stop() override{
        std::cout << "Car: " << name << " stopping ...\n";        
    };
   void Beep() { // workd even without `override` qualifier
        std::cout << "Car: " << name << " beeping ...\n";        
    };   
};

void Move(Vehicle & v) {
    v.Move();
};

void Stop(Vehicle & v) {
    v.Stop();
};

void Beep(Vehicle & v) {
    v.Beep();
};

int main() {

    Car c("some car");
    Move(c);
    Stop(c);
    Beep(c);

}