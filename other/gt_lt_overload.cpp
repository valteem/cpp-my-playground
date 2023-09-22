#include <iostream>

class Shape {
    public:
    double height_;
    double width_;
    double factor_;
    Shape(const double& height, double width, const double& factor): height_(height), width_(width), factor_(factor) {};
    bool operator>(const Shape& shape) {
        return (height_*height_ + width_*width_) * factor_ > (shape.height_*shape.height_ + shape.width_*shape.width_) * shape.factor_;
    };
    bool operator<(const Shape& shape) {
        return (height_*height_ + width_*width_) * factor_ < (shape.height_*shape.height_ + shape.width_*shape.width_) * shape.factor_;
    };
    bool operator==(const Shape& shape) {
    return (height_*height_ + width_*width_) * factor_ == (shape.height_*shape.height_ + shape.width_*shape.width_) * shape.factor_;
    };
};

int main() {
    auto s1 = Shape(1.0, 1.0, 1.0);
    auto s2 = Shape(1.0, 2.0, 1.0);
    auto s3 = Shape(1.0, 1.0, 1.0);
    std::cout << (s1 < s2) << std::endl;
    std::cout << (s1 > s2) << std::endl;
    std::cout << (s2 > s1) << std::endl;
    std::cout << (s2 < s1) << std::endl;
    std::cout << (s1 == s2) << std::endl;
    std::cout << (s1 == s3) << std::endl;
}