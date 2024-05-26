#ifndef BASE_H
#define BASE_H

class Transform {
    public:
    class Element *e;
    Transform(int dim);
};

class Element {
    private:
    int dim;
    public:
    void set_dim(int dim); 
    int get_dim();
};

#endif // BASE_H