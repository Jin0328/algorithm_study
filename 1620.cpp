#include <iostream>
#include <map>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    string input;
    map<string, int> number;
    map<int, string> name;
    
    for(int i = 1; i <= n; i++){
        cin >> input;
        number[input] = i;
        name[i] = input;
    }

    string s;
    while(m--){
        cin >> s;
        if(isdigit(s[0])){
            cout << name[stoi(s)] << '\n';
        } else cout << number[s] << '\n';
    }
    return 0;
}