#include <iostream>
#include<vector>
using namespace std;
int trap(vector<int>& height) {
        int res = 0;
        int n = height.size();
        vector<int> dp(n, 0);
        int mx = 0;
        for(int i = 0; i < n; i++){
            dp[i] = mx;
            mx = max(mx, height[i]);
        }
        mx = 0;
        for(int i = n-1; i>=0; i--){
            dp[i] = min(mx,dp[i]);
            mx = max(height[i], mx);
            if(dp[i] > height[i]){
                res += dp[i] - height[i];
            }
        }
        return res;
}
int main(){
    int a[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> height(a,a+12);
    cout << trap(height) << endl;
    return 0;
}