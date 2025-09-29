// cin.ignore();
// getline(cin,s1);

// getline(cin,s2);
#include <bits/stdc++.h>
using namespace std;

int main(){
   string s1, s2;
    getline(cin, s1);  

    for (int i = 0; i < s1.length(); ++i) {
        s2 += s1[i];
        if ((i + 1) % 2 == 0) {
            s2 += '#';
        }
    }
    cout<<s2<<endl;
    return 0;
}




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s1,s2;
	int n;
	getline(cin,s1);
	getline(cin,s2);
	cin>>n;
	string result;
	int count=0;
	for(int i=0;i<s1.size();i++){
	    result += s1[i];
	    count++;
	    if(count==n && i!=s1.size()-1)
	    {
	        result+=s2;
	        count=0;
	    }
	}
	cout<<result<<endl;
	
}



// to get the ascii value fo str character is

// int(s[i]) OR static_cast <int>(s[i]) 


#include <bits/stdc++.h>
using namespace std;

int main() {
    int K,N,M;
    cin>>K>>N>>M;
    string s;
    cin.ignore();
    getline(cin,s);
    int res=0;
	
	for(char c : s){
	    if(int(c)>=N && int(c)<=M){
	        res++;
	    }
	    
	}
	cout<<res<<endl;

}




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();
    string s1;
    getline(cin,s1);
    
    char max= s1[0];
    for(int i=0;i<s1.length();i++){
        if(s1[i]>max){
            max= s1[i];
        }
    }
    cout<<max ;
    cout<<int(max)<<endl;
}


// slicing
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    string s;
    cin.ignore();
    getline(cin,s);
    string res;
    for(int i=0;i<n;i++){
        res= s.substr(m,5);
    }
    cout<<res<<endl;
    return 0;
    
}

