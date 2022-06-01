11 | Medium |  Container With Most Water | Array

You are given an integer array height of length n. There are n vertical lines drawn such that 
the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that 
the container contains the most water.

Return the maximum amount of water a container can store.
Notice that you may not slant the container.

Constraints:
n == height.length
2 <= n <= 10^5
0 <= height[i] <= 10^4


int maxArea(vector<int>& height) {
    int N = height.size(), result = 0;
    int i=0, j=N-1;
    while(i<j) {
        int ht = min(height[i], height[j]);
        result = max(ht*(j-i), result);
        (height[i] > height[j]) ? j-- : i++;
    }
    return result;
}