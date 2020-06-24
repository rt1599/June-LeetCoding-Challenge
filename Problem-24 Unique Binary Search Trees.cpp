/* Day 24 June LeetCode Challenge

   Problem 24
   Unique Binary Search Trees
   
   Given n, how many structurally unique BST's (binary search trees) that store values 1 ... n?

   Example:
   Input: 3
   Output: 5
   
   Explanation:
   Given n = 3, there are a total of 5 unique BST's:

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
   
*/

int numTrees(int n) 
{
    vector<long long > c(n+1, 0);
    c[0] = c[1] = 1;
    
    for(int i=2; i<=n; i++)
        c[i]=(((2*i)*(2*i-1)*c[i-1])/((i+1)*(i)));
        
    return c[n];
}


