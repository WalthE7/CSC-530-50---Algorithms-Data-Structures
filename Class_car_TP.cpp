#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void show() {
        cout << "Car -> " << brand << " " << model << " (" << year << ")\n";
    }
};

int main() {
    Car c1, c2;

    cout << "Enter car 1 (brand model year): ";
    cin >> c1.brand >> c1.model >> c1.year;

    cout << "Enter car 2 (brand model year): ";
    cin >> c2.brand >> c2.model >> c2.year;

    cout << "\nYou entered:\n";
    c1.show();
    c2.show();
    return 0;
}
