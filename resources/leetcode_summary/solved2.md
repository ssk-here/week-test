----

# String to Integer (atoi)

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/string-to-integer-atoi

## Content

<p>Implement the <code>myAtoi(string s)</code> function, which converts a string to a 32-bit signed integer.</p>

<p>The algorithm for <code>myAtoi(string s)</code> is as follows:</p>

<ol>
	<li><strong>Whitespace</strong>: Ignore any leading whitespace (<code>&quot; &quot;</code>).</li>
	<li><strong>Signedness</strong>: Determine the sign by checking if the next character is <code>&#39;-&#39;</code> or <code>&#39;+&#39;</code>, assuming positivity is neither present.</li>
	<li><strong>Conversion</strong>: Read the integer by skipping leading zeros&nbsp;until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.</li>
	<li><strong>Rounding</strong>: If the integer is out of the 32-bit signed integer range <code>[-2<sup>31</sup>, 2<sup>31</sup> - 1]</code>, then round the integer to remain in the range. Specifically, integers less than <code>-2<sup>31</sup></code> should be rounded to <code>-2<sup>31</sup></code>, and integers greater than <code>2<sup>31</sup> - 1</code> should be rounded to <code>2<sup>31</sup> - 1</code>.</li>
</ol>

<p>Return the integer as the final result.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int myAtoi(string s) {
        
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

# Container With Most Water

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/container-with-most-water

## Content

<p>You are given an integer array <code>height</code> of length <code>n</code>. There are <code>n</code> vertical lines drawn such that the two endpoints of the <code>i<sup>th</sup></code> line are <code>(i, 0)</code> and <code>(i, height[i])</code>.</p>

<p>Find two lines that together with the x-axis form a container, such that the container contains the most water.</p>

<p>Return <em>the maximum amount of water a container can store</em>.</p>

<p><strong>Notice</strong> that you may not slant the container.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        
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

# 3Sum

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/3sum

## Content

<p>Given an integer array nums, return all the triplets <code>[nums[i], nums[j], nums[k]]</code> such that <code>i != j</code>, <code>i != k</code>, and <code>j != k</code>, and <code>nums[i] + nums[j] + nums[k] == 0</code>.</p>

<p>Notice that the solution set must not contain duplicate triplets.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
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

# Letter Combinations of a Phone Number

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/letter-combinations-of-a-phone-number

## Content

<p>Given a string containing digits from <code>2-9</code> inclusive, return all possible letter combinations that the number could represent. Return the answer in <strong>any order</strong>.</p>

<p>A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.</p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/15/1200px-telephone-keypad2svg.png" style="width: 300px; height: 243px;" />
<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
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

# Remove Nth Node From End of List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/remove-nth-node-from-end-of-list

## Content

<p>Given the <code>head</code> of a linked list, remove the <code>n<sup>th</sup></code> node from the end of the list and return its head.</p>

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
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

# Generate Parentheses

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/generate-parentheses

## Content

<p>Given <code>n</code> pairs of parentheses, write a function to <em>generate all combinations of well-formed parentheses</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
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

# Swap Nodes in Pairs

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/swap-nodes-in-pairs

## Content

<p>Given a&nbsp;linked list, swap every two adjacent nodes and return its head. You must solve the problem without&nbsp;modifying the values in the list&#39;s nodes (i.e., only nodes themselves may be changed.)</p>

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
    ListNode* swapPairs(ListNode* head) {
        
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

# Divide Two Integers

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/divide-two-integers

## Content

<p>Given two integers <code>dividend</code> and <code>divisor</code>, divide two integers <strong>without</strong> using multiplication, division, and mod operator.</p>

<p>The integer division should truncate toward zero, which means losing its fractional part. For example, <code>8.345</code> would be truncated to <code>8</code>, and <code>-2.7335</code> would be truncated to <code>-2</code>.</p>

<p>Return <em>the <strong>quotient</strong> after dividing </em><code>dividend</code><em> by </em><code>divisor</code>.</p>

<p><strong>Note: </strong>Assume we are dealing with an environment that could only store integers within the <strong>32-bit</strong> signed integer range: <code>[&minus;2<sup>31</sup>, 2<sup>31</sup> &minus; 1]</code>. For this problem, if the quotient is <strong>strictly greater than</strong> <code>2<sup>31</sup> - 1</code>, then return <code>2<sup>31</sup> - 1</code>, and if the quotient is <strong>strictly less than</strong> <code>-2<sup>31</sup></code>, then return <code>-2<sup>31</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int divide(int dividend, int divisor) {
        
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

# Next Permutation

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/next-permutation

## Content

<p>A <strong>permutation</strong> of an array of integers is an arrangement of its members into a sequence or linear order.</p>

<ul>
	<li>For example, for <code>arr = [1,2,3]</code>, the following are all the permutations of <code>arr</code>: <code>[1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1]</code>.</li>
</ul>

<p>The <strong>next permutation</strong> of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the <strong>next permutation</strong> of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).</p>

<ul>
	<li>For example, the next permutation of <code>arr = [1,2,3]</code> is <code>[1,3,2]</code>.</li>
	<li>Similarly, the next permutation of <code>arr = [2,3,1]</code> is <code>[3,1,2]</code>.</li>
	<li>While the next permutation of <code>arr = [3,2,1]</code> is <code>[1,2,3]</code> because <code>[3,2,1]</code> does not have a lexicographical larger rearrangement.</li>
</ul>

<p>Given an array of integers <code>nums</code>, <em>find the next permutation of</em> <code>nums</code>.</p>

<p>The replacement must be <strong><a href="http://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in place</a></strong> and use only constant extra memory.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
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

# Search in Rotated Sorted Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/search-in-rotated-sorted-array

## Content

<p>There is an integer array <code>nums</code> sorted in ascending order (with <strong>distinct</strong> values).</p>

<p>Prior to being passed to your function, <code>nums</code> is <strong>possibly rotated</strong> at an unknown pivot index <code>k</code> (<code>1 &lt;= k &lt; nums.length</code>) such that the resulting array is <code>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code> (<strong>0-indexed</strong>). For example, <code>[0,1,2,4,5,6,7]</code> might be rotated at pivot index <code>3</code> and become <code>[4,5,6,7,0,1,2]</code>.</p>

<p>Given the array <code>nums</code> <strong>after</strong> the possible rotation and an integer <code>target</code>, return <em>the index of </em><code>target</code><em> if it is in </em><code>nums</code><em>, or </em><code>-1</code><em> if it is not in </em><code>nums</code>.</p>

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

# Find First and Last Position of Element in Sorted Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

## Content

<p>Given an array of integers <code>nums</code> sorted in non-decreasing order, find the starting and ending position of a given <code>target</code> value.</p>

<p>If <code>target</code> is not found in the array, return <code>[-1, -1]</code>.</p>

<p>You must&nbsp;write an algorithm with&nbsp;<code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
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

# Count and Say

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/count-and-say

## Content

<p>The <strong>count-and-say</strong> sequence is a sequence of digit strings defined by the recursive formula:</p>

<ul>
	<li><code>countAndSay(1) = &quot;1&quot;</code></li>
	<li><code>countAndSay(n)</code> is the run-length encoding of <code>countAndSay(n - 1)</code>.</li>
</ul>

<p><a href="http://en.wikipedia.org/wiki/Run-length_encoding" target="_blank">Run-length encoding</a> (RLE) is a string compression method that works by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string <code>&quot;3322251&quot;</code> we replace <code>&quot;33&quot;</code> with <code>&quot;23&quot;</code>, replace <code>&quot;222&quot;</code> with <code>&quot;32&quot;</code>, replace <code>&quot;5&quot;</code> with <code>&quot;15&quot;</code> and replace <code>&quot;1&quot;</code> with <code>&quot;11&quot;</code>. Thus the compressed string becomes <code>&quot;23321511&quot;</code>.</p>

<p>Given a positive integer <code>n</code>, return <em>the </em><code>n<sup>th</sup></code><em> element of the <strong>count-and-say</strong> sequence</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string countAndSay(int n) {
        
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

# Combination Sum

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/combination-sum

## Content

<p>Given an array of <strong>distinct</strong> integers <code>candidates</code> and a target integer <code>target</code>, return <em>a list of all <strong>unique combinations</strong> of </em><code>candidates</code><em> where the chosen numbers sum to </em><code>target</code><em>.</em> You may return the combinations in <strong>any order</strong>.</p>

<p>The <strong>same</strong> number may be chosen from <code>candidates</code> an <strong>unlimited number of times</strong>. Two combinations are unique if the <span data-keyword="frequency-array">frequency</span> of at least one of the chosen numbers is different.</p>

<p>The test cases are generated such that the number of unique combinations that sum up to <code>target</code> is less than <code>150</code> combinations for the given input.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
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

# Combination Sum II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/combination-sum-ii

## Content

<p>Given a collection of candidate numbers (<code>candidates</code>) and a target number (<code>target</code>), find all unique combinations in <code>candidates</code>&nbsp;where the candidate numbers sum to <code>target</code>.</p>

<p>Each number in <code>candidates</code>&nbsp;may only be used <strong>once</strong> in the combination.</p>

<p><strong>Note:</strong>&nbsp;The solution set must not contain duplicate combinations.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
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

# Multiply Strings

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/multiply-strings

## Content

<p>Given two non-negative integers <code>num1</code> and <code>num2</code> represented as strings, return the product of <code>num1</code> and <code>num2</code>, also represented as a string.</p>

<p><strong>Note:</strong>&nbsp;You must not use any built-in BigInteger library or convert the inputs to integer directly.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string multiply(string num1, string num2) {
        
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

# Jump Game II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/jump-game-ii

## Content

<p>You are given a <strong>0-indexed</strong> array of integers <code>nums</code> of length <code>n</code>. You are initially positioned at <code>nums[0]</code>.</p>

<p>Each element <code>nums[i]</code> represents the maximum length of a forward jump from index <code>i</code>. In other words, if you are at <code>nums[i]</code>, you can jump to any <code>nums[i + j]</code> where:</p>

<ul>
	<li><code>0 &lt;= j &lt;= nums[i]</code> and</li>
	<li><code>i + j &lt; n</code></li>
</ul>

<p>Return <em>the minimum number of jumps to reach </em><code>nums[n - 1]</code>. The test cases are generated such that you can reach <code>nums[n - 1]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int jump(vector<int>& nums) {
        
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

# Permutations

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/permutations

## Content

<p>Given an array <code>nums</code> of distinct integers, return all the possible <span data-keyword="permutation-array">permutations</span>. You can return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
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

# Permutations II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/permutations-ii

## Content

<p>Given a collection of numbers, <code>nums</code>,&nbsp;that might contain duplicates, return <em>all possible unique permutations <strong>in any order</strong>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
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

# Rotate Image

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/rotate-image

## Content

<p>You are given an <code>n x n</code> 2D <code>matrix</code> representing an image, rotate the image by <strong>90</strong> degrees (clockwise).</p>

<p>You have to rotate the image <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank"><strong>in-place</strong></a>, which means you have to modify the input 2D matrix directly. <strong>DO NOT</strong> allocate another 2D matrix and do the rotation.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
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

# Group Anagrams

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/group-anagrams

## Content

<p>Given an array of strings <code>strs</code>, group the <span data-keyword="anagram">anagrams</span> together. You can return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
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
