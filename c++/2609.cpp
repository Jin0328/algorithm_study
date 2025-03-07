#include <iostream>
#include <numeric>

using namespace std;

int getGcd(int a, int b){
    int temp;
    while(b > 0){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int a, b;

    cin >> a >> b;

    cout << getGcd(a, b) << "\n";
    cout << a * b / getGcd(a, b) << "\n";
    return 0;
}