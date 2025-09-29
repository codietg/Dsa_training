// int value= mat[row_no][col_no];
// mat[row_no].insert(mat[row_no].begin() + idx, val);
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,m;
	cin>>n>>m;
	vector<vector<int>> mat(n, vector<int>(m));
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        cin>>mat[i][j];
	    }
	}
	for(int i=0;i<n;i++){
	    int max=INT_MIN;
	    int min=INT_MAX;
	    int sum=0;
	    for(int j=0;j<m;j++){
	        if(mat[i][j]>max)
	        max=mat[i][j];
	        if(mat[i][j]<min)
	        min=mat[i][j];
	        sum+=mat[i][j];
	    }
	    cout<<sum<<" "<<max<<" "<<min<<endl;
	}

}




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
 	cin>>n>>m;
 	vector<vector<int>> mat(n, vector<int>(m));
 	for(int i=0;i<n;i++){
 	    for(int j=0;j<m;j++){
 	        cin>>mat[i][j];
 	    }
 	}
 	for(int i=1;i<n-2;i++){
 	    for(int j=1;j<m-2;j++){
 	        cout<<mat[i][j]<<" ";
 	    }
 	    cout<<endl;
 	}
}




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
 	cin>>n>>m>>k;
 	vector<vector<int>> mat(n, vector<int>(m));
 	for(int i=0;i<n;i++){
 	    for(int j=0;j<m;j++){
 	        cin>>mat[i][j];
 	    }
 	}
 	for(int i=0;i<n/2;i++){
 	    for(int j=0;j<k;j++){
 	        swap(mat[n-i-1][j],mat[i][m-k+j]);
 	    }
 	}
 	for(int i=0;i<n;i++){
 	    for(int j=0;j<m;j++){
 	        cout<<mat[i][j]<<" ";
 	    }
 	    cout<<endl;
 	}
}