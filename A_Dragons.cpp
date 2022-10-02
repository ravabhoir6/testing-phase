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

// int main(){
//     int s, n;
//     cin >> s;
//     cin >> n;
//     for(int i=1; i<=n;i++){
//         int dragS, bonus;
//         cin >> dragS;
//         cin >> bonus;
//         if(s < dragS){
//             cout << "NO";
//             return 0;
//         }
//         if(s > dragS){
//             s = s + bonus;
//         }
//     }
//     cout << "YES";
// }

// Consider the admission scenario of VIT. Now when any new admission appears,
// the admission department will ask for few basic information about the student like name,
// DOB, 12th /Diploma Board/University, then aggregate percentile of CET. Also, 
// admission department will check if the CET score is greater than or equal to desired or not. 
// After that the final question will be asked about the desired Branch. Accept the branch from user 
// and count the total number of admissions done for that day. The solution given in C++ using the 
// concept of inheritance and control flow is recommended. 

class studentInfo{
    private:
     string name, college, branch;
     float cetMarks;

    public:
        void info(){
            cout<<"Enter Name: ";
            cin>>name;
            cout<<endl<<"Enter 12th/Diploma college name: ";
            cin>>college;
            cout<<endl<<"Enter your CET marks: ";
            cin>>cetMarks;
        } 
        void display(){
            cout << "your given information is" << endl;
            cout << "Name: " << name << endl;
            cout << "college name: " << college << endl;
            cout << "CET marks: " << cetMarks << endl;
        }
        void admit(){
            int count = 0;
            float dmarks = 85.00;
            if(cetMarks > dmarks){
                cout<<"congratulations, you have got the admission, please enter the branch you want: ";
                cin >> branch; 
                count++;
                cout <<endl<< "total no of admissions done today: "<< count;
            }else{
                cout<<"We are really sorry to inform you that your marks are lower than the desired marks!";
            }
        }
};
int main(){
    int i=2;
    studentInfo std;
    do{
        std.info();
        std.display();
        std.admit();
    }while(i<5);
    return 0;
}