#include <iostream>
#include <limits.h>
using namespace std;


int main() {
    int arr[] = {1,2,23,5,45,65,5,54,5454,45,54};
    int size = 11 ;

    int mini = INT_MAX;
    for (int i =0 ; i<=size; i++){
        if (arr[i] < mini){
            mini = arr[i];
        }
    }
     cout << "Minimum number in the array is " << mini << endl;  
}