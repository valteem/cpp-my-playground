class A {
    virtual int MethodA() {return 1;}
};

class B {
    virtual int MethodB() {return 2;}
};

class X : public A, public B {
    int MethodA() {return 11;}
    int MethodB() {return 12;}
};

int main(int argc, char *argv[]) {

    X *x = new X;
    A *a = x;
    B *b = x;

    X *x1 = dynamic_cast<X*>(a);
    X *x2 = dynamic_cast<X*>(b);
    
    return 0;

}