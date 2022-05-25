1051 | Easy | Height Checker | Sorting

A school is trying to take an annual photo of all the students. 
The students are asked to stand in a single file line in 
non-decreasing order by height. 

Let this ordering be represented by the integer array expected 
where expected[i] is the expected height of the ith student in line.

You are given an integer array heights representing the current order 
that the students are standing in. Each heights[i] is the height of 
the ith student in line (0-indexed).

Return the number of indices where heights[i] != expected[i].

Constraints:
1 <= heights.length <= 100
1 <= heights[i] <= 100

int heightChecker(vector<int>& heights) {
    int N = heights.size();
    vector<int> exp(N);
    
    // * assign is importants.  
    exp.assign(heights.begin(), heights.end());
    sort(heights.begin(), heights.end());
    
    int count = 0;
    for(int i=0; i<N; i++) {
        if(heights[i] != exp[i]) count++;
    }
    return count;
}


