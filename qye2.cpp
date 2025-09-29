#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,sal;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        for(int j=0;j<m;j++){
            cin>>sal;
            sum= sum + sal;
        }
        cout<<sum<<endl;
        sum=0;
    }
    
}
