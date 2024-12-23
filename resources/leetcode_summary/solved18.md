----

# Next Greater Element I

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/next-greater-element-i

## Content

<p>The <strong>next greater element</strong> of some element <code>x</code> in an array is the <strong>first greater</strong> element that is <strong>to the right</strong> of <code>x</code> in the same array.</p>

<p>You are given two <strong>distinct 0-indexed</strong> integer arrays <code>nums1</code> and <code>nums2</code>, where <code>nums1</code> is a subset of <code>nums2</code>.</p>

<p>For each <code>0 &lt;= i &lt; nums1.length</code>, find the index <code>j</code> such that <code>nums1[i] == nums2[j]</code> and determine the <strong>next greater element</strong> of <code>nums2[j]</code> in <code>nums2</code>. If there is no next greater element, then the answer for this query is <code>-1</code>.</p>

<p>Return <em>an array </em><code>ans</code><em> of length </em><code>nums1.length</code><em> such that </em><code>ans[i]</code><em> is the <strong>next greater element</strong> as described above.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
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

# Relative Ranks

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/relative-ranks

## Content

<p>You are given an integer array <code>score</code> of size <code>n</code>, where <code>score[i]</code> is the score of the <code>i<sup>th</sup></code> athlete in a competition. All the scores are guaranteed to be <strong>unique</strong>.</p>

<p>The athletes are <strong>placed</strong> based on their scores, where the <code>1<sup>st</sup></code> place athlete has the highest score, the <code>2<sup>nd</sup></code> place athlete has the <code>2<sup>nd</sup></code> highest score, and so on. The placement of each athlete determines their rank:</p>

<ul>
	<li>The <code>1<sup>st</sup></code> place athlete&#39;s rank is <code>&quot;Gold Medal&quot;</code>.</li>
	<li>The <code>2<sup>nd</sup></code> place athlete&#39;s rank is <code>&quot;Silver Medal&quot;</code>.</li>
	<li>The <code>3<sup>rd</sup></code> place athlete&#39;s rank is <code>&quot;Bronze Medal&quot;</code>.</li>
	<li>For the <code>4<sup>th</sup></code> place to the <code>n<sup>th</sup></code> place athlete, their rank is their placement number (i.e., the <code>x<sup>th</sup></code> place athlete&#39;s rank is <code>&quot;x&quot;</code>).</li>
</ul>

<p>Return an array <code>answer</code> of size <code>n</code> where <code>answer[i]</code> is the <strong>rank</strong> of the <code>i<sup>th</sup></code> athlete.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
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

# Fibonacci Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/fibonacci-number

## Content

<p>The <b>Fibonacci numbers</b>, commonly denoted <code>F(n)</code> form a sequence, called the <b>Fibonacci sequence</b>, such that each number is the sum of the two preceding ones, starting from <code>0</code> and <code>1</code>. That is,</p>

<pre>
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n &gt; 1.
</pre>

<p>Given <code>n</code>, calculate <code>F(n)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int fib(int n) {
        
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

# Minimum Absolute Difference in BST

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/minimum-absolute-difference-in-bst

## Content

<p>Given the <code>root</code> of a Binary Search Tree (BST), return <em>the minimum absolute difference between the values of any two different nodes in the tree</em>.</p>

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
    int getMinimumDifference(TreeNode* root) {
        
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

# Diameter of Binary Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/diameter-of-binary-tree

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the length of the <strong>diameter</strong> of the tree</em>.</p>

<p>The <strong>diameter</strong> of a binary tree is the <strong>length</strong> of the longest path between any two nodes in a tree. This path may or may not pass through the <code>root</code>.</p>

<p>The <strong>length</strong> of a path between two nodes is represented by the number of edges between them.</p>

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
    int diameterOfBinaryTree(TreeNode* root) {
        
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

# Subtree of Another Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/subtree-of-another-tree

## Content

<p>Given the roots of two binary trees <code>root</code> and <code>subRoot</code>, return <code>true</code> if there is a subtree of <code>root</code> with the same structure and node values of<code> subRoot</code> and <code>false</code> otherwise.</p>

<p>A subtree of a binary tree <code>tree</code> is a tree that consists of a node in <code>tree</code> and all of this node&#39;s descendants. The tree <code>tree</code> could also be considered as a subtree of itself.</p>

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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
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

# N-ary Tree Preorder Traversal

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/n-ary-tree-preorder-traversal

## Content

<p>Given the <code>root</code> of an n-ary tree, return <em>the preorder traversal of its nodes&#39; values</em>.</p>

<p>Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        
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

# Can Place Flowers

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/can-place-flowers

## Content

<p>You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in <strong>adjacent</strong> plots.</p>

<p>Given an integer array <code>flowerbed</code> containing <code>0</code>&#39;s and <code>1</code>&#39;s, where <code>0</code> means empty and <code>1</code> means not empty, and an integer <code>n</code>, return <code>true</code>&nbsp;<em>if</em> <code>n</code> <em>new flowers can be planted in the</em> <code>flowerbed</code> <em>without violating the no-adjacent-flowers rule and</em> <code>false</code> <em>otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
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

# Merge Two Binary Trees

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/merge-two-binary-trees

## Content

<p>You are given two binary trees <code>root1</code> and <code>root2</code>.</p>

<p>Imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not. You need to merge the two trees into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of the new tree.</p>

<p>Return <em>the merged tree</em>.</p>

<p><strong>Note:</strong> The merging process must start from the root nodes of both trees.</p>

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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
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

# Average of Levels in Binary Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/average-of-levels-in-binary-tree

## Content

Given the <code>root</code> of a binary tree, return <em>the average value of the nodes on each level in the form of an array</em>. Answers within <code>10<sup>-5</sup></code> of the actual answer will be accepted.
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
    vector<double> averageOfLevels(TreeNode* root) {
        
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

# Maximum Average Subarray I

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/maximum-average-subarray-i

## Content

<p>You are given an integer array <code>nums</code> consisting of <code>n</code> elements, and an integer <code>k</code>.</p>

<p>Find a contiguous subarray whose <strong>length is equal to</strong> <code>k</code> that has the maximum average value and return <em>this value</em>. Any answer with a calculation error less than <code>10<sup>-5</sup></code> will be accepted.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
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

# Search in a Binary Search Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/search-in-a-binary-search-tree

## Content

<p>You are given the <code>root</code> of a binary search tree (BST) and an integer <code>val</code>.</p>

<p>Find the node in the BST that the node&#39;s value equals <code>val</code> and return the subtree rooted with that node. If such a node does not exist, return <code>null</code>.</p>

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
    TreeNode* searchBST(TreeNode* root, int val) {
        
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

# Binary Search

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/binary-search

## Content

<p>Given an array of integers <code>nums</code> which is sorted in ascending order, and an integer <code>target</code>, write a function to search <code>target</code> in <code>nums</code>. If <code>target</code> exists, then return its index. Otherwise, return <code>-1</code>.</p>

<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
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

# Find Pivot Index

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-pivot-index

## Content

<p>Given an array of integers <code>nums</code>, calculate the <strong>pivot index</strong> of this array.</p>

<p>The <strong>pivot index</strong> is the index where the sum of all the numbers <strong>strictly</strong> to the left of the index is equal to the sum of all the numbers <strong>strictly</strong> to the index&#39;s right.</p>

<p>If the index is on the left edge of the array, then the left sum is <code>0</code> because there are no elements to the left. This also applies to the right edge of the array.</p>

<p>Return <em>the <strong>leftmost pivot index</strong></em>. If no such index exists, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
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

# Flood Fill

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/flood-fill

## Content

<p>You are given an image represented by an <code>m x n</code> grid of integers <code>image</code>, where <code>image[i][j]</code> represents the pixel value of the image. You are also given three integers <code>sr</code>, <code>sc</code>, and <code>color</code>. Your task is to perform a <strong>flood fill</strong> on the image starting from the pixel <code>image[sr][sc]</code>.</p>

<p>To perform a <strong>flood fill</strong>:</p>

<ol>
	<li>Begin with the starting pixel and change its color to <code>color</code>.</li>
	<li>Perform the same process for each pixel that is <strong>directly adjacent</strong> (pixels that share a side with the original pixel, either horizontally or vertically) and shares the <strong>same color</strong> as the starting pixel.</li>
	<li>Keep <strong>repeating</strong> this process by checking neighboring pixels of the <em>updated</em> pixels&nbsp;and modifying their color if it matches the original color of the starting pixel.</li>
	<li>The process <strong>stops</strong> when there are <strong>no more</strong> adjacent pixels of the original color to update.</li>
</ol>

<p>Return the <strong>modified</strong> image after performing the flood fill.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
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

# Find Smallest Letter Greater Than Target

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-smallest-letter-greater-than-target

## Content

<p>You are given an array of characters <code>letters</code> that is sorted in <strong>non-decreasing order</strong>, and a character <code>target</code>. There are <strong>at least two different</strong> characters in <code>letters</code>.</p>

<p>Return <em>the smallest character in </em><code>letters</code><em> that is lexicographically greater than </em><code>target</code>. If such a character does not exist, return the first character in <code>letters</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
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

# Min Cost Climbing Stairs

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/min-cost-climbing-stairs

## Content

<p>You are given an integer array <code>cost</code> where <code>cost[i]</code> is the cost of <code>i<sup>th</sup></code> step on a staircase. Once you pay the cost, you can either climb one or two steps.</p>

<p>You can either start from the step with index <code>0</code>, or the step with index <code>1</code>.</p>

<p>Return <em>the minimum cost to reach the top of the floor</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
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

# Backspace String Compare

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/backspace-string-compare

## Content

<p>Given two strings <code>s</code> and <code>t</code>, return <code>true</code> <em>if they are equal when both are typed into empty text editors</em>. <code>&#39;#&#39;</code> means a backspace character.</p>

<p>Note that after backspacing an empty text, the text will continue empty.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
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

# Lemonade Change

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/lemonade-change

## Content

<p>At a lemonade stand, each lemonade costs <code>$5</code>. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a <code>$5</code>, <code>$10</code>, or <code>$20</code> bill. You must provide the correct change to each customer so that the net transaction is that the customer pays <code>$5</code>.</p>

<p>Note that you do not have any change in hand at first.</p>

<p>Given an integer array <code>bills</code> where <code>bills[i]</code> is the bill the <code>i<sup>th</sup></code> customer pays, return <code>true</code> <em>if you can provide every customer with the correct change, or</em> <code>false</code> <em>otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
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

# Middle of the Linked List

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/middle-of-the-linked-list

## Content

<p>Given the <code>head</code> of a singly linked list, return <em>the middle node of the linked list</em>.</p>

<p>If there are two middle nodes, return <strong>the second middle</strong> node.</p>

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
    ListNode* middleNode(ListNode* head) {
        
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
