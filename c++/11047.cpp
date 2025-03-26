#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    int count = 0;
    cin >> n >> k;

    vector<int> coin(n, 0);
    for(int i = 0; i < n; i++){
        cin >> coin[i];
    }

    while(n--){
        count += k / coin[n];
        k %= coin[n];
    }

    cout << count;
    return 0;
}