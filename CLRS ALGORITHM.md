

## Analysis of Algorithm

### The efficient algorithm

- algorithm efficiency A measure of the <b>average execution time necessary</b> for an algorithm to complete work on a set of data.

### Average, Best and worst case analysis
<b>Worst case</b> <br> 
- Defines the input for which the algorithm takes a long time (slowest
time to complete).
- Input is the one for which the algorithm runs the slowest.

<b> Best case</b> <br>

- Defines the input for which the algorithm takes the least time (fastest
time to complete).
- Input is the one for which the algorithm runs the fastest.

<b> Average case </b> <br>

- Provides a prediction about the running time of the algorithm.
- Run the algorithm many times, using many different inputs that come
from some distribution that generates these inputs, compute the total
running time (by adding the individual times), and divide by the
number of trials.
- Assumes that the input is random.

#### Some common orders of growth seen often in complexity analysis are

```
O(1)	          constant
O(log n)	      logarithmic
O(n)	          linear
O(n log n)	    "n log n"
O(n2)	          quadratic
O(n3)	          cubic
nO(1)	          polynomial
2powO(n)	      exponential
```

### Amortize Analysis
- This analysis is used when the occasional operation is very slow, 
but most of the operations which are executing very frequently are faster. 
Data structures we need amortized analysis for Hash Tables, Disjoint Sets etc.

