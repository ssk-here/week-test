# Count Complete Tree Nodes

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/count-complete-tree-nodes

## Content

<p>Given the <code>root</code> of a <strong>complete</strong> binary tree, return the number of the nodes in the tree.</p>

<p>According to <strong><a href="http://en.wikipedia.org/wiki/Binary_tree#Types_of_binary_trees" target="_blank">Wikipedia</a></strong>, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between <code>1</code> and <code>2<sup>h</sup></code> nodes inclusive at the last level <code>h</code>.</p>

<p>Design an algorithm that runs in less than&nbsp;<code data-stringify-type="code">O(n)</code>&nbsp;time complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/14/complete.jpg" style="width: 372px; height: 302px;" />
<pre>
<strong>Input:</strong> root = [1,2,3,4,5,6]
<strong>Output:</strong> 6
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> root = []
<strong>Output:</strong> 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> root = [1]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[0, 5 * 10<sup>4</sup>]</code>.</li>
	<li><code>0 &lt;= Node.val &lt;= 5 * 10<sup>4</sup></code></li>
	<li>The tree is guaranteed to be <strong>complete</strong>.</li>
</ul>


## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
