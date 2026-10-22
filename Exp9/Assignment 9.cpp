#include <iostream>
using namespace std;

class shape {
    public:
    virtual void draw(){
        cout << "\nDrawing Shape! \n"; 
    }
};

class circle : public shape {
    public:
    void draw() {
        cout << "Drawing a Circle! \n"; 
    }
};

class rectangle : public shape {
    public:
    void draw() {
        cout << "Drawing a Rectangle! \n"; 
        cout << " ---------------------- "; 
        cout << "\n|                      |\n|                      |\n|                      |\n|                      |\n"; 
        cout << " ---------------------- "; 
    }
};

int main() 
{
    circle c1; shape s1; rectangle r1; 
    shape* str1 = &c1;
    shape* str2 = &r1;
    str1->draw();
    str2->draw();  
    s1.draw(); 
    c1.draw(); 
    r1.draw(); 

    return 0;
}
