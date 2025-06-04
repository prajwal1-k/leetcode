# Palindrome Number Checker in C

## 📘 Problem Statement

Given an integer `x`, determine whether it is a **palindrome** — that is, whether it reads the same backward as forward.

### 🔹 Example:

- Input: `121` → Output: `true`
- Input: `-121` → Output: `false`
- Input: `10` → Output: `false`

---

## 🧠 Approach

We solve this problem **without converting the number into a string**, using simple integer operations for efficiency and clarity.

### 🔑 Key Observations:
1. **Negative numbers are never palindromes** (e.g., `-121`).
2. **Numbers ending in 0** (but not 0 itself) can't be palindromes (e.g., `10`).
3. Instead of reversing the whole number, we **reverse only half** to avoid integer overflow.

---

## 🔁 Algorithm Steps

1. **Edge Cases**: 
   - If `x < 0` or (`x % 10 == 0` and `x != 0`), return `false`.

2. **Reverse Half**:
   - Initialize `reversed = 0`.
   - While `x > reversed`:
     - Take the last digit using `x % 10`.
     - Build the reversed half.
     - Divide `x` by 10 to remove the last digit.

3. **Compare Halves**:
   - For even-length numbers: `x == reversed`
   - For odd-length numbers: `x == reversed / 10` (middle digit doesn't affect palindrome check)

---
