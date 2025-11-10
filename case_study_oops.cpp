#include <iostream>
using namespace std;

class Temperature {
    double celsius;
public:
    Temperature(double c) {
        celsius = c;
    }
    Temperature(double f, char type) {
        if (type == 'F' || type == 'f')
            celsius = (f - 32) * 5.0 / 9.0;
        else if (type == 'K' || type == 'k')
            celsius = f - 273.15;
        else
            celsius = f;
    }
    void display() {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;
        double kelvin = celsius + 273.15;
        cout << "Celsius: " << celsius << " °C\n";
        cout << "Fahrenheit: " << fahrenheit << " °F\n";
        cout << "Kelvin: " << kelvin << " K\n";
    }
};

int main() {
    Temperature t1(25.0);
    Temperature t2(77.0, 'F');
    Temperature t3(300.0, 'K');
    t1.display();
    t2.display();
    t3.display();
    return 0;
}

