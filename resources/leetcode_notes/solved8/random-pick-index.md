# Random Pick Index

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/random-pick-index

## Content

<p>Given an integer array <code>nums</code> with possible <strong>duplicates</strong>, randomly output the index of a given <code>target</code> number. You can assume that the given target number must exist in the array.</p>

<p>Implement the <code>Solution</code> class:</p>

<ul>
	<li><code>Solution(int[] nums)</code> Initializes the object with the array <code>nums</code>.</li>
	<li><code>int pick(int target)</code> Picks a random index <code>i</code> from <code>nums</code> where <code>nums[i] == target</code>. If there are multiple valid i&#39;s, then each index should have an equal probability of returning.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input</strong>
[&quot;Solution&quot;, &quot;pick&quot;, &quot;pick&quot;, &quot;pick&quot;]
[[[1, 2, 3, 3, 3]], [3], [1], [3]]
<strong>Output</strong>
[null, 4, 0, 2]

<strong>Explanation</strong>
Solution solution = new Solution([1, 2, 3, 3, 3]);
solution.pick(3); // It should return either index 2, 3, or 4 randomly. Each index should have equal probability of returning.
solution.pick(1); // It should return 0. Since in the array only nums[0] is equal to 1.
solution.pick(3); // It should return either index 2, 3, or 4 randomly. Each index should have equal probability of returning.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>target</code> is an integer from <code>nums</code>.</li>
	<li>At most <code>10<sup>4</sup></code> calls will be made to <code>pick</code>.</li>
</ul>


## C++ Code

```cpp
class Solution {
public:
    Solution(vector<int>& nums) {
        
    }
    
    int pick(int target) {
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
