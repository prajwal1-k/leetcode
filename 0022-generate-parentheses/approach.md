## 🚀 Approach: Recursive Backtracking

The key idea is to build the valid parentheses strings **character by character**, making sure the intermediate states are always valid.

### 🔑 Core Rules:
1. You can add an opening parenthesis `'('` **as long as** you haven’t used all `n` open brackets.
2. You can add a closing parenthesis `')'` **only if** the number of closing brackets used so far is **less than** the number of opening brackets.
3. The recursion stops when the length of the current string is `2 * n` (i.e. all pairs used).

---

### 🧠 Intuition

- At every step, we make a choice to add either `'('` or `')'`.
- We backtrack if we reach an invalid state (e.g. more closing than opening brackets).
- This ensures that all generated strings are **balanced and valid**.

---

### 🧮 Recursion Tree Example (n = 2)

Start: ""
├── "(" → open=1, close=0
│ ├── "((" → open=2, close=0
│ │ └── "(()" → open=2, close=1
│ │ └── "(())" → ✅ valid
│ └── "()" → open=1, close=1
│ └── "()(" → open=2, close=1
│ └── "()()" → ✅ valid


---

### 🧩 Why Backtracking?

Backtracking ensures we explore **all possible valid combinations**, while pruning paths that are invalid early—making it much more efficient than brute force generation of all permutations.

---

### ✅ Base Case

When the string has `2 * n` characters, we know it's a valid configuration and we add it to the result list.

---

This method guarantees:
- **Correctness** by building valid states only.
- **Completeness** by exploring all valid combinations.
- **Efficiency** through pruning invalid paths early.
