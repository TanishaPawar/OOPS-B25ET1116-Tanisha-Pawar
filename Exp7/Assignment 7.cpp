
#include <iostream>
#include <cstring>
using namespace std;

class student{
    char *name;
    int rollno;
    int marks;

    public:

    // Default Constructor
    student(){
        name = new char[1];
        name[0] = '\0';
        rollno = 0;
        marks = 0;
    }

    // Parameterized Constructor
    student(int m, int n){
        name = new char[1];
        name[0] = '\0';
        rollno = m;
        marks = n;
    }

    // Copy Constructor
    student(const student &c){
        name = new char[strlen(c.name) + 1];
        strcpy(name, c.name);
        rollno = c.rollno;
        marks = c.marks;
    }

    // Destructor
    ~student(){
        delete[] name;
    }

    void accept(){
        char temp[50];

        cout << "Name: ";
        cin >> temp;

        delete[] name;

        name = new char[strlen(temp) + 1];
        strcpy(name, temp);

        cout << "Roll Number: ";
        cin >> rollno;

        cout << "Marks: ";
        cin >> marks;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    student s[2];

    s[0].accept();
    s[1].accept();

    cout << endl << "Student 1 Details:" << endl;
    s[0].display();

    cout << endl << "Student 2 Details:" << endl;
    s[1].display();

    return 0;
}
