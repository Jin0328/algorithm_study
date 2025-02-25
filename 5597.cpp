#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> num(28);
    vector<int> result;

    for(int i = 0; i < 28; i++){
        cin >> num[i];
    }

    for(int i = 1; i <= 30; i++){
        if(find(num.begin(), num.end(), i) == num.end()){
            result.push_back(i);
        }
    }

    sort(result.begin(), result.end());
    
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }
    return 0;
}