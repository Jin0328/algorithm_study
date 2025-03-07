#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

// 소수 찾기
vector<int> getPrime(int max){
    vector<bool> is_prime(max + 1, true);
    vector<int> primes;

    for(int i = 2; i <= max; i++){
        if(!is_prime[i]){
            continue;
        }
        primes.push_back(i);
        for(int j = i * i; j <= max; j += i){
            if(!is_prime[j]) continue;
            is_prime[j] = false;
        }
    }

    return primes;
}

bool isNum(int n){
    set<int> num_check;

    while(n != 1 && num_check.find(n) == num_check.end()){
        num_check.insert(n);
        int sum = 0;

        while(n > 0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}

set<int> getNum(int n){
    vector<int> primes = getPrime(n);
    set<int> result;
    for(int iter : primes){
        if(isNum(iter)){
            result.insert(iter);
        }
    }
    return result;
}

int main(){
    int n;
    cin >> n;

    set<int> result = getNum(n);

    for(int iter : result){
        cout << iter << "\n";
    }
    return 0;
}