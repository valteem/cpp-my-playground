#ifndef COLLECTION_H
#define COLLECTION_H

template <typename T>
class OpCreator {
    public:
    static T* Create() {return new T};
};

template <typename T>
class AnotherCreator { // does exactly the same as OpCreator, just an example to avoid malloc() stuff
    public:
    static T* Create() {return new T};
};

template <class CreationPolicy>
class SomeStuffManager : public CreationPolicy {
    public:
    void DoSomething() {/*do nothing*/};
};

typedef SomeStuffManager<OpCreator<int>> MySomeStuffMgr;

template <template <class> class CreationPolicy> // CreationPolicy has to be 'templated'
class OtherStuffManager : public CreationPolicy<float> {
    public:
    DoSomethingElse() {/*do nothing*/};
};

typedef OtherStuffManager<OpCreator> MyOtherStuffMgr;

#endif // COLLECTION_H