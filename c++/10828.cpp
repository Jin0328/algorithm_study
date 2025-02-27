#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, number;
    string cmd;
    cin >> n;

    stack<int> s;
    while(n--){
        cin >> cmd;
        if(cmd == "push"){
            cin >> number;
            s.push(number);
        }
        else if(cmd == "pop"){
            if(s.empty()){
                cout << "-1\n";
            }
            else{
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if(cmd == "size"){
            cout << s.size() << "\n";
        }
        else if(cmd == "empty"){
            if(s.empty()){
                cout << "1\n";
            } else cout << "0\n";
        }
        else{
            if(s.empty()){
                cout << "-1\n";
            }
            else cout << s.top() << "\n";
        }
    }
    return 0;
}