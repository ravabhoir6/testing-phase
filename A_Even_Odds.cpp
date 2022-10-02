/*
        Being a nonconformist, Volodya is displeased with the current state of things, particularly with the 
        order of natural numbers (natural number is positive integer number). He is determined to rearrange them. 
        But there are too many natural numbers, so Volodya decided to start with the first n. He writes down the 
        following sequence of numbers: firstly all odd integers from 1 to n (in ascending order), then all even 
        integers from 1 to n (also in ascending order). Help our hero to find out which number will stand at the 
        position number k.

     Input:
        The only line of input contains integers n and k (1 ≤ k ≤ n ≤ 1012).

        Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to use the cin, 
        cout streams or the %I64d specifier.

     Output:
        Print the number that will stand at the position number k after Volodya's manipulations.
*/
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

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}
/* Time limit exceeded 😅
int main(){
    long long n,m;
    cin>>n;
    cin>>m;
    vector <int> arr;
   
   for(int i=1; i<=n;i++){
     if(i % 2 != 0){
         arr.push_back(i);
     }
   }
   for(int i=1; i<=n;i++){
     if(i % 2 == 0){
         arr.push_back(i);
     }
   }
  cout << arr.at(m-1);
}
*/