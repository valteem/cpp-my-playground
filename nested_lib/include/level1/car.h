#ifndef CAR_H
#define CAR_H

#include "level1/level2/vehicle.h"

class Car : public Vehicle {
    public:
    void Move();
    void Stop();
};

#endif