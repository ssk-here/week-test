----

# Counting Elements

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/counting-elements

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

# Kids With the Greatest Number of Candies

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

## Content

<p>There are <code>n</code> kids with candies. You are given an integer array <code>candies</code>, where each <code>candies[i]</code> represents the number of candies the <code>i<sup>th</sup></code> kid has, and an integer <code>extraCandies</code>, denoting the number of extra candies that you have.</p>

<p>Return <em>a boolean array </em><code>result</code><em> of length </em><code>n</code><em>, where </em><code>result[i]</code><em> is </em><code>true</code><em> if, after giving the </em><code>i<sup>th</sup></code><em> kid all the </em><code>extraCandies</code><em>, they will have the <strong>greatest</strong> number of candies among all the kids</em><em>, or </em><code>false</code><em> otherwise</em>.</p>

<p>Note that <strong>multiple</strong> kids can have the <strong>greatest</strong> number of candies.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
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

# Final Prices With a Special Discount in a Shop

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop

## Content

<p>You are given an integer array <code>prices</code> where <code>prices[i]</code> is the price of the <code>i<sup>th</sup></code> item in a shop.</p>

<p>There is a special discount for items in the shop. If you buy the <code>i<sup>th</sup></code> item, then you will receive a discount equivalent to <code>prices[j]</code> where <code>j</code> is the minimum index such that <code>j &gt; i</code> and <code>prices[j] &lt;= prices[i]</code>. Otherwise, you will not receive any discount at all.</p>

<p>Return an integer array <code>answer</code> where <code>answer[i]</code> is the final price you will pay for the <code>i<sup>th</sup></code> item of the shop, considering the special discount.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
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

# Running Sum of 1d Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/running-sum-of-1d-array

## Content

<p>Given an array <code>nums</code>. We define a running sum of an array as&nbsp;<code>runningSum[i] = sum(nums[0]&hellip;nums[i])</code>.</p>

<p>Return the running sum of <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
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

# Can Make Arithmetic Progression From Sequence

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence

## Content

<p>A sequence of numbers is called an <strong>arithmetic progression</strong> if the difference between any two consecutive elements is the same.</p>

<p>Given an array of numbers <code>arr</code>, return <code>true</code> <em>if the array can be rearranged to form an <strong>arithmetic progression</strong>. Otherwise, return</em> <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
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

# Kth Missing Positive Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/kth-missing-positive-number

## Content

<p>Given an array <code>arr</code> of positive integers sorted in a <strong>strictly increasing order</strong>, and an integer <code>k</code>.</p>

<p>Return <em>the</em> <code>k<sup>th</sup></code> <em><strong>positive</strong> integer that is <strong>missing</strong> from this array.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
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

# Design Parking System

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/design-parking-system

## Content

<p>Design a parking system for a parking lot. The parking lot has three kinds of parking spaces: big, medium, and small, with a fixed number of slots for each size.</p>

<p>Implement the <code>ParkingSystem</code> class:</p>

<ul>
	<li><code>ParkingSystem(int big, int medium, int small)</code> Initializes object of the <code>ParkingSystem</code> class. The number of slots for each parking space are given as part of the constructor.</li>
	<li><code>bool addCar(int carType)</code> Checks whether there is a parking space of <code>carType</code> for the car that wants to get into the parking lot. <code>carType</code> can be of three kinds: big, medium, or small, which are represented by <code>1</code>, <code>2</code>, and <code>3</code> respectively. <strong>A car can only park in a parking space of its </strong><code>carType</code>. If there is no space available, return <code>false</code>, else park the car in that size space and return <code>true</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        
    }
    
    bool addCar(int carType) {
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
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

# Richest Customer Wealth

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/richest-customer-wealth

## Content

<p>You are given an <code>m x n</code> integer grid <code>accounts</code> where <code>accounts[i][j]</code> is the amount of money the <code>i​​​​​<sup>​​​​​​th</sup>​​​​</code> customer has in the <code>j​​​​​<sup>​​​​​​th</sup></code>​​​​ bank. Return<em> the <strong>wealth</strong> that the richest customer has.</em></p>

<p>A customer&#39;s <strong>wealth</strong> is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum <strong>wealth</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
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

# Count the Number of Consistent Strings

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/count-the-number-of-consistent-strings

## Content

<p>You are given a string <code>allowed</code> consisting of <strong>distinct</strong> characters and an array of strings <code>words</code>. A string is <strong>consistent </strong>if all characters in the string appear in the string <code>allowed</code>.</p>

<p>Return<em> the number of <strong>consistent</strong> strings in the array </em><code>words</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
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

# Find the Highest Altitude

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-highest-altitude

## Content

<p>There is a biker going on a road trip. The road trip consists of <code>n + 1</code> points at different altitudes. The biker starts his trip on point <code>0</code> with altitude equal <code>0</code>.</p>

<p>You are given an integer array <code>gain</code> of length <code>n</code> where <code>gain[i]</code> is the <strong>net gain in altitude</strong> between points <code>i</code>​​​​​​ and <code>i + 1</code> for all (<code>0 &lt;= i &lt; n)</code>. Return <em>the <strong>highest altitude</strong> of a point.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
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

# Sum of Unique Elements

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/sum-of-unique-elements

## Content

<p>You are given an integer array <code>nums</code>. The unique elements of an array are the elements that appear <strong>exactly once</strong> in the array.</p>

<p>Return <em>the <strong>sum</strong> of all the unique elements of </em><code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
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

# Merge Strings Alternately

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/merge-strings-alternately

## Content

<p>You are given two strings <code>word1</code> and <code>word2</code>. Merge the strings by adding letters in alternating order, starting with <code>word1</code>. If a string is longer than the other, append the additional letters onto the end of the merged string.</p>

<p>Return <em>the merged string.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
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

# Sign of the Product of an Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/sign-of-the-product-of-an-array

## Content

<p>Implement a function <code>signFunc(x)</code> that returns:</p>

<ul>
	<li><code>1</code> if <code>x</code> is positive.</li>
	<li><code>-1</code> if <code>x</code> is negative.</li>
	<li><code>0</code> if <code>x</code> is equal to <code>0</code>.</li>
</ul>

<p>You are given an integer array <code>nums</code>. Let <code>product</code> be the product of all values in the array <code>nums</code>.</p>

<p>Return <code>signFunc(product)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        
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

# Sum of Digits of String After Convert

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/sum-of-digits-of-string-after-convert

## Content

<p>You are given a string <code>s</code> consisting of lowercase English letters, and an integer <code>k</code>. Your task is to <em>convert</em> the string into an integer by a special process, and then <em>transform</em> it by summing its digits repeatedly <code>k</code> times. More specifically, perform the following steps:</p>

<ol>
	<li><strong>Convert</strong> <code>s</code> into an integer by replacing each letter with its position in the alphabet (i.e.&nbsp;replace <code>&#39;a&#39;</code> with <code>1</code>, <code>&#39;b&#39;</code> with <code>2</code>, ..., <code>&#39;z&#39;</code> with <code>26</code>).</li>
	<li><strong>T</strong><strong>ransform</strong> the integer by replacing it with the <strong>sum of its digits</strong>.</li>
	<li>Repeat the <strong>transform</strong> operation (step 2) <code>k</code><strong> times</strong> in total.</li>
</ol>

<p>For example, if <code>s = &quot;zbax&quot;</code> and <code>k = 2</code>, then the resulting integer would be <code>8</code> by the following operations:</p>

<ol>
	<li><strong>Convert</strong>: <code>&quot;zbax&quot; ➝ &quot;(26)(2)(1)(24)&quot; ➝ &quot;262124&quot; ➝ 262124</code></li>
	<li><strong>Transform #1</strong>: <code>262124 ➝ 2 + 6 + 2 + 1 + 2 + 4 ➝ 17</code></li>
	<li><strong>Transform #2</strong>: <code>17 ➝ 1 + 7 ➝ 8</code></li>
</ol>

<p>Return the <strong>resulting</strong> <strong>integer</strong> after performing the <strong>operations</strong> described above.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int getLucky(string s, int k) {
        
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

# Convert 1D Array Into 2D Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/convert-1d-array-into-2d-array

## Content

<p>You are given a <strong>0-indexed</strong> 1-dimensional (1D) integer array <code>original</code>, and two integers, <code>m</code> and <code>n</code>. You are tasked with creating a 2-dimensional (2D) array with <code> m</code> rows and <code>n</code> columns using <strong>all</strong> the elements from <code>original</code>.</p>

<p>The elements from indices <code>0</code> to <code>n - 1</code> (<strong>inclusive</strong>) of <code>original</code> should form the first row of the constructed 2D array, the elements from indices <code>n</code> to <code>2 * n - 1</code> (<strong>inclusive</strong>) should form the second row of the constructed 2D array, and so on.</p>

<p>Return <em>an </em><code>m x n</code><em> 2D array constructed according to the above procedure, or an empty 2D array if it is impossible</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
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

# Count Elements With Strictly Smaller and Greater Elements 

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements

## Content

<p>Given an integer array <code>nums</code>, return <em>the number of elements that have <strong>both</strong> a strictly smaller and a strictly greater element appear in </em><code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countElements(vector<int>& nums) {
        
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

# Find the Difference of Two Arrays

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-difference-of-two-arrays

## Content

<p>Given two <strong>0-indexed</strong> integer arrays <code>nums1</code> and <code>nums2</code>, return <em>a list</em> <code>answer</code> <em>of size</em> <code>2</code> <em>where:</em></p>

<ul>
	<li><code>answer[0]</code> <em>is a list of all <strong>distinct</strong> integers in</em> <code>nums1</code> <em>which are <strong>not</strong> present in</em> <code>nums2</code><em>.</em></li>
	<li><code>answer[1]</code> <em>is a list of all <strong>distinct</strong> integers in</em> <code>nums2</code> <em>which are <strong>not</strong> present in</em> <code>nums1</code>.</li>
</ul>

<p><strong>Note</strong> that the integers in the lists may be returned in <strong>any</strong> order.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
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

# Minimum Bit Flips to Convert Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/minimum-bit-flips-to-convert-number

## Content

<p>A <strong>bit flip</strong> of a number <code>x</code> is choosing a bit in the binary representation of <code>x</code> and <strong>flipping</strong> it from either <code>0</code> to <code>1</code> or <code>1</code> to <code>0</code>.</p>

<ul>
	<li>For example, for <code>x = 7</code>, the binary representation is <code>111</code> and we may choose any bit (including any leading zeros not shown) and flip it. We can flip the first bit from the right to get <code>110</code>, flip the second bit from the right to get <code>101</code>, flip the fifth bit from the right (a leading zero) to get <code>10111</code>, etc.</li>
</ul>

<p>Given two integers <code>start</code> and <code>goal</code>, return<em> the <strong>minimum</strong> number of <strong>bit flips</strong> to convert </em><code>start</code><em> to </em><code>goal</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minBitFlips(int start, int goal) {
        
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

# Find the Index of the First Occurrence in a String

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

## Content

<p>Given two strings <code>needle</code> and <code>haystack</code>, return the index of the first occurrence of <code>needle</code> in <code>haystack</code>, or <code>-1</code> if <code>needle</code> is not part of <code>haystack</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int strStr(string haystack, string needle) {
        
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

# Evaluate Boolean Binary Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/evaluate-boolean-binary-tree

## Content

<p>You are given the <code>root</code> of a <strong>full binary tree</strong> with the following properties:</p>

<ul>
	<li><strong>Leaf nodes</strong> have either the value <code>0</code> or <code>1</code>, where <code>0</code> represents <code>False</code> and <code>1</code> represents <code>True</code>.</li>
	<li><strong>Non-leaf nodes</strong> have either the value <code>2</code> or <code>3</code>, where <code>2</code> represents the boolean <code>OR</code> and <code>3</code> represents the boolean <code>AND</code>.</li>
</ul>

<p>The <strong>evaluation</strong> of a node is as follows:</p>

<ul>
	<li>If the node is a leaf node, the evaluation is the <strong>value</strong> of the node, i.e. <code>True</code> or <code>False</code>.</li>
	<li>Otherwise, <strong>evaluate</strong> the node&#39;s two children and <strong>apply</strong> the boolean operation of its value with the children&#39;s evaluations.</li>
</ul>

<p>Return<em> the boolean result of <strong>evaluating</strong> the </em><code>root</code><em> node.</em></p>

<p>A <strong>full binary tree</strong> is a binary tree where each node has either <code>0</code> or <code>2</code> children.</p>

<p>A <strong>leaf node</strong> is a node that has zero children.</p>

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
    bool evaluateTree(TreeNode* root) {
        
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
