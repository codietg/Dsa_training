#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,k;
	cin>>N>>k;
	cin.ignore();
	string s;
	getline(cin,s);
	
	string res;
	res= s.substr(k) + s.substr(0,k);
	
	cout<<res<<endl;
	
	return 0;

}


// left rotation, s.substr(k) + s.substr(0,k);
// right rotation-> s.substr(n-k) + s.substr(0,n-k);\

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,k;
	cin>>N>>k;
	cin.ignore();
	string s;
	getline(cin,s);
	
	string res;
	string res1;
	k= abs(N-k);
	res= s.substr(k) + s.substr(0,k);
	res1= s.substr(abs(N-k)) + s.substr(0,abs(N-k));
	
	cout<<res<<endl;
	cout<<res1<<endl;
	
	return 0;

}





#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> rotations(N);
    vector<string> strings(N);

    for (int i = 0; i < N; ++i) {
        cin >> rotations[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> strings[i];
    }

    for (int i = 0; i < N; ++i) {
        string& s = strings[i];
        if (s.empty()) {
            cout << (i == N - 1 ? "" : ", ");
            continue;
        }

        int len = s.size();
        int k = ((rotations[i] % len) + len) % len;
        string res = s.substr(k) + s.substr(0, k);
        cout << res;
        if (i != N - 1) cout << ", ";
    }
    return 0;
}


