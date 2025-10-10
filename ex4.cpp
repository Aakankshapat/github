r#include<iostream>
using namespace std;
class rectangle {
private:
    float l;
    float b;
public:
    rectangle() {
        l = 0;
        b = 0;
    }
    void input() {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter breadth: ";
        cin >> b;
    }
    float area() {
        return l * b;
    }
    float perimeter() {
        return 2 * (l + b);
    }
    ~rectangle() {
        cout << "You are in destructor" << endl;
    }
};
int main() {
    rectangle b1 ;
    cout << "Rectangle 1:" << endl;
    b1.input();
    cout << "Area is: " << b1.area() << endl;
    cout << "Perimeter is: " << b1.perimeter() << endl;

    
    return 0;
}