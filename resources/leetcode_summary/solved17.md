----

# First Bad Version

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/first-bad-version

## Content

<p>You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.</p>

<p>Suppose you have <code>n</code> versions <code>[1, 2, ..., n]</code> and you want to find out the first bad one, which causes all the following ones to be bad.</p>

<p>You are given an API <code>bool isBadVersion(version)</code> which returns whether <code>version</code> is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
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

# Move Zeroes

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/move-zeroes

## Content

<p>Given an integer array <code>nums</code>, move all <code>0</code>&#39;s to the end of it while maintaining the relative order of the non-zero elements.</p>

<p><strong>Note</strong> that you must do this in-place without making a copy of the array.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
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

# Nim Game

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/nim-game

## Content

<p>You are playing the following Nim Game with your friend:</p>

<ul>
	<li>Initially, there is a heap of stones on the table.</li>
	<li>You and your friend will alternate taking turns, and <strong>you go first</strong>.</li>
	<li>On each turn, the person whose turn it is will remove 1 to 3 stones from the heap.</li>
	<li>The one who removes the last stone is the winner.</li>
</ul>

<p>Given <code>n</code>, the number of stones in the heap, return <code>true</code><em> if you can win the game assuming both you and your friend play optimally, otherwise return </em><code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canWinNim(int n) {
        
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

# Range Sum Query - Immutable

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/range-sum-query-immutable

## Content

<p>Given an integer array <code>nums</code>, handle multiple queries of the following type:</p>

<ol>
	<li>Calculate the <strong>sum</strong> of the elements of <code>nums</code> between indices <code>left</code> and <code>right</code> <strong>inclusive</strong> where <code>left &lt;= right</code>.</li>
</ol>

<p>Implement the <code>NumArray</code> class:</p>

<ul>
	<li><code>NumArray(int[] nums)</code> Initializes the object with the integer array <code>nums</code>.</li>
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
    
    int sumRange(int left, int right) {
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
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

# Power of Three

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/power-of-three

## Content

<p>Given an integer <code>n</code>, return <em><code>true</code> if it is a power of three. Otherwise, return <code>false</code></em>.</p>

<p>An integer <code>n</code> is a power of three, if there exists an integer <code>x</code> such that <code>n == 3<sup>x</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isPowerOfThree(int n) {
        
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

# Counting Bits

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/counting-bits

## Content

<p>Given an integer <code>n</code>, return <em>an array </em><code>ans</code><em> of length </em><code>n + 1</code><em> such that for each </em><code>i</code><em> </em>(<code>0 &lt;= i &lt;= n</code>)<em>, </em><code>ans[i]</code><em> is the <strong>number of </strong></em><code>1</code><em><strong>&#39;s</strong> in the binary representation of </em><code>i</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> countBits(int n) {
        
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

# Reverse String

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/reverse-string

## Content

<p>Write a function that reverses a string. The input string is given as an array of characters <code>s</code>.</p>

<p>You must do this by modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a> with <code>O(1)</code> extra memory.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        
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

# Reverse Vowels of a String

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/reverse-vowels-of-a-string

## Content

<p>Given a string <code>s</code>, reverse only all the vowels in the string and return it.</p>

<p>The vowels are <code>&#39;a&#39;</code>, <code>&#39;e&#39;</code>, <code>&#39;i&#39;</code>, <code>&#39;o&#39;</code>, and <code>&#39;u&#39;</code>, and they can appear in both lower and upper cases, more than once.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string reverseVowels(string s) {
        
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

# Intersection of Two Arrays

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/intersection-of-two-arrays

## Content

<p>Given two integer arrays <code>nums1</code> and <code>nums2</code>, return <em>an array of their <span data-keyword="array-intersection">intersection</span></em>. Each element in the result must be <strong>unique</strong> and you may return the result in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
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

# Intersection of Two Arrays II

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/intersection-of-two-arrays-ii

## Content

<p>Given two integer arrays <code>nums1</code> and <code>nums2</code>, return <em>an array of their intersection</em>. Each element in the result must appear as many times as it shows in both arrays and you may return the result in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
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

# Guess Number Higher or Lower

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/guess-number-higher-or-lower

## Content

<p>We are playing the Guess Game. The game is as follows:</p>

<p>I pick a number from <code>1</code> to <code>n</code>. You have to guess which number I picked.</p>

<p>Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.</p>

<p>You call a pre-defined API <code>int guess(int num)</code>, which returns three possible results:</p>

<ul>
	<li><code>-1</code>: Your guess is higher than the number I picked (i.e. <code>num &gt; pick</code>).</li>
	<li><code>1</code>: Your guess is lower than the number I picked (i.e. <code>num &lt; pick</code>).</li>
	<li><code>0</code>: your guess is equal to the number I picked (i.e. <code>num == pick</code>).</li>
</ul>

<p>Return <em>the number that I picked</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
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

# Ransom Note

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/ransom-note

## Content

<p>Given two strings <code>ransomNote</code> and <code>magazine</code>, return <code>true</code><em> if </em><code>ransomNote</code><em> can be constructed by using the letters from </em><code>magazine</code><em> and </em><code>false</code><em> otherwise</em>.</p>

<p>Each letter in <code>magazine</code> can only be used once in <code>ransomNote</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
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

# Find the Difference

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-difference

## Content

<p>You are given two strings <code>s</code> and <code>t</code>.</p>

<p>String <code>t</code> is generated by random shuffling string <code>s</code> and then add one more letter at a random position.</p>

<p>Return the letter that was added to <code>t</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        
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

# Is Subsequence

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/is-subsequence

## Content

<p>Given two strings <code>s</code> and <code>t</code>, return <code>true</code><em> if </em><code>s</code><em> is a <strong>subsequence</strong> of </em><code>t</code><em>, or </em><code>false</code><em> otherwise</em>.</p>

<p>A <strong>subsequence</strong> of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., <code>&quot;ace&quot;</code> is a subsequence of <code>&quot;<u>a</u>b<u>c</u>d<u>e</u>&quot;</code> while <code>&quot;aec&quot;</code> is not).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isSubsequence(string s, string t) {
        
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

# Arranging Coins

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/arranging-coins

## Content

<p>You have <code>n</code> coins and you want to build a staircase with these coins. The staircase consists of <code>k</code> rows where the <code>i<sup>th</sup></code> row has exactly <code>i</code> coins. The last row of the staircase <strong>may be</strong> incomplete.</p>

<p>Given the integer <code>n</code>, return <em>the number of <strong>complete rows</strong> of the staircase you will build</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int arrangeCoins(int n) {
        
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

# Find All Numbers Disappeared in an Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

## Content

<p>Given an array <code>nums</code> of <code>n</code> integers where <code>nums[i]</code> is in the range <code>[1, n]</code>, return <em>an array of all the integers in the range</em> <code>[1, n]</code> <em>that do not appear in</em> <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
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

# Repeated Substring Pattern

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/repeated-substring-pattern

## Content

<p>Given a string <code>s</code>, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
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

# Island Perimeter

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/island-perimeter

## Content

<p>You are given <code>row x col</code> <code>grid</code> representing a map where <code>grid[i][j] = 1</code> represents&nbsp;land and <code>grid[i][j] = 0</code> represents water.</p>

<p>Grid cells are connected <strong>horizontally/vertically</strong> (not diagonally). The <code>grid</code> is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).</p>

<p>The island doesn&#39;t have &quot;lakes&quot;, meaning the water inside isn&#39;t connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don&#39;t exceed 100. Determine the perimeter of the island.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
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

# Number Complement

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/number-complement

## Content

<p>The <strong>complement</strong> of an integer is the integer you get when you flip all the <code>0</code>&#39;s to <code>1</code>&#39;s and all the <code>1</code>&#39;s to <code>0</code>&#39;s in its binary representation.</p>

<ul>
	<li>For example, The integer <code>5</code> is <code>&quot;101&quot;</code> in binary and its <strong>complement</strong> is <code>&quot;010&quot;</code> which is the integer <code>2</code>.</li>
</ul>

<p>Given an integer <code>num</code>, return <em>its complement</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findComplement(int num) {
        
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

# License Key Formatting

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/license-key-formatting

## Content

<p>You are given a license key represented as a string <code>s</code> that consists of only alphanumeric characters and dashes. The string is separated into <code>n + 1</code> groups by <code>n</code> dashes. You are also given an integer <code>k</code>.</p>

<p>We want to reformat the string <code>s</code> such that each group contains exactly <code>k</code> characters, except for the first group, which could be shorter than <code>k</code> but still must contain at least one character. Furthermore, there must be a dash inserted between two groups, and you should convert all lowercase letters to uppercase.</p>

<p>Return <em>the reformatted license key</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        
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
