#include <iostream>
#include <deque>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, number;
    string cmd;
    cin >> n;

    deque<int> d;
    while(n--){
        cin >> cmd;
        if(cmd == "push_front"){
            cin >> number;
            d.push_front(number);
        }
        else if(cmd == "push_back"){
            cin >> number;
            d.push_back(number);
        }
        else if(cmd == "pop_front"){
            if(d.empty()){
                cout << "-1\n";
            }
            else{
                cout << d.front() << "\n";
                d.pop_front();
            }
        }
        else if(cmd == "pop_back"){
            if(d.empty()){
                cout << "-1\n";
            }
            else{
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if(cmd == "size"){
            cout << d.size() << "\n";
        }
        else if(cmd == "empty"){
            if(d.empty()){
                cout << "1\n";
            } else cout << "0\n";
        }
        else if(cmd == "front"){
            if(d.empty()){
                cout << "-1\n";
            }
            else cout << d.front() << "\n";
        }
        else{
            if(d.empty()){
                cout << "-1\n";
            }
            else cout << d.back() << "\n";
        }
    }
    return 0;
}