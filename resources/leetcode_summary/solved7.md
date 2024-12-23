----

# Meeting Rooms II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/meeting-rooms-ii

## Content

None

## C++ Code

```cpp

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

# Single Number III

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/single-number-iii

## Content

<p>Given an integer array <code>nums</code>, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in <strong>any order</strong>.</p>

<p>You must write an&nbsp;algorithm that runs in linear runtime complexity and uses&nbsp;only constant extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
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

# Graph Valid Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/graph-valid-tree

## Content

None

## C++ Code

```cpp

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

# H-Index

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/h-index

## Content

<p>Given an array of integers <code>citations</code> where <code>citations[i]</code> is the number of citations a researcher received for their <code>i<sup>th</sup></code> paper, return <em>the researcher&#39;s h-index</em>.</p>

<p>According to the <a href="https://en.wikipedia.org/wiki/H-index" target="_blank">definition of h-index on Wikipedia</a>: The h-index is defined as the maximum value of <code>h</code> such that the given researcher has published at least <code>h</code> papers that have each been cited at least <code>h</code> times.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int hIndex(vector<int>& citations) {
        
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

# H-Index II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/h-index-ii

## Content

<p>Given an array of integers <code>citations</code> where <code>citations[i]</code> is the number of citations a researcher received for their <code>i<sup>th</sup></code> paper and <code>citations</code> is sorted in <strong>ascending order</strong>, return <em>the researcher&#39;s h-index</em>.</p>

<p>According to the <a href="https://en.wikipedia.org/wiki/H-index" target="_blank">definition of h-index on Wikipedia</a>: The h-index is defined as the maximum value of <code>h</code> such that the given researcher has published at least <code>h</code> papers that have each been cited at least <code>h</code> times.</p>

<p>You must write an algorithm that runs in logarithmic time.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int hIndex(vector<int>& citations) {
        
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

# Find the Celebrity

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-the-celebrity

## Content

None

## C++ Code

```cpp

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

# Perfect Squares

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/perfect-squares

## Content

<p>Given an integer <code>n</code>, return <em>the least number of perfect square numbers that sum to</em> <code>n</code>.</p>

<p>A <strong>perfect square</strong> is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, <code>1</code>, <code>4</code>, <code>9</code>, and <code>16</code> are perfect squares while <code>3</code> and <code>11</code> are not.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numSquares(int n) {
        
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

# Zigzag Iterator

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/zigzag-iterator

## Content

None

## C++ Code

```cpp

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

# Inorder Successor in BST

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/inorder-successor-in-bst

## Content

None

## C++ Code

```cpp

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

# Walls and Gates

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/walls-and-gates

## Content

None

## C++ Code

```cpp

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

# Find the Duplicate Number

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-the-duplicate-number

## Content

<p>Given an array of integers <code>nums</code> containing&nbsp;<code>n + 1</code> integers where each integer is in the range <code>[1, n]</code> inclusive.</p>

<p>There is only <strong>one repeated number</strong> in <code>nums</code>, return <em>this&nbsp;repeated&nbsp;number</em>.</p>

<p>You must solve the problem <strong>without</strong> modifying the array <code>nums</code>&nbsp;and using only constant extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
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

# Game of Life

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/game-of-life

## Content

<p>According to&nbsp;<a href="https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life" target="_blank">Wikipedia&#39;s article</a>: &quot;The <b>Game of Life</b>, also known simply as <b>Life</b>, is a cellular automaton devised by the British mathematician John Horton Conway in 1970.&quot;</p>

<p>The board is made up of an <code>m x n</code> grid of cells, where each cell has an initial state: <b>live</b> (represented by a <code>1</code>) or <b>dead</b> (represented by a <code>0</code>). Each cell interacts with its <a href="https://en.wikipedia.org/wiki/Moore_neighborhood" target="_blank">eight neighbors</a> (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):</p>

<ol>
	<li>Any live cell with fewer than two live neighbors dies as if caused by under-population.</li>
	<li>Any live cell with two or three live neighbors lives on to the next generation.</li>
	<li>Any live cell with more than three live neighbors dies, as if by over-population.</li>
	<li>Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.</li>
</ol>

<p><span>The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously. Given the current state of the <code>m x n</code> grid <code>board</code>, return <em>the next state</em>.</span></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
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

# Longest Increasing Subsequence

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-increasing-subsequence

## Content

<p>Given an integer array <code>nums</code>, return <em>the length of the longest <strong>strictly increasing </strong></em><span data-keyword="subsequence-array"><em><strong>subsequence</strong></em></span>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
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

# Range Sum Query - Mutable

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/range-sum-query-mutable

## Content

<p>Given an integer array <code>nums</code>, handle multiple queries of the following types:</p>

<ol>
	<li><strong>Update</strong> the value of an element in <code>nums</code>.</li>
	<li>Calculate the <strong>sum</strong> of the elements of <code>nums</code> between indices <code>left</code> and <code>right</code> <strong>inclusive</strong> where <code>left &lt;= right</code>.</li>
</ol>

<p>Implement the <code>NumArray</code> class:</p>

<ul>
	<li><code>NumArray(int[] nums)</code> Initializes the object with the integer array <code>nums</code>.</li>
	<li><code>void update(int index, int val)</code> <strong>Updates</strong> the value of <code>nums[index]</code> to be <code>val</code>.</li>
	<li><code>int sumRange(int left, int right)</code> Returns the <strong>sum</strong> of the elements of <code>nums</code> between indices <code>left</code> and <code>right</code> <strong>inclusive</strong> (i.e. <code>nums[left] + nums[left + 1] + ... + nums[right]</code>).</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class NumArray {
public:
    NumArray(vector<int>& nums) {
        
    }
    
    void update(int index, int val) {
        
    }
    
    int sumRange(int left, int right) {
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
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
----

# Best Time to Buy and Sell Stock with Cooldown

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown

## Content

<p>You are given an array <code>prices</code> where <code>prices[i]</code> is the price of a given stock on the <code>i<sup>th</sup></code> day.</p>

<p>Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times) with the following restrictions:</p>

<ul>
	<li>After you sell your stock, you cannot buy stock on the next day (i.e., cooldown one day).</li>
</ul>

<p><strong>Note:</strong> You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).</p>

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

# Bulb Switcher

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/bulb-switcher

## Content

<p>There are <code>n</code> bulbs that are initially off. You first turn on all the bulbs, then&nbsp;you turn off every second bulb.</p>

<p>On the third round, you toggle every third bulb (turning on if it&#39;s off or turning off if it&#39;s on). For the <code>i<sup>th</sup></code> round, you toggle every <code>i</code> bulb. For the <code>n<sup>th</sup></code> round, you only toggle the last bulb.</p>

<p>Return <em>the number of bulbs that are on after <code>n</code> rounds</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int bulbSwitch(int n) {
        
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

# Generalized Abbreviation

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/generalized-abbreviation

## Content

None

## C++ Code

```cpp

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

# Coin Change

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/coin-change

## Content

<p>You are given an integer array <code>coins</code> representing coins of different denominations and an integer <code>amount</code> representing a total amount of money.</p>

<p>Return <em>the fewest number of coins that you need to make up that amount</em>. If that amount of money cannot be made up by any combination of the coins, return <code>-1</code>.</p>

<p>You may assume that you have an infinite number of each kind of coin.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
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

# Number of Connected Components in an Undirected Graph

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph

## Content

None

## C++ Code

```cpp

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

# Odd Even Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/odd-even-linked-list

## Content

<p>Given the <code>head</code> of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return <em>the reordered list</em>.</p>

<p>The <strong>first</strong> node is considered <strong>odd</strong>, and the <strong>second</strong> node is <strong>even</strong>, and so on.</p>

<p>Note that the relative order inside both the even and odd groups should remain as it was in the input.</p>

<p>You must solve the problem&nbsp;in <code>O(1)</code>&nbsp;extra space complexity and <code>O(n)</code> time complexity.</p>

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
    ListNode* oddEvenList(ListNode* head) {
        
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
