#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "Enter two values: ";
    cin >> a >> b;
    try
    {
        if(b == 0)
        throw b;
        int c = a / b;
        cout << "The Div: " << c;
    }
    catch(int x)
    {
        cout << "\nDivision by zero not permitted. \n";
        cout << "The error is: " << x;
    }

    int c = a / b;
    cout << "Result Value: " << c;
    
    return 0;
}
