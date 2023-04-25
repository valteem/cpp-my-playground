#include <iostream>

class C1 {
    int a;
};

class C2 {
    int a1;
    int b1;
};

class C3 {
    int a1;
    int a2;
    int a3;
};

class P2 : public C1 {
    int b2;
};

class P3 : public C1 {
    int b2;
    int b3;
};

class S3 : public P2 {
    int s3;
};

int main() {
    C1 c1; C2 c2; C3 c3;
    P2 p2; P3 p3;
    S3 s3;
    std::cout << sizeof(c1) << sizeof(c2) << sizeof(c3) << "\n";
    std::cout << sizeof(c1) << sizeof(p2) << sizeof(p3) << "\n";
    std::cout << sizeof(c1) << sizeof(p2) << sizeof(s3) << "\n";
}