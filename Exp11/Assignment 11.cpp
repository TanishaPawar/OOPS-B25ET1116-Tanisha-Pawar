
#include <iostream>
using namespace std;

// Function templates
template <typename T>
T sum(T x, T y)
{
    return x + y;
}

template <typename T>
T difference(T x, T y)
{
    return x - y;
}

template <typename T>
T product(T x, T y)
{
    return x * y;
}

template <typename T>
T divide(T x, T y)
{
    return x / y;
}

// Class template
template <typename T>
class Calculator
{
    T value1, value2;

public:
    Calculator(T a, T b)
    {
        value1 = a;
        value2 = b;
    }

    void showResult()
    {
        cout << "Addition = " << sum(value1, value2) << endl;
        cout << "Subtraction = " << difference(value1, value2) << endl;
        cout << "Multiplication = " << product(value1, value2) << endl;

        if (value2 != 0)
            cout << "Division = " << divide(value1, value2) << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};

int main()
{
    // Function template demonstration
    cout << "Function Templates:" << endl;

    cout << "Addition = " << sum<float>(5.3f, 5.3f) << endl;
    cout << "Subtraction = " << difference<float>(5.2f, 4.1f) << endl;
    cout << "Multiplication = " << product<float>(5.0f, 2.0f) << endl;
    cout << "Division = " << divide<float>(10.0f, 2.0f) << endl;

    // Class template demonstration
    cout << "\nClass Templates - Integer Calculator:" << endl;

    Calculator<int> calc1(6, 5);
    calc1.showResult();

    cout << "\nClass Templates - Double Calculator:" << endl;

    Calculator<double> calc2(6.5, 5.2);
    calc2.showResult();

    return 0;
}
