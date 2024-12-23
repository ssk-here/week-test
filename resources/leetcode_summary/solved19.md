----

# Uncommon Words from Two Sentences

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/uncommon-words-from-two-sentences

## Content

<p>A <strong>sentence</strong> is a string of single-space separated words where each word consists only of lowercase letters.</p>

<p>A word is <strong>uncommon</strong> if it appears exactly once in one of the sentences, and <strong>does not appear</strong> in the other sentence.</p>

<p>Given two <strong>sentences</strong> <code>s1</code> and <code>s2</code>, return <em>a list of all the <strong>uncommon words</strong></em>. You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
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

# Monotonic Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/monotonic-array

## Content

<p>An array is <strong>monotonic</strong> if it is either monotone increasing or monotone decreasing.</p>

<p>An array <code>nums</code> is monotone increasing if for all <code>i &lt;= j</code>, <code>nums[i] &lt;= nums[j]</code>. An array <code>nums</code> is monotone decreasing if for all <code>i &lt;= j</code>, <code>nums[i] &gt;= nums[j]</code>.</p>

<p>Given an integer array <code>nums</code>, return <code>true</code><em> if the given array is monotonic, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
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

# Smallest Range I

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/smallest-range-i

## Content

<p>You are given an integer array <code>nums</code> and an integer <code>k</code>.</p>

<p>In one operation, you can choose any index <code>i</code> where <code>0 &lt;= i &lt; nums.length</code> and change <code>nums[i]</code> to <code>nums[i] + x</code> where <code>x</code> is an integer from the range <code>[-k, k]</code>. You can apply this operation <strong>at most once</strong> for each index <code>i</code>.</p>

<p>The <strong>score</strong> of <code>nums</code> is the difference between the maximum and minimum elements in <code>nums</code>.</p>

<p>Return <em>the minimum <strong>score</strong> of </em><code>nums</code><em> after applying the mentioned operation at most once for each index in it</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        
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

# DI String Match

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/di-string-match

## Content

<p>A permutation <code>perm</code> of <code>n + 1</code> integers of all the integers in the range <code>[0, n]</code> can be represented as a string <code>s</code> of length <code>n</code> where:</p>

<ul>
	<li><code>s[i] == &#39;I&#39;</code> if <code>perm[i] &lt; perm[i + 1]</code>, and</li>
	<li><code>s[i] == &#39;D&#39;</code> if <code>perm[i] &gt; perm[i + 1]</code>.</li>
</ul>

<p>Given a string <code>s</code>, reconstruct the permutation <code>perm</code> and return it. If there are multiple valid permutations perm, return <strong>any of them</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> diStringMatch(string s) {
        
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

# Squares of a Sorted Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/squares-of-a-sorted-array

## Content

<p>Given an integer array <code>nums</code> sorted in <strong>non-decreasing</strong> order, return <em>an array of <strong>the squares of each number</strong> sorted in non-decreasing order</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
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

# Find the Town Judge

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-town-judge

## Content

<p>In a town, there are <code>n</code> people labeled from <code>1</code> to <code>n</code>. There is a rumor that one of these people is secretly the town judge.</p>

<p>If the town judge exists, then:</p>

<ol>
	<li>The town judge trusts nobody.</li>
	<li>Everybody (except for the town judge) trusts the town judge.</li>
	<li>There is exactly one person that satisfies properties <strong>1</strong> and <strong>2</strong>.</li>
</ol>

<p>You are given an array <code>trust</code> where <code>trust[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> representing that the person labeled <code>a<sub>i</sub></code> trusts the person labeled <code>b<sub>i</sub></code>. If a trust relationship does not exist in <code>trust</code> array, then such a trust relationship does not exist.</p>

<p>Return <em>the label of the town judge if the town judge exists and can be identified, or return </em><code>-1</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
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

# Remove Outermost Parentheses

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/remove-outermost-parentheses

## Content

<p>A valid parentheses string is either empty <code>&quot;&quot;</code>, <code>&quot;(&quot; + A + &quot;)&quot;</code>, or <code>A + B</code>, where <code>A</code> and <code>B</code> are valid parentheses strings, and <code>+</code> represents string concatenation.</p>

<ul>
	<li>For example, <code>&quot;&quot;</code>, <code>&quot;()&quot;</code>, <code>&quot;(())()&quot;</code>, and <code>&quot;(()(()))&quot;</code> are all valid parentheses strings.</li>
</ul>

<p>A valid parentheses string <code>s</code> is primitive if it is nonempty, and there does not exist a way to split it into <code>s = A + B</code>, with <code>A</code> and <code>B</code> nonempty valid parentheses strings.</p>

<p>Given a valid parentheses string <code>s</code>, consider its primitive decomposition: <code>s = P<sub>1</sub> + P<sub>2</sub> + ... + P<sub>k</sub></code>, where <code>P<sub>i</sub></code> are primitive valid parentheses strings.</p>

<p>Return <code>s</code> <em>after removing the outermost parentheses of every primitive string in the primitive decomposition of </em><code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string removeOuterParentheses(string s) {
        
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

# Sum of Root To Leaf Binary Numbers

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers

## Content

<p>You are given the <code>root</code> of a binary tree where each node has a value <code>0</code> or <code>1</code>. Each root-to-leaf path represents a binary number starting with the most significant bit.</p>

<ul>
	<li>For example, if the path is <code>0 -&gt; 1 -&gt; 1 -&gt; 0 -&gt; 1</code>, then this could represent <code>01101</code> in binary, which is <code>13</code>.</li>
</ul>

<p>For all leaves in the tree, consider the numbers represented by the path from the root to that leaf. Return <em>the sum of these numbers</em>.</p>

<p>The test cases are generated so that the answer fits in a <strong>32-bits</strong> integer.</p>

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
    int sumRootToLeaf(TreeNode* root) {
        
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

# Divisor Game

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/divisor-game

## Content

<p>Alice and Bob take turns playing a game, with Alice starting first.</p>

<p>Initially, there is a number <code>n</code> on the chalkboard. On each player&#39;s turn, that player makes a move consisting of:</p>

<ul>
	<li>Choosing any <code>x</code> with <code>0 &lt; x &lt; n</code> and <code>n % x == 0</code>.</li>
	<li>Replacing the number <code>n</code> on the chalkboard with <code>n - x</code>.</li>
</ul>

<p>Also, if a player cannot make a move, they lose the game.</p>

<p>Return <code>true</code> <em>if and only if Alice wins the game, assuming both players play optimally</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool divisorGame(int n) {
        
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

# Confusing Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/confusing-number

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

# Index Pairs of a String

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/index-pairs-of-a-string

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

# Duplicate Zeros

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/duplicate-zeros

## Content

<p>Given a fixed-length integer array <code>arr</code>, duplicate each occurrence of zero, shifting the remaining elements to the right.</p>

<p><strong>Note</strong> that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
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

# Armstrong Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/armstrong-number

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

# N-th Tribonacci Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/n-th-tribonacci-number

## Content

<p>The Tribonacci sequence T<sub>n</sub> is defined as follows:&nbsp;</p>

<p>T<sub>0</sub> = 0, T<sub>1</sub> = 1, T<sub>2</sub> = 1, and T<sub>n+3</sub> = T<sub>n</sub> + T<sub>n+1</sub> + T<sub>n+2</sub> for n &gt;= 0.</p>

<p>Given <code>n</code>, return the value of T<sub>n</sub>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int tribonacci(int n) {
        
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

# Check If a Number Is Majority Element in a Sorted Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array

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

# Diet Plan Performance

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/diet-plan-performance

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

# Unique Number of Occurrences

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/unique-number-of-occurrences

## Content

<p>Given an array of integers <code>arr</code>, return <code>true</code> <em>if the number of occurrences of each value in the array is <strong>unique</strong> or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
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

# Convert Binary Number in a Linked List to Integer

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer

## Content

<p>Given <code>head</code> which is a reference node to a singly-linked list. The value of each node in the linked list is either <code>0</code> or <code>1</code>. The linked list holds the binary representation of a number.</p>

<p>Return the <em>decimal value</em> of the number in the linked list.</p>

<p>The <strong>most significant bit</strong> is at the head of the linked list.</p>

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
    int getDecimalValue(ListNode* head) {
        
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

# Count Negative Numbers in a Sorted Matrix

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

## Content

<p>Given a <code>m x n</code> matrix <code>grid</code> which is sorted in non-increasing order both row-wise and column-wise, return <em>the number of <strong>negative</strong> numbers in</em> <code>grid</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
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

# Find a Corresponding Node of a Binary Tree in a Clone of That Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree

## Content

<p>Given two binary trees <code>original</code> and <code>cloned</code> and given a reference to a node <code>target</code> in the original tree.</p>

<p>The <code>cloned</code> tree is a <strong>copy of</strong> the <code>original</code> tree.</p>

<p>Return <em>a reference to the same node</em> in the <code>cloned</code> tree.</p>

<p><strong>Note</strong> that you are <strong>not allowed</strong> to change any of the two trees or the <code>target</code> node and the answer <strong>must be</strong> a reference to a node in the <code>cloned</code> tree.</p>

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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
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
