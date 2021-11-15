# [1304. Find N Unique Integers Sum up to Zero](https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/)
<div><p>Given an integer <code>n</code>, return <strong>any</strong> array containing <code>n</code> <strong>unique</strong> integers such that they add up to <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 5
<strong>Output:</strong> [-7,-1,1,3,4]
<strong>Explanation:</strong> These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 3
<strong>Output:</strong> [-1,0,1]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> [0]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 1000</code></li>
</ul>
</div>

## Solution
```cpp
class Solution {
public:
    vector<int> sumZero(int n) { 
        vector<int> res;
        if(n == 0) return {};
        if(n%2 != 0) res.push_back(0);
        for(int i=1; i<=n/2; i++)
        {
            res.push_back(i);
            res.push_back(-i);
        }
        return res;   
    }
};
```