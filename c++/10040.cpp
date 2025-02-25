#include <iostream>
#include <vector>

using namespace std;

void vote(vector<int> &a, vector<int> &b, vector<int> &result){
    for(int i = 0; i < b.size(); i++){
        for(int j = 0; j < a.size(); j++){
            if(a[j] <= b[i]){
                result[j]++;
                break;
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    vector<int> result(n, 0);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    
    vote(a, b, result);
    int max = 0;
    int number = 0;

    for(int i = 0; i < n; i++){
        if(result[i] > max){
            max = result[i];
            number = i + 1;
        }
    }
    cout << number;
}