----

# Range Sum of Sorted Subarray Sums

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/range-sum-of-sorted-subarray-sums

## Content

<p>You are given the array <code>nums</code> consisting of <code>n</code> positive integers. You computed the sum of all non-empty continuous subarrays from the array and then sorted them in non-decreasing order, creating a new array of <code>n * (n + 1) / 2</code> numbers.</p>

<p><em>Return the sum of the numbers from index </em><code>left</code><em> to index </em><code>right</code> (<strong>indexed from 1</strong>)<em>, inclusive, in the new array. </em>Since the answer can be a huge number return it modulo <code>10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
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

# Maximum Number of Non-Overlapping Subarrays With Sum Equals Target

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-number-of-non-overlapping-subarrays-with-sum-equals-target

## Content

<p>Given an array <code>nums</code> and an integer <code>target</code>, return <em>the maximum number of <strong>non-empty</strong> <strong>non-overlapping</strong> subarrays such that the sum of values in each subarray is equal to</em> <code>target</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        
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

# Minimum Time to Make Rope Colorful

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-time-to-make-rope-colorful

## Content

<p>Alice has <code>n</code> balloons arranged on a rope. You are given a <strong>0-indexed</strong> string <code>colors</code> where <code>colors[i]</code> is the color of the <code>i<sup>th</sup></code> balloon.</p>

<p>Alice wants the rope to be <strong>colorful</strong>. She does not want <strong>two consecutive balloons</strong> to be of the same color, so she asks Bob for help. Bob can remove some balloons from the rope to make it <strong>colorful</strong>. You are given a <strong>0-indexed</strong> integer array <code>neededTime</code> where <code>neededTime[i]</code> is the time (in seconds) that Bob needs to remove the <code>i<sup>th</sup></code> balloon from the rope.</p>

<p>Return <em>the <strong>minimum time</strong> Bob needs to make the rope <strong>colorful</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
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

# Minimum Deletions to Make String Balanced

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-deletions-to-make-string-balanced

## Content

<p>You are given a string <code>s</code> consisting only of characters <code>&#39;a&#39;</code> and <code>&#39;b&#39;</code>​​​​.</p>

<p>You can delete any number of characters in <code>s</code> to make <code>s</code> <strong>balanced</strong>. <code>s</code> is <strong>balanced</strong> if there is no pair of indices <code>(i,j)</code> such that <code>i &lt; j</code> and <code>s[i] = &#39;b&#39;</code> and <code>s[j]= &#39;a&#39;</code>.</p>

<p>Return <em>the <strong>minimum</strong> number of deletions needed to make </em><code>s</code><em> <strong>balanced</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minimumDeletions(string s) {
        
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

# Determine if Two Strings Are Close

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/determine-if-two-strings-are-close

## Content

<p>Two strings are considered <strong>close</strong> if you can attain one from the other using the following operations:</p>

<ul>
	<li>Operation 1: Swap any two <strong>existing</strong> characters.

	<ul>
		<li>For example, <code>a<u>b</u>cd<u>e</u> -&gt; a<u>e</u>cd<u>b</u></code></li>
	</ul>
	</li>
	<li>Operation 2: Transform <strong>every</strong> occurrence of one <strong>existing</strong> character into another <strong>existing</strong> character, and do the same with the other character.
	<ul>
		<li>For example, <code><u>aa</u>c<u>abb</u> -&gt; <u>bb</u>c<u>baa</u></code> (all <code>a</code>&#39;s turn into <code>b</code>&#39;s, and all <code>b</code>&#39;s turn into <code>a</code>&#39;s)</li>
	</ul>
	</li>
</ul>

<p>You can use the operations on either string as many times as necessary.</p>

<p>Given two strings, <code>word1</code> and <code>word2</code>, return <code>true</code><em> if </em><code>word1</code><em> and </em><code>word2</code><em> are <strong>close</strong>, and </em><code>false</code><em> otherwise.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
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

# Correct a Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/correct-a-binary-tree

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

# Max Number of K-Sum Pairs

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/max-number-of-k-sum-pairs

## Content

<p>You are given an integer array <code>nums</code> and an integer <code>k</code>.</p>

<p>In one operation, you can pick two numbers from the array whose sum equals <code>k</code> and remove them from the array.</p>

<p>Return <em>the maximum number of operations you can perform on the array</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
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

# Swapping Nodes in a Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/swapping-nodes-in-a-linked-list

## Content

<p>You are given the <code>head</code> of a linked list, and an integer <code>k</code>.</p>

<p>Return <em>the head of the linked list after <strong>swapping</strong> the values of the </em><code>k<sup>th</sup></code> <em>node from the beginning and the </em><code>k<sup>th</sup></code> <em>node from the end (the list is <strong>1-indexed</strong>).</em></p>

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
    ListNode* swapNodes(ListNode* head, int k) {
        
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

# Distinct Numbers in Each Subarray

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/distinct-numbers-in-each-subarray

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

# Find the Student that Will Replace the Chalk

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk

## Content

<p>There are <code>n</code> students in a class numbered from <code>0</code> to <code>n - 1</code>. The teacher will give each student a problem starting with the student number <code>0</code>, then the student number <code>1</code>, and so on until the teacher reaches the student number <code>n - 1</code>. After that, the teacher will restart the process, starting with the student number <code>0</code> again.</p>

<p>You are given a <strong>0-indexed</strong> integer array <code>chalk</code> and an integer <code>k</code>. There are initially <code>k</code> pieces of chalk. When the student number <code>i</code> is given a problem to solve, they will use <code>chalk[i]</code> pieces of chalk to solve that problem. However, if the current number of chalk pieces is <strong>strictly less</strong> than <code>chalk[i]</code>, then the student number <code>i</code> will be asked to <strong>replace</strong> the chalk.</p>

<p>Return <em>the <strong>index</strong> of the student that will <strong>replace</strong> the chalk pieces</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
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

# Count Sub Islands

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/count-sub-islands

## Content

<p>You are given two <code>m x n</code> binary matrices <code>grid1</code> and <code>grid2</code> containing only <code>0</code>&#39;s (representing water) and <code>1</code>&#39;s (representing land). An <strong>island</strong> is a group of <code>1</code>&#39;s connected <strong>4-directionally</strong> (horizontal or vertical). Any cells outside of the grid are considered water cells.</p>

<p>An island in <code>grid2</code> is considered a <strong>sub-island </strong>if there is an island in <code>grid1</code> that contains <strong>all</strong> the cells that make up <strong>this</strong> island in <code>grid2</code>.</p>

<p>Return the <em><strong>number</strong> of islands in </em><code>grid2</code> <em>that are considered <strong>sub-islands</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
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

# Nearest Exit from Entrance in Maze

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/nearest-exit-from-entrance-in-maze

## Content

<p>You are given an <code>m x n</code> matrix <code>maze</code> (<strong>0-indexed</strong>) with empty cells (represented as <code>&#39;.&#39;</code>) and walls (represented as <code>&#39;+&#39;</code>). You are also given the <code>entrance</code> of the maze, where <code>entrance = [entrance<sub>row</sub>, entrance<sub>col</sub>]</code> denotes the row and column of the cell you are initially standing at.</p>

<p>In one step, you can move one cell <strong>up</strong>, <strong>down</strong>, <strong>left</strong>, or <strong>right</strong>. You cannot step into a cell with a wall, and you cannot step outside the maze. Your goal is to find the <strong>nearest exit</strong> from the <code>entrance</code>. An <strong>exit</strong> is defined as an <strong>empty cell</strong> that is at the <strong>border</strong> of the <code>maze</code>. The <code>entrance</code> <strong>does not count</strong> as an exit.</p>

<p>Return <em>the <strong>number of steps</strong> in the shortest path from the </em><code>entrance</code><em> to the nearest exit, or </em><code>-1</code><em> if no such path exists</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        
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

# Maximum Number of Points with Cost

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-number-of-points-with-cost

## Content

<p>You are given an <code>m x n</code> integer matrix <code>points</code> (<strong>0-indexed</strong>). Starting with <code>0</code> points, you want to <strong>maximize</strong> the number of points you can get from the matrix.</p>

<p>To gain points, you must pick one cell in <strong>each row</strong>. Picking the cell at coordinates <code>(r, c)</code> will <strong>add</strong> <code>points[r][c]</code> to your score.</p>

<p>However, you will lose points if you pick a cell too far from the cell that you picked in the previous row. For every two adjacent rows <code>r</code> and <code>r + 1</code> (where <code>0 &lt;= r &lt; m - 1</code>), picking cells at coordinates <code>(r, c<sub>1</sub>)</code> and <code>(r + 1, c<sub>2</sub>)</code> will <strong>subtract</strong> <code>abs(c<sub>1</sub> - c<sub>2</sub>)</code> from your score.</p>

<p>Return <em>the <strong>maximum</strong> number of points you can achieve</em>.</p>

<p><code>abs(x)</code> is defined as:</p>

<ul>
	<li><code>x</code> for <code>x &gt;= 0</code>.</li>
	<li><code>-x</code> for <code>x &lt; 0</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        
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

# Find Missing Observations

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-missing-observations

## Content

<p>You have observations of <code>n + m</code> <strong>6-sided</strong> dice rolls with each face numbered from <code>1</code> to <code>6</code>. <code>n</code> of the observations went missing, and you only have the observations of <code>m</code> rolls. Fortunately, you have also calculated the <strong>average value</strong> of the <code>n + m</code> rolls.</p>

<p>You are given an integer array <code>rolls</code> of length <code>m</code> where <code>rolls[i]</code> is the value of the <code>i<sup>th</sup></code> observation. You are also given the two integers <code>mean</code> and <code>n</code>.</p>

<p>Return <em>an array of length </em><code>n</code><em> containing the missing observations such that the <strong>average value </strong>of the </em><code>n + m</code><em> rolls is <strong>exactly</strong> </em><code>mean</code>. If there are multiple valid answers, return <em>any of them</em>. If no such array exists, return <em>an empty array</em>.</p>

<p>The <strong>average value</strong> of a set of <code>k</code> numbers is the sum of the numbers divided by <code>k</code>.</p>

<p>Note that <code>mean</code> is an integer, so the sum of the <code>n + m</code> rolls should be divisible by <code>n + m</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        
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

# Delete the Middle Node of a Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list

## Content

<p>You are given the <code>head</code> of a linked list. <strong>Delete</strong> the <strong>middle node</strong>, and return <em>the</em> <code>head</code> <em>of the modified linked list</em>.</p>

<p>The <strong>middle node</strong> of a linked list of size <code>n</code> is the <code>&lfloor;n / 2&rfloor;<sup>th</sup></code> node from the <b>start</b> using <strong>0-based indexing</strong>, where <code>&lfloor;x&rfloor;</code> denotes the largest integer less than or equal to <code>x</code>.</p>

<ul>
	<li>For <code>n</code> = <code>1</code>, <code>2</code>, <code>3</code>, <code>4</code>, and <code>5</code>, the middle nodes are <code>0</code>, <code>1</code>, <code>1</code>, <code>2</code>, and <code>2</code>, respectively.</li>
</ul>

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
    ListNode* deleteMiddle(ListNode* head) {
        
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

# Maximum Twin Sum of a Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

## Content

<p>In a linked list of size <code>n</code>, where <code>n</code> is <strong>even</strong>, the <code>i<sup>th</sup></code> node (<strong>0-indexed</strong>) of the linked list is known as the <strong>twin</strong> of the <code>(n-1-i)<sup>th</sup></code> node, if <code>0 &lt;= i &lt;= (n / 2) - 1</code>.</p>

<ul>
	<li>For example, if <code>n = 4</code>, then node <code>0</code> is the twin of node <code>3</code>, and node <code>1</code> is the twin of node <code>2</code>. These are the only nodes with twins for <code>n = 4</code>.</li>
</ul>

<p>The <strong>twin sum </strong>is defined as the sum of a node and its twin.</p>

<p>Given the <code>head</code> of a linked list with even length, return <em>the <strong>maximum twin sum</strong> of the linked list</em>.</p>

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
    int pairSum(ListNode* head) {
        
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

# Solving Questions With Brainpower

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/solving-questions-with-brainpower

## Content

<p>You are given a <strong>0-indexed</strong> 2D integer array <code>questions</code> where <code>questions[i] = [points<sub>i</sub>, brainpower<sub>i</sub>]</code>.</p>

<p>The array describes the questions of an exam, where you have to process the questions <strong>in order</strong> (i.e., starting from question <code>0</code>) and make a decision whether to <strong>solve</strong> or <strong>skip</strong> each question. Solving question <code>i</code> will <strong>earn</strong> you <code>points<sub>i</sub></code> points but you will be <strong>unable</strong> to solve each of the next <code>brainpower<sub>i</sub></code> questions. If you skip question <code>i</code>, you get to make the decision on the next question.</p>

<ul>
	<li>For example, given <code>questions = [[3, 2], [4, 3], [4, 4], [2, 5]]</code>:

	<ul>
		<li>If question <code>0</code> is solved, you will earn <code>3</code> points but you will be unable to solve questions <code>1</code> and <code>2</code>.</li>
		<li>If instead, question <code>0</code> is skipped and question <code>1</code> is solved, you will earn <code>4</code> points but you will be unable to solve questions <code>2</code> and <code>3</code>.</li>
	</ul>
	</li>
</ul>

<p>Return <em>the <strong>maximum</strong> points you can earn for the exam</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        
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

# Coin Change II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/coin-change-ii

## Content

<p>You are given an integer array <code>coins</code> representing coins of different denominations and an integer <code>amount</code> representing a total amount of money.</p>

<p>Return <em>the number of combinations that make up that amount</em>. If that amount of money cannot be made up by any combination of the coins, return <code>0</code>.</p>

<p>You may assume that you have an infinite number of each kind of coin.</p>

<p>The answer is <strong>guaranteed</strong> to fit into a signed <strong>32-bit</strong> integer.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
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

# Equal Row and Column Pairs

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/equal-row-and-column-pairs

## Content

<p>Given a <strong>0-indexed</strong> <code>n x n</code> integer matrix <code>grid</code>, <em>return the number of pairs </em><code>(r<sub>i</sub>, c<sub>j</sub>)</code><em> such that row </em><code>r<sub>i</sub></code><em> and column </em><code>c<sub>j</sub></code><em> are equal</em>.</p>

<p>A row and column pair is considered equal if they contain the same elements in the same order (i.e., an equal array).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
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

# Remove Nodes From Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/remove-nodes-from-linked-list

## Content

<p>You are given the <code>head</code> of a linked list.</p>

<p>Remove every node which has a node with a greater value anywhere to the right side of it.</p>

<p>Return <em>the </em><code>head</code><em> of the modified linked list.</em></p>

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
    ListNode* removeNodes(ListNode* head) {
        
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
