#include <utility>

class Example {
    private:
    int* resource = nullptr;
    public:
    Example() {
        resource = new int[1];
        resource[0] = 1;
    };
    Example(const Example& e) {
        resource = e.resource;
    };
    Example& operator=(const Example& e) {
        auto r = std::move(e.resource);
        std::swap(resource, r);
        return *this;
    };
};

int main() {

    Example e1 = Example{};

    auto e2 = e1; // copy ctor invoked

    Example e3 = Example{};
    e3 = e1; // copy operator invoked

    return 0;

}