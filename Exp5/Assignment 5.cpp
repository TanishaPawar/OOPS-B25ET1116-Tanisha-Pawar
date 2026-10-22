#include <iostream>
using namespace std;

int mul(int a, int b) {
    return a * b;
}

int mul(int a, float b) {
    return a * b;
}

float mul(float a, float b) {
    return a * b;
}

int main() {
    int i = 3, j = 6;
    float u = 2.5, v = 5.1;
   
    cout << "mul(int, int): " << mul(i, j) << endl;
    cout << "mul(float, float): " << mul(u, v) << endl;
    cout << "mul(int, float): " << mul(i, u) << endl;

    return 0;
}
