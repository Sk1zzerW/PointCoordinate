#include <iostream>

class Point {
private:
    double x;
    double y;
    double z;

public:
    Point() : x(0), y(0), z(0) {}

    Point(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}

    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }

    void setX(double xVal) { x = xVal; }
    void setY(double yVal) { y = yVal; }
    void setZ(double zVal) { z = zVal; }

    void input() {
        std::cout << "Enter X: ";
        std::cin >> x;
        std::cout << "Enter Y: ";
        std::cin >> y;
        std::cout << "Enter Z: ";
        std::cin >> z;
    }

    void display() const {
        std::cout << "Point (" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

int main() {
    Point point1;

    std::cout << "Enter point's coordinates:" << std::endl;
    point1.input();

    std::cout << "Coordinates: ";
    point1.display();

    return 0;
}
