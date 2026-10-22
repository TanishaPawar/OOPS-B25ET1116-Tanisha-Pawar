#include <iostream>
using namespace std;

long int fact(int p) {
    int res = 1;
    for (int i = p; i >= 1; i--) {
        res = res * i;
    }
    return res;
}

long int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

void printPascal(int l){
    for(int i=0; i<l; i++){
        for(int j=0; j<=i; j++){
            cout << "\t" << nCr(i,j);
        }
    cout << endl;
    }
}

int main() {
    int n;
    int r;

    cout << "Enter Number: ";
    cin >> n;
    cout << "Enter Rows: ";
    cin >> r;
    cout << "Factorial of " << n << " is: " << fact(n) << endl;
   
    int combination = nCr(n, r); // n >= r
    cout << "The combination value C(" << n << ", " << r << ") is: " << combination << endl;
   
    cout << "Pascal's Triangle: " << endl;
    printPascal(r);
   
    return 0;
}
