#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 1;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<=i; j++){
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}