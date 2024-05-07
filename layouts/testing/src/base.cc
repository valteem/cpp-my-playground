#include "base.h"

Transform::Transform(int dim) {
    Element *e = new Element();
    e->set_dim(dim);
    this->e = e; 
}

void Element::set_dim(int dim) {
    this->dim = dim;
};

int Element::get_dim() {
    return dim;
};