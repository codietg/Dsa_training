#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    string s;
    cin >> s;

    string result;
    bool reverseN= false;
    for (int i = 0; i < N; i += K) {
        string temp = s.substr(i, K);
        if(reverseN){
        reverse(temp.begin(), temp.end());
        }
        result += temp;
        reverseN= !reverseN;
    }
    cout << result << endl;
    return 0;
}

// 

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);

    string reversed = string(s.rbegin(), s.rend());

    if (s == reversed)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
    
    

}
