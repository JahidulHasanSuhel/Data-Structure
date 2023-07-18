#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
system("cls");
    string str = "suhel";
    stack<char> s;
    for(int i = 0; i<str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"ans is:"<<ans<<endl;
    return 0;
}
