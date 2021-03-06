#include <iostream>

struct Point {
    public:
        float x, y;
        Point(float xx, float yy){
            x = xx;
            y = yy;
        }
        Point add ( Point p ){
            return Point( x+p.x, y+p.y );
        }
        Point operator +( Point p){
            return add( p );
        }
};

int main() {
    // Write C++ code here
    Point a = {3, 4};
    Point b = {5, 7};
    Point result = a + b;
    
    std::cout << "Result: Point(" << result.x << ", " << result.y << " )";
    
    return 0;
}