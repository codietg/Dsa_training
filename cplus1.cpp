// WAP to read your name and concat with "a student"
#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    string res = name + " " + " a student";
    cout<<res<<endl;

}




// 2 WAP a prog to read an integer and add 2 and print
# include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int res = num + 2;
    cout<<res<<endl;
}

// WAP to read name age and roll no and print it in a single line seorated by space
# include<iostream>
using namespace std;
int main(){

    string name;
    int age;
    int rollno;
    cin>>name>>age>>rollno;
    cout<< name << " "<<age<<" "<<rollno<<endl;

}

// WAP TO READ THree space seprated integers and calculate the avg of first two integers and chek whether this avg
// is greater than 3rd interger if it is true print yes other print no
# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int avg= (a+b)/2;
    cout<<"the avg is"<<avg<<endl;
    if(avg<c){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }


}

// ans 
# include<iostream>
using namespace std;
int main(){
    int num;
    int N, y;
    cin>>N>>Y;
    int bill= N*Y;
    cin>>num;
     if(99999>bill>10000){
            cout<<"bill is a valid phone number"<<endl;
        }
     else{
        cout<<"not valid"<<endl;
     }

}





// string ques
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len= s.length();
    cout<<"length is "<<len<<endl;
    if(s.find('&')!= std::string::npos && s.find('#')!= std::string::npos && len%2==0){
        cout<<"both conditions are true"<<endl;
       }
    else{
        cout<<"not true"<<endl;
    }
}