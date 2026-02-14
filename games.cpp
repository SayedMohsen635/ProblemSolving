#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    int result = 0;
    cin >> n;
    vector<int> home(n);
    vector<int> guest(n);
    unordered_map<int, int> guest_count;

    for(int i = 0; i < n; i++){
        cin >> home[i] >> guest[i];
        guest_count[guest[i]]++;
    }

    for(int i = 0; i < n; i++){
        result += guest_count[home[i]];
    }

    cout << result;

    return 0;
}
