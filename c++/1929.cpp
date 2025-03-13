#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> isPrime(int n){
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for(int i = 2; i <= sqrt(n); i++){
        if(!is_prime[i]) continue;
        for(int j = i * 2; j <= n; j += i){
            is_prime[j] = false;
        }
    }
    return is_prime;
}

void getPrime(int m, int n, vector<bool> &is_prime){
    for(int i = m; i <= n; i++){
        if(is_prime[i]){
            cout << i << "\n";
        }
    }
}

int main(){
    int m, n;
    cin >> m >> n;

    vector<bool> is_prime = isPrime(n);
    getPrime(m, n, is_prime);
    return 0;
}