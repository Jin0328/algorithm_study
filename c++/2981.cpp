#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int getGcd(int a, int b){
    while(b != 0){
        a %= b;
        swap(a, b);
    }
    return a;
}

vector<int> getDifference(vector<int> &number){
    vector<int> diff;
    for(int i = 0; i < number.size() - 1; i++){
        int difference = number[i + 1] -  number[i];
        diff.push_back(difference);
    }

    return diff;
}

int getNum(vector<int> &number){
    sort(number.begin(), number.end());
    vector<int> diff = getDifference(number);
    int result = diff[0];
    for(int i = 1; i < diff.size(); i++){
        result = getGcd(result, diff[i]);
    }
    return result;
}

//약수 구하는 로직
set<int> getDivisor(int num){
    set<int> m;
    for(int i = 2; i  <= num; i++){
        if(num % i == 0){
            m.insert(i);
        }
    }
    return m;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;

    vector<int> number(n);

    for(int i = 0; i < n; i++){
        cin >> number[i];
    }

    int result = getNum(number);
    set<int> divisor = getDivisor(result);

    for(auto iter : divisor){
        cout << iter << "\n";
    }

}