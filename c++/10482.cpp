#include <iostream>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

vector<bool> getPrimes(int n){
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(!is_prime[i]) continue;
        for(int j = i * i; j <= n; j += i){
            is_prime[j] = false;
        }
    }
    return is_prime;
}

set<int> getGoldbach(int n, vector<bool> &is_prime){
    set<int> gold_num;
    for(int i = 2; i <= n/2; i++){
        if(is_prime[i] && is_prime[n - i]){
            gold_num.insert(i);
        }
    }
    return gold_num;
}

int main(){
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        vector<bool> is_prime = getPrimes(x);
        int size = getGoldbach(x, is_prime).size();

        cout << x << " has " << size <<" representation(s)\n";
        for(int iter : getGoldbach(x, is_prime)){
            cout << iter << "+" << x - iter << "\n";
        }
        cout << "\n";
    }
    return 0;
}