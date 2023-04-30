#include "vehicle.h"
#include "car.h"

int main() {
    Car c;
    Vehicle *v = &c;
    c.Move();
    c.Stop();
    v->Move();
    v->Stop();
    return 0;
}