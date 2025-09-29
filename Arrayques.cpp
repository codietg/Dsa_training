#include <bits/stdc++.h>
using namespace std;

int main() {
    int count=0;
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
   
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        // count=0;
        for(int j=0;j<n;j++){
            if(a[j]>b[i]){
                count++;
            }
        }
        
        cout<<count<<" ";
        count=0;
    }

}



#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
        if(arr[i]+arr[j]==k){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}



#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
	    for(int j=i;j<n;j++){
	        if(arr[j]>arr[i]){
	            cout<<arr[j]<<" ";

	            break;
	        }
	        if(j==n-1)
	        cout<<0<<" ";
	        
	    }
	
    }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,lar=0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=1;i<n;i++)
    lar=max(arr[i],arr[i-1]);
    cout<<lar<<endl;
    return 0;
}