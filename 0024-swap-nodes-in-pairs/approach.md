
---

## 💡 Approach

We use an **iterative approach** with a **dummy node** to simplify edge cases and make pointer manipulation easier.

### Steps:
1. Create a dummy node that points to the head of the list.
2. Use a pointer `prev` initialized to the dummy node.
3. Loop while there are at least two nodes to swap:
   - Identify the nodes to swap: `first` and `second`.
   - Adjust pointers to perform the swap:
     - `prev->next = second`
     - `first->next = second->next`
     - `second->next = first`
   - Move `prev` two steps ahead.
4. Return `dummy.next` which points to the new head after swaps.

This ensures **in-place node swapping** with no extra memory usage.

---

## ⏱️ Time and Space Complexity

| Complexity       | Value                          |
|------------------|--------------------------------|
| Time Complexity  | `O(n)` — Traverse each node once |
| Space Complexity | `O(1)` — Constant space (in-place) |

> `n` is the number of nodes in the linked list.

---

## 🧪 Example Usage

### Input:
```c
1 -> 2 -> 3 -> 4
