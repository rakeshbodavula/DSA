<style>
H1{color:red;}
H2{color:blue;}
H4{color:green;}
</style>
# Kadane's Algorithm

## Tags: 
#### <ul><li>Dynamic Programming</li></ul>
#### <ul><li>Greedy</li></ul>

```
    Initialisation:
        maximum=INT_MIN  so that if only negative numbers are present they can't be any error
        sum=0
    
    Algo:
        1) Traverse each element in the array
        2) Each time add the element to the sum variable
        3) And check if it is greater than the max sum till time
        4) If greater assign that to maximum variable
        5) If the sum is less that 0 then make it 0.
```

## Time Complexity: **O(n)**
## Space Complexity: **O(1)**