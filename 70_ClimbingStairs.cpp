#include <iostream>
using namespace std;
int climb(int i , int n){
    if (i > n) return 0;
    else if (i == n) return 1;
    else return climb(i+1,n) +climb(i+2,n);
}
int climbStairs_bruteforce(int n) {
    return climb(0, n);    
}

int climbStairs_DP(int n){
    if (n==1) return 1;
    int* dp = new int[n+1];
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <=n; i++){
        dp[i]= dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    cout << climbStairs_bruteforce(10) << endl;
    cout << climbStairs_DP(10) << endl;
    return 0;
}