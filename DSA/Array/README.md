
### Program for array rotation
- `int temp=arr[0];` first we store our first element into temp variable
- `for(int i=0;i<n-1;i++)` next iterate thorugh an array element
- `arr[i]=arr[i+1];` current array increment by one
- `arr[n-1]=temp;` assign our temp variable to last index
