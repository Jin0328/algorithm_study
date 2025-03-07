#include <iostream>
#include <vector>

using namespace std;

int isPrimeCount(int n, vector<bool> &is_prime, int k)
{   
    int count = 0;
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i <= n; i++){
        if(!is_prime[i]){
            continue;
        }

        for(int j = i; j <= n; j += i){
            if(!is_prime[j]){
                continue;
            }
            is_prime[j] = false;
            count++;
            if(count == k){
                return j;
            } 
        }
    }
}

int main(){
    int n, k;
    cin >> n >> k;

    vector<bool> is_prime(n+1, true);
    cout << isPrimeCount(n, is_prime, k);
    return 0;
}