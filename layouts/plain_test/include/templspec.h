#ifndef TEMPLSPEC_H
#define TEMPLSPEC_H

template<typename T1, typename T2>
struct Pair;

template<>
struct Pair<int, int> {
    int a;
    int b;
    int pairAddValues() {return a + b;}
};

template <typename T1>
struct Pair1 : Pair<T1, int>
{
    T1 a;
    int b;
    int pairAddValues() {return 5 * b;}
};

template <typename T2>
struct Pair2 : Pair<int, T2> {
    int a;
    T2 b;
    int pairAddValues() {return 7 * a;}
};



#endif // TEMPLSPEC_H