#include "base.h"

#include <string>

Base::Base(int n): number(n) {};
int Base::Get() {return number;};
std::string Base::Foo() { return "foo"; };
std::string Base::Foo() const { return "foo const"; }; // https://stackoverflow.com/a/751783