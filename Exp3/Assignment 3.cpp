// Array Sorting
#include <iostream>
using namespace std;

void accept(int &m, int arr[]){
    cout << "Enter Size of Array: ";
    cin >> m;
    cout << "Enter Array Elements: " << endl;
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }
}

void display(int m, int ary[]){
    cout << "[ ";
    for(int i=0; i<m; i++){
        cout << ary[i] << " ";
    }
    cout << "]";
}
/*
Bubble Sort: comparison based algorithm which works by swapping two adjacent elements based on their values.
p = n-1; p = no. of passes
i = no of passes
j = number comparison counter
*/
void swap(int &m, int &n) {
    int temp = m;
    m = n;
    n = temp;
}
void sort(int s, int are[]){
    for(int i=0; i<s; i++) // i = No. of Passes
    {
        for(int j=0; j<(s-1); j++) // j = comparison of array elements
        {
            if (are[j] > are[j+1]){
                swap(are[j], are[j+1]);
            }
        }
    }
    cout << "[ ";
    for(int k=0; k<s; k++){
        cout << are[k] << " ";
    }
    cout << "]";
}

int main() {
    int size, ar[20];
    accept(size, ar);
    cout << "The Unsorted Array is: ";
    display(size, ar);
    cout << endl << "The Sorted Array is: ";
    sort(size, ar);
    return 0;
}
