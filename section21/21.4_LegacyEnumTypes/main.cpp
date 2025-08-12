#include <iostream>

enum Direction 
{
    TopLeft = 10, TopRight, Center, BottomLeft = TopLeft, BottomRight
};

enum Tool
{
    Pen, Marker, Eraser, Rectangle, Circle, PaintBucket
};

int main(){

    Direction direction {BottomLeft};
    Tool tool {Pen};

    std::cout << "direction : " << direction << std::endl;
    std::cout << "tool : " << tool << std::endl;

/*     // This is bad but compiler accepts it
    // Implicitly converting enums cause this
    std::cout << std::boolalpha << "direction > tool : " << (direction > tool) << std::endl; */
    return 0;
}