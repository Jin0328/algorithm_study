#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> line(n);
    long long result = 0;

    
    for(int i = 0; i < n; i++){
        cin >> line[i];
    }

    sort(line.begin(), line.end(), greater<int>());

    for(int i = 0; i < n; i++){
        if((line[i] - i) > 0){
            result += (line[i] - i);
        }
    }

    cout << result << "\n";
    return 0;
}