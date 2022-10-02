


#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
using namespace std;


// int main() 10 testcases passed
// {
//    string s;
//    int count=0;
//    cin>>s;
//    for(int i=0; i<s.length();i++){
//        if(s[i] == s[i+1]){
//            count++;
//        }
//    }
//    if(count >= 7){
//        cout << "YES";
//    }else{
//        cout  << "NO";
//    }
// }

int main(){
    string s1;
    cin>>s1;
    int condition = 1;
    for(int i=1; i<=s1.length(); i++){
        if(s1[i] == s1[i-1]){
            condition++;
            if(condition==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }else{
            condition=1;
        }
        
    }
    cout<<"NO"<<endl;
    return 0;
}
