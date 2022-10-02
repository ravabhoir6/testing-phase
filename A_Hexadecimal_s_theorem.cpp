/*

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

typedef unsigned long long int64;
#define N 48
 
int64 fib[N];
int nFib;
 
int64 generate() {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < N; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];
    return fib[N - 1];
}
 
int main(void) {
    generate();
    int64 n;
    cin >> n;
    if(n == 3){
        cout << 1 << " " << 1 << " " << 1;
        return 0;
    } 
    int64 * p = upper_bound(fib, fib + N, n) - 1;
    if (p - 4 >= fib)
        cout << *(p - 4) << " " << *(p - 3) << " " << *(p - 1) << endl;
    else
        cout << "0 0 " << *p << endl;
    return EXIT_SUCCESS;
}