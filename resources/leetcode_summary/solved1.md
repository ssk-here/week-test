----

# Merge k Sorted Lists

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/merge-k-sorted-lists

## Content

<p>You are given an array of <code>k</code> linked-lists <code>lists</code>, each linked-list is sorted in ascending order.</p>

<p><em>Merge all the linked-lists into one sorted linked-list and return it.</em></p>

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
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

# Reverse Nodes in k-Group

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/reverse-nodes-in-k-group

## Content

<p>Given the <code>head</code> of a linked list, reverse the nodes of the list <code>k</code> at a time, and return <em>the modified list</em>.</p>

<p><code>k</code> is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of <code>k</code> then left-out nodes, in the end, should remain as it is.</p>

<p>You may not alter the values in the list&#39;s nodes, only nodes themselves may be changed.</p>

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
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

# Longest Valid Parentheses

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/longest-valid-parentheses

## Content

<p>Given a string containing just the characters <code>&#39;(&#39;</code> and <code>&#39;)&#39;</code>, return <em>the length of the longest valid (well-formed) parentheses </em><span data-keyword="substring-nonempty"><em>substring</em></span>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestValidParentheses(string s) {
        
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

# First Missing Positive

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/first-missing-positive

## Content

<p>Given an unsorted integer array <code>nums</code>. Return the <em>smallest positive integer</em> that is <em>not present</em> in <code>nums</code>.</p>

<p>You must implement an algorithm that runs in <code>O(n)</code> time and uses <code>O(1)</code> auxiliary space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
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

# Binary Tree Maximum Path Sum

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/binary-tree-maximum-path-sum

## Content

<p>A <strong>path</strong> in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence <strong>at most once</strong>. Note that the path does not need to pass through the root.</p>

<p>The <strong>path sum</strong> of a path is the sum of the node&#39;s values in the path.</p>

<p>Given the <code>root</code> of a binary tree, return <em>the maximum <strong>path sum</strong> of any <strong>non-empty</strong> path</em>.</p>

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
    int maxPathSum(TreeNode* root) {
        
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

# Word Ladder

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/word-ladder

## Content

<p>A <strong>transformation sequence</strong> from word <code>beginWord</code> to word <code>endWord</code> using a dictionary <code>wordList</code> is a sequence of words <code>beginWord -&gt; s<sub>1</sub> -&gt; s<sub>2</sub> -&gt; ... -&gt; s<sub>k</sub></code> such that:</p>

<ul>
	<li>Every adjacent pair of words differs by a single letter.</li>
	<li>Every <code>s<sub>i</sub></code> for <code>1 &lt;= i &lt;= k</code> is in <code>wordList</code>. Note that <code>beginWord</code> does not need to be in <code>wordList</code>.</li>
	<li><code>s<sub>k</sub> == endWord</code></li>
</ul>

<p>Given two words, <code>beginWord</code> and <code>endWord</code>, and a dictionary <code>wordList</code>, return <em>the <strong>number of words</strong> in the <strong>shortest transformation sequence</strong> from</em> <code>beginWord</code> <em>to</em> <code>endWord</code><em>, or </em><code>0</code><em> if no such sequence exists.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
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

# Candy

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/candy

## Content

<p>There are <code>n</code> children standing in a line. Each child is assigned a rating value given in the integer array <code>ratings</code>.</p>

<p>You are giving candies to these children subjected to the following requirements:</p>

<ul>
	<li>Each child must have at least one candy.</li>
	<li>Children with a higher rating get more candies than their neighbors.</li>
</ul>

<p>Return <em>the minimum number of candies you need to have to distribute the candies to the children</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int candy(vector<int>& ratings) {
        
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

# Basic Calculator

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/basic-calculator

## Content

<p>Given a string <code>s</code> representing a valid expression, implement a basic calculator to evaluate it, and return <em>the result of the evaluation</em>.</p>

<p><strong>Note:</strong> You are <strong>not</strong> allowed to use any built-in function which evaluates strings as mathematical expressions, such as <code>eval()</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int calculate(string s) {
        
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

# Sliding Window Maximum

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/sliding-window-maximum

## Content

<p>You are given an array of integers&nbsp;<code>nums</code>, there is a sliding window of size <code>k</code> which is moving from the very left of the array to the very right. You can only see the <code>k</code> numbers in the window. Each time the sliding window moves right by one position.</p>

<p>Return <em>the max sliding window</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
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

# Russian Doll Envelopes

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/russian-doll-envelopes

## Content

<p>You are given a 2D array of integers <code>envelopes</code> where <code>envelopes[i] = [w<sub>i</sub>, h<sub>i</sub>]</code> represents the width and the height of an envelope.</p>

<p>One envelope can fit into another if and only if both the width and height of one envelope are greater than the other envelope&#39;s width and height.</p>

<p>Return <em>the maximum number of envelopes you can Russian doll (i.e., put one inside the other)</em>.</p>

<p><strong>Note:</strong> You cannot rotate an envelope.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
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

# Prefix and Suffix Search

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/prefix-and-suffix-search

## Content

<p>Design a special dictionary that searches the words in it by a prefix and a suffix.</p>

<p>Implement the <code>WordFilter</code> class:</p>

<ul>
	<li><code>WordFilter(string[] words)</code> Initializes the object with the <code>words</code> in the dictionary.</li>
	<li><code>f(string pref, string suff)</code> Returns <em>the index of the word in the dictionary,</em> which has the prefix <code>pref</code> and the suffix <code>suff</code>. If there is more than one valid index, return <strong>the largest</strong> of them. If there is no such word in the dictionary, return <code>-1</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class WordFilter {
public:
    WordFilter(vector<string>& words) {
        
    }
    
    int f(string pref, string suff) {
        
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(pref,suff);
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

# Sliding Puzzle

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/sliding-puzzle

## Content

<p>On an <code>2 x 3</code> board, there are five tiles labeled from <code>1</code> to <code>5</code>, and an empty square represented by <code>0</code>. A <strong>move</strong> consists of choosing <code>0</code> and a 4-directionally adjacent number and swapping it.</p>

<p>The state of the board is solved if and only if the board is <code>[[1,2,3],[4,5,0]]</code>.</p>

<p>Given the puzzle board <code>board</code>, return <em>the least number of moves required so that the state of the board is solved</em>. If it is impossible for the state of the board to be solved, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        
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

# Count Vowels Permutation

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/count-vowels-permutation

## Content

<p>Given an integer <code>n</code>, your task is to count how many strings of length <code>n</code> can be formed under the following rules:</p>

<ul>
	<li>Each character is a lower case vowel&nbsp;(<code>&#39;a&#39;</code>, <code>&#39;e&#39;</code>, <code>&#39;i&#39;</code>, <code>&#39;o&#39;</code>, <code>&#39;u&#39;</code>)</li>
	<li>Each vowel&nbsp;<code>&#39;a&#39;</code> may only be followed by an <code>&#39;e&#39;</code>.</li>
	<li>Each vowel&nbsp;<code>&#39;e&#39;</code> may only be followed by an <code>&#39;a&#39;</code>&nbsp;or an <code>&#39;i&#39;</code>.</li>
	<li>Each vowel&nbsp;<code>&#39;i&#39;</code> <strong>may not</strong> be followed by another <code>&#39;i&#39;</code>.</li>
	<li>Each vowel&nbsp;<code>&#39;o&#39;</code> may only be followed by an <code>&#39;i&#39;</code> or a&nbsp;<code>&#39;u&#39;</code>.</li>
	<li>Each vowel&nbsp;<code>&#39;u&#39;</code> may only be followed by an <code>&#39;a&#39;</code>.</li>
</ul>

<p>Since the answer&nbsp;may be too large,&nbsp;return it modulo&nbsp;<code>10^9 + 7</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countVowelPermutation(int n) {
        
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

# Minimum Difficulty of a Job Schedule

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule

## Content

<p>You want to schedule a list of jobs in <code>d</code> days. Jobs are dependent (i.e To work on the <code>i<sup>th</sup></code> job, you have to finish all the jobs <code>j</code> where <code>0 &lt;= j &lt; i</code>).</p>

<p>You have to finish <strong>at least</strong> one task every day. The difficulty of a job schedule is the sum of difficulties of each day of the <code>d</code> days. The difficulty of a day is the maximum difficulty of a job done on that day.</p>

<p>You are given an integer array <code>jobDifficulty</code> and an integer <code>d</code>. The difficulty of the <code>i<sup>th</sup></code> job is <code>jobDifficulty[i]</code>.</p>

<p>Return <em>the minimum difficulty of a job schedule</em>. If you cannot find a schedule for the jobs return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        
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

# Maximum Score from Performing Multiplication Operations

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/maximum-score-from-performing-multiplication-operations

## Content

<p>You are given two <strong>0-indexed</strong> integer arrays <code>nums</code> and <code>multipliers</code><strong> </strong>of size <code>n</code> and <code>m</code> respectively, where <code>n &gt;= m</code>.</p>

<p>You begin with a score of <code>0</code>. You want to perform <strong>exactly</strong> <code>m</code> operations. On the <code>i<sup>th</sup></code> operation (<strong>0-indexed</strong>) you will:</p>

<ul>
    <li>Choose one integer <code>x</code> from <strong>either the start or the end </strong>of the array <code>nums</code>.</li>
    <li>Add <code>multipliers[i] * x</code> to your score.
    <ul>
        <li>Note that <code>multipliers[0]</code> corresponds to the first operation, <code>multipliers[1]</code> to the second operation, and so on.</li>
    </ul>
    </li>
    <li>Remove <code>x</code> from <code>nums</code>.</li>
</ul>

<p>Return <em>the <strong>maximum</strong> score after performing </em><code>m</code> <em>operations.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        
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

# Sum of Prefix Scores of Strings

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/sum-of-prefix-scores-of-strings

## Content

<p>You are given an array <code>words</code> of size <code>n</code> consisting of <strong>non-empty</strong> strings.</p>

<p>We define the <strong>score</strong> of a string <code>word</code> as the <strong>number</strong> of strings <code>words[i]</code> such that <code>word</code> is a <strong>prefix</strong> of <code>words[i]</code>.</p>

<ul>
	<li>For example, if <code>words = [&quot;a&quot;, &quot;ab&quot;, &quot;abc&quot;, &quot;cab&quot;]</code>, then the score of <code>&quot;ab&quot;</code> is <code>2</code>, since <code>&quot;ab&quot;</code> is a prefix of both <code>&quot;ab&quot;</code> and <code>&quot;abc&quot;</code>.</li>
</ul>

<p>Return <em>an array </em><code>answer</code><em> of size </em><code>n</code><em> where </em><code>answer[i]</code><em> is the <strong>sum</strong> of scores of every <strong>non-empty</strong> prefix of </em><code>words[i]</code>.</p>

<p><strong>Note</strong> that a string is considered as a prefix of itself.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        
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

# Add Two Numbers

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/add-two-numbers

## Content

<p>You are given two <strong>non-empty</strong> linked lists representing two non-negative integers. The digits are stored in <strong>reverse order</strong>, and each of their nodes contains a single digit. Add the two numbers and return the sum&nbsp;as a linked list.</p>

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

# Longest Substring Without Repeating Characters

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-substring-without-repeating-characters

## Content

<p>Given a string <code>s</code>, find the length of the <strong>longest</strong> <span data-keyword="substring-nonempty"><strong>substring</strong></span> without repeating characters.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
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

# Longest Palindromic Substring

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-palindromic-substring

## Content

<p>Given a string <code>s</code>, return <em>the longest</em> <span data-keyword="palindromic-string"><em>palindromic</em></span> <span data-keyword="substring-nonempty"><em>substring</em></span> in <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string longestPalindrome(string s) {
        
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

# Zigzag Conversion

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/zigzag-conversion

## Content

<p>The string <code>&quot;PAYPALISHIRING&quot;</code> is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)</p>

<pre>
P   A   H   N
A P L S I I G
Y   I   R
</pre>

<p>And then read line by line: <code>&quot;PAHNAPLSIIGYIR&quot;</code></p>

<p>Write the code that will take a string and make this conversion given a number of rows:</p>

<pre>
string convert(string s, int numRows);
</pre>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string convert(string s, int numRows) {
        
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
