----

# Subsets II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/subsets-ii

## Content

<p>Given an integer array <code>nums</code> that may contain duplicates, return <em>all possible</em> <span data-keyword="subset"><em>subsets</em></span><em> (the power set)</em>.</p>

<p>The solution set <strong>must not</strong> contain duplicate subsets. Return the solution in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
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
----

# Decode Ways

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/decode-ways

## Content

<p>You have intercepted a secret message encoded as a string of numbers. The message is <strong>decoded</strong> via the following mapping:</p>

<p><code>&quot;1&quot; -&gt; &#39;A&#39;<br />
&quot;2&quot; -&gt; &#39;B&#39;<br />
...<br />
&quot;25&quot; -&gt; &#39;Y&#39;<br />
&quot;26&quot; -&gt; &#39;Z&#39;</code></p>

<p>However, while decoding the message, you realize that there are many different ways you can decode the message because some codes are contained in other codes (<code>&quot;2&quot;</code> and <code>&quot;5&quot;</code> vs <code>&quot;25&quot;</code>).</p>

<p>For example, <code>&quot;11106&quot;</code> can be decoded into:</p>

<ul>
	<li><code>&quot;AAJF&quot;</code> with the grouping <code>(1, 1, 10, 6)</code></li>
	<li><code>&quot;KJF&quot;</code> with the grouping <code>(11, 10, 6)</code></li>
	<li>The grouping <code>(1, 11, 06)</code> is invalid because <code>&quot;06&quot;</code> is not a valid code (only <code>&quot;6&quot;</code> is valid).</li>
</ul>

<p>Note: there may be strings that are impossible to decode.<br />
<br />
Given a string s containing only digits, return the <strong>number of ways</strong> to <strong>decode</strong> it. If the entire string cannot be decoded in any valid way, return <code>0</code>.</p>

<p>The test cases are generated so that the answer fits in a <strong>32-bit</strong> integer.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numDecodings(string s) {
        
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
----

# Reverse Linked List II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/reverse-linked-list-ii

## Content

<p>Given the <code>head</code> of a singly linked list and two integers <code>left</code> and <code>right</code> where <code>left &lt;= right</code>, reverse the nodes of the list from position <code>left</code> to position <code>right</code>, and return <em>the reversed list</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
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
----

# Unique Binary Search Trees II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/unique-binary-search-trees-ii

## Content

<p>Given an integer <code>n</code>, return <em>all the structurally unique <strong>BST&#39;</strong>s (binary search trees), which has exactly </em><code>n</code><em> nodes of unique values from</em> <code>1</code> <em>to</em> <code>n</code>. Return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

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
    vector<TreeNode*> generateTrees(int n) {
        
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
----

# Unique Binary Search Trees

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/unique-binary-search-trees

## Content

<p>Given an integer <code>n</code>, return <em>the number of structurally unique <strong>BST&#39;</strong>s (binary search trees) which has exactly </em><code>n</code><em> nodes of unique values from</em> <code>1</code> <em>to</em> <code>n</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numTrees(int n) {
        
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
----

# Validate Binary Search Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/validate-binary-search-tree

## Content

<p>Given the <code>root</code> of a binary tree, <em>determine if it is a valid binary search tree (BST)</em>.</p>

<p>A <strong>valid BST</strong> is defined as follows:</p>

<ul>
	<li>The left <span data-keyword="subtree">subtree</span> of a node contains only nodes with keys <strong>less than</strong> the node&#39;s key.</li>
	<li>The right subtree of a node contains only nodes with keys <strong>greater than</strong> the node&#39;s key.</li>
	<li>Both the left and right subtrees must also be binary search trees.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

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
    bool isValidBST(TreeNode* root) {
        
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
----

# Recover Binary Search Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/recover-binary-search-tree

## Content

<p>You are given the <code>root</code> of a binary search tree (BST), where the values of <strong>exactly</strong> two nodes of the tree were swapped by mistake. <em>Recover the tree without changing its structure</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

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
    void recoverTree(TreeNode* root) {
        
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
----

# Binary Tree Level Order Traversal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/binary-tree-level-order-traversal

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the level order traversal of its nodes&#39; values</em>. (i.e., from left to right, level by level).</p>

<p>&nbsp;</p>
<p><strong class="example">

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
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
----

# Binary Tree Zigzag Level Order Traversal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the zigzag level order traversal of its nodes&#39; values</em>. (i.e., from left to right, then right to left for the next level and alternate between).</p>

<p>&nbsp;</p>
<p><strong class="example">

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
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
----

# Construct Binary Tree from Preorder and Inorder Traversal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal

## Content

<p>Given two integer arrays <code>preorder</code> and <code>inorder</code> where <code>preorder</code> is the preorder traversal of a binary tree and <code>inorder</code> is the inorder traversal of the same tree, construct and return <em>the binary tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
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
----

# Construct Binary Tree from Inorder and Postorder Traversal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal

## Content

<p>Given two integer arrays <code>inorder</code> and <code>postorder</code> where <code>inorder</code> is the inorder traversal of a binary tree and <code>postorder</code> is the postorder traversal of the same tree, construct and return <em>the binary tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
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
----

# Binary Tree Level Order Traversal II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/binary-tree-level-order-traversal-ii

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the bottom-up level order traversal of its nodes&#39; values</em>. (i.e., from left to right, level by level from leaf to root).</p>

<p>&nbsp;</p>
<p><strong class="example">

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
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
----

# Convert Sorted List to Binary Search Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree

## Content

<p>Given the <code>head</code> of a singly linked list where elements are sorted in <strong>ascending order</strong>, convert <em>it to a </em><span data-keyword="height-balanced"><strong><em>height-balanced</em></strong></span> <em>binary search tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        
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
----

# Path Sum II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/path-sum-ii

## Content

<p>Given the <code>root</code> of a binary tree and an integer <code>targetSum</code>, return <em>all <strong>root-to-leaf</strong> paths where the sum of the node values in the path equals </em><code>targetSum</code><em>. Each path should be returned as a list of the node <strong>values</strong>, not node references</em>.</p>

<p>A <strong>root-to-leaf</strong> path is a path starting from the root and ending at any leaf node. A <strong>leaf</strong> is a node with no children.</p>

<p>&nbsp;</p>
<p><strong class="example">

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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
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
----

# Flatten Binary Tree to Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/flatten-binary-tree-to-linked-list

## Content

<p>Given the <code>root</code> of a binary tree, flatten the tree into a &quot;linked list&quot;:</p>

<ul>
	<li>The &quot;linked list&quot; should use the same <code>TreeNode</code> class where the <code>right</code> child pointer points to the next node in the list and the <code>left</code> child pointer is always <code>null</code>.</li>
	<li>The &quot;linked list&quot; should be in the same order as a <a href="https://en.wikipedia.org/wiki/Tree_traversal#Pre-order,_NLR" target="_blank"><strong>pre-order</strong><strong> traversal</strong></a> of the binary tree.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

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
    void flatten(TreeNode* root) {
        
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
----

# Populating Next Right Pointers in Each Node

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/populating-next-right-pointers-in-each-node

## Content

<p>You are given a <strong>perfect binary tree</strong> where all leaves are on the same level, and every parent has two children. The binary tree has the following definition:</p>

<pre>
struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
</pre>

<p>Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to <code>NULL</code>.</p>

<p>Initially, all next pointers are set to <code>NULL</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
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
----

# Populating Next Right Pointers in Each Node II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii

## Content

<p>Given a binary tree</p>

<pre>
struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
</pre>

<p>Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to <code>NULL</code>.</p>

<p>Initially, all next pointers are set to <code>NULL</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
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
----

# Triangle

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/triangle

## Content

<p>Given a <code>triangle</code> array, return <em>the minimum path sum from top to bottom</em>.</p>

<p>For each step, you may move to an adjacent number of the row below. More formally, if you are on index <code>i</code> on the current row, you may move to either index <code>i</code> or index <code>i + 1</code> on the next row.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
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
----

# Best Time to Buy and Sell Stock II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii

## Content

<p>You are given an integer array <code>prices</code> where <code>prices[i]</code> is the price of a given stock on the <code>i<sup>th</sup></code> day.</p>

<p>On each day, you may decide to buy and/or sell the stock. You can only hold <strong>at most one</strong> share of the stock at any time. However, you can buy it then immediately sell it on the <strong>same day</strong>.</p>

<p>Find and return <em>the <strong>maximum</strong> profit you can achieve</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
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
----

# Longest Consecutive Sequence

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-consecutive-sequence

## Content

<p>Given an unsorted array of integers <code>nums</code>, return <em>the length of the longest consecutive elements sequence.</em></p>

<p>You must write an algorithm that runs in&nbsp;<code>O(n)</code>&nbsp;time.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
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
