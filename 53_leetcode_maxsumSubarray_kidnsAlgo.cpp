#include<bits/stdc++.h>
using namespace std;
/// using kidn's algorithm for solving this problem and its take 
/// time = O(n);
// space  = O(n);
class Solution
{
public:
    int maxSubArray(vector<int>& nums){
        int maxsum = INT_MIN;
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            ans+=nums[i];
            maxsum = max(maxsum, ans);
            if(ans<0) ans = 0;
        }
    }
};

int main(){
    vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4};
    Solution so;
    cout<<so.maxSubArray(nums)<<endl;;

}
