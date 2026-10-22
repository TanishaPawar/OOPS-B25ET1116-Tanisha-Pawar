#include <iostream>
using namespace std;

class complex{
    float real, img, sum;
    public:
    void accept(int a, int b){
        real = a;
        img = b;
        cout << "Enter Real and Imaginary parts: ";
        cin >> real >> img;
    }
    void display(){
        cout << real << "+i" << img;
    }
    complex operator+(complex c){
        complex sum;
        sum.real = real + c.real;
        sum.img = img + c.img;
        return sum;
    }
    complex operator-(complex c){
        complex diff;
        diff.real = real - c.real;
        diff.img = img - c.img;
        return diff;
    }
    complex operator*(complex c){
        complex prod;
        prod.real = real*c.real - img*c.img;
        prod.img = real*c.img + c.real*img;
        return prod;
    }
    complex operator/(complex c){
        complex quo;
        quo.real = (real*c.real + img*c.img)/(c.real*c.real + c.img*c.img);
        quo.img = (c.real*img - real*c.img)/(c.real*c.real + c.img*c.img);
        return quo;
    }
};
int main(){
    float a, b;
    complex c1, c2, c3;
    c1.accept(a, b);
    c2.accept(a, b);
   
    cout << endl << "First Imaginary Number: ";
    c1.display();
    cout << endl << "Second Imaginary Number: ";
    c2.display();
    cout << endl;
   
    c3 = c1 + c2;
    cout << endl << "Sum = ";
    c3.display();
   
    c3 = c1 - c2;
    cout << endl << "Difference = ";
    c3.display();
   
    c3 = c1 * c2;
    cout << endl << "Product = ";
    c3.display();
   
    c3 = c1 / c2;
    cout << endl << "Quotient = ";
    c3.display();
   
    return 0;
}
