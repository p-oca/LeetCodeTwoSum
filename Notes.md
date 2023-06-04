# Notes
## Maps/Unordered Maps
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

## Complexity
- Program complexity refers to how the performance of a program changes as the input size increases.
- It helps us understand how the program's execution time and memory usage scale with larger inputs.
- Complexity is often expressed using Big O notation, which describes the upper bound of the growth rate.
- Big O notation provides a way to compare algorithms and determine their efficiency.
- Lower complexity indicates better performance and scalability.
- Complexity can be affected by factors such as loops, nested loops, recursive calls, and data structures.
- Algorithms with different complexities may have significantly different execution times for large inputs.
- Analyzing complexity helps in optimizing code and choosing the most efficient algorithms for a given problem.
- It's important to consider complexity when working with large datasets or time-sensitive applications.

### Analogy for Complexity
- Imagine baking cookies as writing a program.
- The recipe you follow represents the code you write.
- The ingredients and measurements are like the data you use in your program.
- The oven temperature and baking time represent the computational resources and execution time of the program.
- Just as different recipes produce cookies with different flavors and textures, different programs have varying functionalities and behaviors.
- The efficiency of baking multiple batches of cookies at once is analogous to optimizing your program's performance and resource usage.
- Similarly, finding a more efficient recipe that requires fewer ingredients and less time represents improving your program's algorithm.
- As you gain experience and learn new techniques, you become a better baker, just as you become a more proficient programmer with practice.
- Just like sharing your delicious cookies with others, you can share your code with the programming community to learn, collaborate, and contribute.

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
