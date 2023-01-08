#include "base.hpp"

namespace SimpleDeriveExample {

class SimpleDeriveClass : public SimpleBaseClass {
    public:
        SimpleDeriveClass(const int & n, const char & c);
        void ShowVariableValues();
};

}