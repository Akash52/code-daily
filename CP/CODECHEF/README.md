<p align="center">
<img src="https://s3.amazonaws.com/discourseproduction/original/2X/7/7d7715c7d2d2b9ce40a931b5d8b26823dc9b4e12.png" width="350"/>
</p>

### [Sum OR Difference](https://www.codechef.com/problems/DIFFSUM)
```cpp
#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int sum,a,b;
    cin>>a>>b;
    if(a>b){
        sum=a-b;
    }
    else{
        sum=a+b;
    }
    cout<<sum;
}
```
### OUTPUT

 ### [Add Two Numbers ](https://www.codechef.com/problems/FLOW001)
```cpp
#include <bits/stdc++.h> 
using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}
```
