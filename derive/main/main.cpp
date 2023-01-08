#include "../support/derive.hpp"

int main() {

    SimpleDeriveExample::SimpleDeriveClass *sdc = new SimpleDeriveExample::SimpleDeriveClass(1, 'y');
    sdc->ShowVariableValues();

    delete sdc;

}