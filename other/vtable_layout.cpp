class A {
    public:
    A(){};
    virtual ~A(){};
    virtual void V(){};
    void N(){};
};

class B : public A {
    public:
    B(){A();};
    ~B(){};
    void V() {};
    void N() {};
};

int main() {
    A a;
    B b;
    a.V();
    a.N();
    b.V();
    b.N();
    return 0;
}