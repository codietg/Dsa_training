// sum of array by using accumulate funct 
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    int sum1, sum2;
    cin>>n;
    int arr[n];
    int sum1= accumulate(arr,arr+2,0);

}





#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
	{
	    cin>>arr[i];
	}
	cout<<arr[0]+arr[1]<<endl;
	cout<<arr[N-1]+arr[N-2];
}