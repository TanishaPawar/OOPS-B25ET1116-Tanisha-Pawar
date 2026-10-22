// Write a cpp program to add all the even numbers in the range 1 to 50.
// Write a cpp program to add all the odd numbers in the range 1 to 50.
#include <iostream>
using namespace std;

int main() {
    int sum_even=0;
    int sum_odd=0;
    for(int i=0; i<=50; i++){
        if(i%2==0){
            sum_even += i;
        }
    }
    cout << "Sum of all Even Numbers in the range of 1 to 50: " << sum_even << endl;
   
    for(int i=0; i<=50; i++){
        if(i%2==1){
            sum_odd += i;
        }
    }
    cout << "Sum of all Odd Numbers in the range of 1 to 50: " << sum_odd << endl;
   
    return 0;
}
