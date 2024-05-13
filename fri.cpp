#include <iostream>

using namespace std;

class A {
public:
    int area(int l, int b) {
        return l * b;
    }

    int area(int r) {
        const float pi = 3.14;
        return pi * r * r; 
    }

    int area(int a, int b, int c) {
        return a * b * c; 
    }


    friend void calculateTotalArea(A& obj, int l, int b, int r, int a,  int c);
};


void calculateTotalArea(A& obj, int l, int b, int r, int a,  int c) {
    int rectArea = obj.area(l, b);
    int circleArea = obj.area(r);
    int cubeArea = obj.area(a, b, c);
    int totalArea = rectArea + circleArea + cubeArea;

    cout << "Rectangle area: " << rectArea << endl;
    cout << "Circle area: " << circleArea << endl;
    cout << "Cube area: " << cubeArea << endl;
    cout << "Total area: " << totalArea << endl;
}

int main() {
    A obj;

    
    cout << "Rectangle area (2, 5): " << obj.area(2, 5) << endl;
    cout << "Circle area (4): " << obj.area(4) << endl;
    cout << "Cube area (2, 4, 5): " << obj.area(2, 4, 5) << endl;

 
    calculateTotalArea(obj, 2, 5, 4, 2, 5);

    return 0;
}
