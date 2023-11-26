#include <iostream>
#include<math.h>
using namespace std;
class Hexagon {
private:
    double sideLength;

public:
    Hexagon(double side) : sideLength(side) {}

    double calcArea() {
        return 1.5* 1.732* pow(sideLength, 2);
    }

    double calcPeri() {
        return 6 * sideLength;
    }

    double calcAngleSum() {
        return 6 * 120;
    }

    void display() {
        double area = calcArea();
        double perimeter = calcPeri();
        double sumOfAngles = calcAngleSum();
        cout << "Hexagon - Area: " << area << ", Perimeter: " << perimeter
                  << ", Sum of Angles: " << sumOfAngles << endl;
    }
};

class Square {
private:
    double sideLength;

public:
    Square(double side) : sideLength(side) {}

    double calcAreaSquare() {
        return sideLength * sideLength;
    }

    double calcPeriSquare() {
        return 4 * sideLength;
    }

    void display() {
        double area = calcAreaSquare();
        double perimeter = calcPeriSquare();
        cout << "Square - Area: " << area << ", Perimeter: " << perimeter << endl;
    }
};

int main() {
    // Use the last digit of your own CNIC as instructed
    int cnicLastDigit ;
	cin >> cnicLastDigit;  // Replace this with your actual last CNIC digit
    Hexagon hexagon(cnicLastDigit);
    Square square(cnicLastDigit + 1);

    while (true) {
        cout << "1. Hexagon\n2. Square\n3. Exit\nEnter your choice: ";
        int userInput;
        cin >> userInput;

        if (userInput == 1) {
            hexagon.display();
        } else if (userInput == 2) {
            square.display();
        } else if (userInput == 3) {
            break;
        }
    }

    return 0;
}
