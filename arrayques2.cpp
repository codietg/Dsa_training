#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
  for(int i=0;i<n;i++){
    cin>>arr1[i];
    cin>>arr2[i];
    cin>>arr3[i];
  }
    int arrmax1= *max_element(arr1,arr1+n);
    int arrmax2= *max_element(arr2,arr2+n);
    int arrmax3= *max_element(arr3, arr3+n);
    cout<<arrmax1<<endl;
    cout<<arrmax2<<endl;
    cout<<arrmax3<<endl;
     int arrmin1= *min_element(arr1,arr1+n);
    int arrmin2= *min_element(arr2,arr2+n);
    int arrmin3= *min_element(arr3, arr3+n);
    cout<<arrmin1<<endl;
    cout<<arrmin2<<endl;
    cout<<arrmin3<<endl;
}