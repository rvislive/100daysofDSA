287. | Medium | Find the Duplicate Number | Array

Given an array of integers nums containing n + 1 integers
where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, 
return this repeated number.

You must solve the problem without modifying the array nums and uses 
only constant extra space.

Constraints:
1 <= n <= 10^5
nums.length == n + 1
1 <= nums[i] <= n

int findDuplicate(vector<int>& nums) {
    int N = nums.size(), l = 1, h = N-1, mid;
    
    while(l<h) {
        mid = (l+h)/2;
        int count = 0;
        
        for(int n:nums) {
            if(n<=mid) count++;
        }
        
        if(count <= mid) {
            l = mid+1;
        } else {
            h = mid;
        }
    }
    return l;
}
