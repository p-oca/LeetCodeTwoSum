# Notes
- The **brute force** method was a simple example of nesting *for loops* and applying *if statements*
- The **optimal method** however made use of *maps*, more specifically *unordered maps*. Something we didn't learn so much at uni
  - Maps by comparison to vectors are *containers that have unique keys* that are assigned to each relevant value and can be used to *access or lookup these values*
    - Vectors however are indexed and are accessed through their numerical (int) assignment
  - *Maps have a static allocation of memory*, in contrast to vectors which dynamically allocate based on the needs of the program
  - Vectors are linear in nature and work best for *random access* and *dynamically resizing*, whereas maps are better for searching, inserting and deleting based on the keys
     - Most notably in this program, maps or unordered maps have been useful for the the `find` function as it's used to find the complement within the program.

|           | Maps/Unordered Maps                              | Vectors                                   |
| --------- | ----------------------------------------------- | ----------------------------------------- |
| Purpose   | Associates values with unique keys               | Stores a collection of elements            |
| Access    | Accessed using keys (key-value pairs)            | Accessed using indexes (like an array)     |
| Ordering  | Sorted order (maps) or no specific order (unordered maps) | Maintains the order of elements           |
| Memory    | Requires additional memory for keys and values   | Stores elements in contiguous memory       |
| Operations| Efficient key-based operations (insertion, deletion, search) | Efficient random access, dynamic resizing |
| Usage     | Lookup tables, associative arrays, dictionaries | Lists of elements, ordered sequences      |

# Pseudocode
```
function twoSum(nums, target):
    create an empty map called mp

    for i from 0 to length of nums:
        calculate complement = target - nums[i]
        
        if complement exists in mp:
            return [mp[complement], i] // Return the indices of the complement and current element
        
        store nums[i] as key in mp with value i // Store the current element in the map

    return [-1, -1] // If no solution found, return [-1, -1]

```
