
### Left Rotate Array By ONE
- `int temp=arr[0];` first we store our first element into temp variable
- `for(int i=0;i<n-1;i++)` next iterate thorugh an array element
- `arr[i-1]=arr[i];`  We Copy 2nd element in arr(i-1)
- `arr[n-1]=temp;` assign our temp variable to last index
