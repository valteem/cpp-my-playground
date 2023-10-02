#include "level1/level2/vehicle.h"
#include "level1/car.h"

int main() {

    Car c;
    Vehicle&v = c;
    c.Move();
    c.Stop();
    v.Move();
    v.Stop();

    return 0;

}