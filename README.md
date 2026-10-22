# LeetCode Solutions in C++

A small collection of C++ solutions to LeetCode problems. Each file contains a `Solution` method intended for the LeetCode judge.

## Problems

| Problem | Approach | Complexity |
| --- | --- | --- |
| First Unique Character in a String | Count lowercase-letter frequencies, then scan for the first count of one. | O(n) time, O(1) extra space |
| Longest Consecutive Sequence | Sort the values and count each consecutive run. | O(n log n) time |

The longest-consecutive solution sorts the input vector in place. The first-unique-character solution assumes the input contains lowercase English letters.

## Files

- `first-unique-character-in-a-string.cpp`
- `longest-consecutive-sequence.cpp`
