#include <iostream>
#include <map>
#include <vector>

using namespace std;

int overtake(int n, vector<int> &car_out){
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(car_out[i] > car_out[j]){
                ans++;
                break;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    map<string, int> car_in;
    vector<int> car_out;
    string input;
    for(int i = 0; i < n; i++){
        cin >> input;
        car_in[input] = i;
    }

    for(int i = 0; i < n; i++){
        cin >> input;
        car_out.push_back(car_in[input]);
    }
    cout << overtake(n, car_out) << '\n';
    return 0;
}