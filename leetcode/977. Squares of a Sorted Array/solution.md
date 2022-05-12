# [977. Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/)

<div><p>Given an integer array <code>nums</code> sorted in <strong>non-decreasing</strong> order, return <em>an array of <strong>the squares of each number</strong> sorted in non-decreasing order</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [-4,-1,0,3,10]
<strong>Output:</strong> [0,1,9,16,100]
<strong>Explanation:</strong> After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [-7,-3,2,3,11]
<strong>Output:</strong> [4,9,9,49,121]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code><span>1 &lt;= nums.length &lt;= </span>10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>nums</code> is sorted in <strong>non-decreasing</strong> order.</li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Squaring each element and sorting the new array is very trivial, could you find an <code>O(n)</code> solution using a different approach?</div>

## Solution 1
```cpp
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    for(int i =0; i<nums.size(); i++)
       {
           nums[i] = nums[i] * nums[i];
       }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
```
## Solution 2
```cpp
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
        vector<int> ret(n);
        int left = 0, right = n-1, x;
        for(int i=n-1; i>=0; i--)
        {
            if(abs(nums[right])>abs(nums[left]))
                x = nums[right--];
                
            else 
                x = nums[left++];
            ret[i] = x*x;
        }
        return ret;
    }
};
```