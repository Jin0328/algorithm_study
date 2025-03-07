#include <iostream>
#include <vector>
#include <set>

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
        for(int j = i * 2; j <= max; j += i){
            if(!is_prime[j]) continue;
            is_prime[j] = false;
        }
    }
    return primes;
}

// 상근수인지 확인
bool isNum(int num){
    set<int> seen;
    while(num != 1 && seen.find(num) == seen.end()){
        int sum = 0;
        seen.insert(num);
        while(num > 0){
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }
    return num == 1;
}

// 소수 중에 상근수 찾기
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