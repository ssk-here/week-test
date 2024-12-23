----

# Find Right Interval

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-right-interval

## Content

<p>You are given an array of <code>intervals</code>, where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> and each <code>start<sub>i</sub></code> is <strong>unique</strong>.</p>

<p>The <strong>right interval</strong> for an interval <code>i</code> is an interval <code>j</code> such that <code>start<sub>j</sub> &gt;= end<sub>i</sub></code> and <code>start<sub>j</sub></code> is <strong>minimized</strong>. Note that <code>i</code> may equal <code>j</code>.</p>

<p>Return <em>an array of <strong>right interval</strong> indices for each interval <code>i</code></em>. If no <strong>right interval</strong> exists for interval <code>i</code>, then put <code>-1</code> at index <code>i</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
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

# Path Sum III

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/path-sum-iii

## Content

<p>Given the <code>root</code> of a binary tree and an integer <code>targetSum</code>, return <em>the number of paths where the sum of the values&nbsp;along the path equals</em>&nbsp;<code>targetSum</code>.</p>

<p>The path does not need to start or end at the root or a leaf, but it must go downwards (i.e., traveling only from parent nodes to child nodes).</p>

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
    int pathSum(TreeNode* root, int targetSum) {
        
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

# Find All Duplicates in an Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-all-duplicates-in-an-array

## Content

<p>Given an integer array <code>nums</code> of length <code>n</code> where all the integers of <code>nums</code> are in the range <code>[1, n]</code> and each integer appears <strong>once</strong> or <strong>twice</strong>, return <em>an array of all the integers that appears <strong>twice</strong></em>.</p>

<p>You must write an algorithm that runs in <code>O(n)</code> time and uses only <em>constant</em> auxiliary space, excluding the space needed to store the output</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
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

# String Compression

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/string-compression

## Content

<p>Given an array of characters <code>chars</code>, compress it using the following algorithm:</p>

<p>Begin with an empty string <code>s</code>. For each group of <strong>consecutive repeating characters</strong> in <code>chars</code>:</p>

<ul>
	<li>If the group&#39;s length is <code>1</code>, append the character to <code>s</code>.</li>
	<li>Otherwise, append the character followed by the group&#39;s length.</li>
</ul>

<p>The compressed string <code>s</code> <strong>should not be returned separately</strong>, but instead, be stored <strong>in the input character array <code>chars</code></strong>. Note that group lengths that are <code>10</code> or longer will be split into multiple characters in <code>chars</code>.</p>

<p>After you are done <strong>modifying the input array,</strong> return <em>the new length of the array</em>.</p>

<p>You must write an algorithm that uses only constant extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int compress(vector<char>& chars) {
        
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

# Add Two Numbers II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/add-two-numbers-ii

## Content

<p>You are given two <strong>non-empty</strong> linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.</p>

<p>You may assume the two numbers do not contain any leading zero, except the number 0 itself.</p>

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
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

# Ones and Zeroes

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/ones-and-zeroes

## Content

<p>You are given an array of binary strings <code>strs</code> and two integers <code>m</code> and <code>n</code>.</p>

<p>Return <em>the size of the largest subset of <code>strs</code> such that there are <strong>at most</strong> </em><code>m</code><em> </em><code>0</code><em>&#39;s and </em><code>n</code><em> </em><code>1</code><em>&#39;s in the subset</em>.</p>

<p>A set <code>x</code> is a <strong>subset</strong> of a set <code>y</code> if all elements of <code>x</code> are also elements of <code>y</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        
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

# Target Sum

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/target-sum

## Content

<p>You are given an integer array <code>nums</code> and an integer <code>target</code>.</p>

<p>You want to build an <strong>expression</strong> out of nums by adding one of the symbols <code>&#39;+&#39;</code> and <code>&#39;-&#39;</code> before each integer in nums and then concatenate all the integers.</p>

<ul>
	<li>For example, if <code>nums = [2, 1]</code>, you can add a <code>&#39;+&#39;</code> before <code>2</code> and a <code>&#39;-&#39;</code> before <code>1</code> and concatenate them to build the expression <code>&quot;+2-1&quot;</code>.</li>
</ul>

<p>Return the number of different <strong>expressions</strong> that you can build, which evaluates to <code>target</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
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

# Next Greater Element II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/next-greater-element-ii

## Content

<p>Given a circular integer array <code>nums</code> (i.e., the next element of <code>nums[nums.length - 1]</code> is <code>nums[0]</code>), return <em>the <strong>next greater number</strong> for every element in</em> <code>nums</code>.</p>

<p>The <strong>next greater number</strong> of a number <code>x</code> is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn&#39;t exist, return <code>-1</code> for this number.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
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

# Find Largest Value in Each Tree Row

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-largest-value-in-each-tree-row

## Content

<p>Given the <code>root</code> of a binary tree, return <em>an array of the largest value in each row</em> of the tree <strong>(0-indexed)</strong>.</p>

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
    vector<int> largestValues(TreeNode* root) {
        
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

# Longest Palindromic Subsequence

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-palindromic-subsequence

## Content

<p>Given a string <code>s</code>, find <em>the longest palindromic <strong>subsequence</strong>&#39;s length in</em> <code>s</code>.</p>

<p>A <strong>subsequence</strong> is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
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

# Minimum Time Difference

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-time-difference

## Content

Given a list of 24-hour clock time points in <strong>&quot;HH:MM&quot;</strong> format, return <em>the minimum <b>minutes</b> difference between any two time-points in the list</em>.
<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
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

# Single Element in a Sorted Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/single-element-in-a-sorted-array

## Content

<p>You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.</p>

<p>Return <em>the single element that appears only once</em>.</p>

<p>Your solution must run in <code>O(log n)</code> time and <code>O(1)</code> space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
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

# 01 Matrix

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/01-matrix

## Content

<p>Given an <code>m x n</code> binary matrix <code>mat</code>, return <em>the distance of the nearest </em><code>0</code><em> for each cell</em>.</p>

<p>The distance between two adjacent cells is <code>1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
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

# Number of Provinces

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/number-of-provinces

## Content

<p>There are <code>n</code> cities. Some of them are connected, while some are not. If city <code>a</code> is connected directly with city <code>b</code>, and city <code>b</code> is connected directly with city <code>c</code>, then city <code>a</code> is connected indirectly with city <code>c</code>.</p>

<p>A <strong>province</strong> is a group of directly or indirectly connected cities and no other cities outside of the group.</p>

<p>You are given an <code>n x n</code> matrix <code>isConnected</code> where <code>isConnected[i][j] = 1</code> if the <code>i<sup>th</sup></code> city and the <code>j<sup>th</sup></code> city are directly connected, and <code>isConnected[i][j] = 0</code> otherwise.</p>

<p>Return <em>the total number of <strong>provinces</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
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

# Subarray Sum Equals K

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/subarray-sum-equals-k

## Content

<p>Given an array of integers <code>nums</code> and an integer <code>k</code>, return <em>the total number of subarrays whose sum equals to</em> <code>k</code>.</p>

<p>A subarray is a contiguous <strong>non-empty</strong> sequence of elements within an array.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
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

# Permutation in String

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/permutation-in-string

## Content

<p>Given two strings <code>s1</code> and <code>s2</code>, return <code>true</code> if <code>s2</code> contains a <span data-keyword="permutation-string">permutation</span> of <code>s1</code>, or <code>false</code> otherwise.</p>

<p>In other words, return <code>true</code> if one of <code>s1</code>&#39;s permutations is the substring of <code>s2</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
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

# Maximum Length of Pair Chain

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-length-of-pair-chain

## Content

<p>You are given an array of <code>n</code> pairs <code>pairs</code> where <code>pairs[i] = [left<sub>i</sub>, right<sub>i</sub>]</code> and <code>left<sub>i</sub> &lt; right<sub>i</sub></code>.</p>

<p>A pair <code>p2 = [c, d]</code> <strong>follows</strong> a pair <code>p1 = [a, b]</code> if <code>b &lt; c</code>. A <strong>chain</strong> of pairs can be formed in this fashion.</p>

<p>Return <em>the length longest chain which can be formed</em>.</p>

<p>You do not need to use up all the given intervals. You can select pairs in any order.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
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

# Palindromic Substrings

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/palindromic-substrings

## Content

<p>Given a string <code>s</code>, return <em>the number of <strong>palindromic substrings</strong> in it</em>.</p>

<p>A string is a <strong>palindrome</strong> when it reads the same backward as forward.</p>

<p>A <strong>substring</strong> is a contiguous sequence of characters within the string.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countSubstrings(string s) {
        
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

# 2 Keys Keyboard

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/2-keys-keyboard

## Content

<p>There is only one character <code>&#39;A&#39;</code> on the screen of a notepad. You can perform one of two operations on this notepad for each step:</p>

<ul>
	<li>Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).</li>
	<li>Paste: You can paste the characters which are copied last time.</li>
</ul>

<p>Given an integer <code>n</code>, return <em>the minimum number of operations to get the character</em> <code>&#39;A&#39;</code> <em>exactly</em> <code>n</code> <em>times on the screen</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minSteps(int n) {
        
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

# Maximum Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-binary-tree

## Content

<p>You are given an integer array <code>nums</code> with no duplicates. A <strong>maximum binary tree</strong> can be built recursively from <code>nums</code> using the following algorithm:</p>

<ol>
	<li>Create a root node whose value is the maximum value in <code>nums</code>.</li>
	<li>Recursively build the left subtree on the <strong>subarray prefix</strong> to the <strong>left</strong> of the maximum value.</li>
	<li>Recursively build the right subtree on the <strong>subarray suffix</strong> to the <strong>right</strong> of the maximum value.</li>
</ol>

<p>Return <em>the <strong>maximum binary tree</strong> built from </em><code>nums</code>.</p>

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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
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
