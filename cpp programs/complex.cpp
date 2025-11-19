#include <iostream>
using namespace std;

class Complex {
    float real, img;

public:
    Complex(float real, float imaginary) {
        this->real = real;
        this->img = imaginary;
    }

    void input() {
        cout << "Enter real and img: ";
        cin >> real >> img;
    }

    void display() {
        cout << real << "+" << img<<"i"<< endl;
    }
    Complex opearor+(Complex c) {
        int t;
        t.real = real + c.real;
        t.img = img + c.img;
        return t;
    }

    Complex operator-(Complex c) {
        Complex t;
        t.real = real - c.real;
        t.img = img - c.img;
        return t;
    }
    
    Complex operator*(Complex c) {
        Complex t;
        t.real = (real * c.real) - (img * c.img);
        t.img = (real * c.img) + (img * c.real);
        return t;
    }

    Complex operator/(Complex c) {
        float denominator = (c.real * c.real) + (c.img * c.img);
        Complex t;
        t.real = ((real * c.real) + (img * c.img)) / denominator;
        t.img = ((img * c.real) - (real * c.img)) / denominator;
        return t;
    }
};

int main() {
    Complex c1, c2, c3;
    cout << "Enter the 1st complex number" << endl;
    c1.input();
    cout << "Enter the 2nd complex number" << endl;
    c2.input();

    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit" << endl;

    int ch;
    cout << "Enter your choice: ";
    cin >> ch;

    switch (ch) {
        case 1:
            c3 = c1 + c2; // Using overloaded +
            break;
        case 2:
            c3 = c1 - c2; // Using overloaded -
            break;
        case 3:
            c3 = c1 * c2; // Using overloaded *
            break;
        case 4:
            c3 = c1 / c2; // Using overloaded /
            break;
        case 5:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Wrong choice." << endl;
            return 1;
    }
    cout << "Result: ";
    c3.display();
    return 0;
}

