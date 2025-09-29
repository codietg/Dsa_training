#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-- != 0){
        int n;
        cin>>n;
        string type;
        cin>>type;
        if(type == "INT"){
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            int sum=accumulate(arr,arr+n,0);
            cout<<sum<<endl;
        }
        else if(type == "STRING"){
            string arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            int len=arr[0].length();
            for(int i=0;i<n;i++){
                if(arr[i].length() > len){
                    len=arr[i].length();
                }
            }
            cout<<len<<endl;
        }
        else{
            cout<<"Invalid Input";
        }
    }
}
