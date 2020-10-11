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
#### OUTPUT
```
56 5
51
56 5
61

```

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
#### OUTPUT
```
2
12 12
15 16
24
21

```
### [Find Remainder ](https://www.codechef.com/problems/FLOW002)
```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b;
    cin>>t;
    while(t--){
     cin>>a>>b;
     cout<<a%b<<endl;
    }
    return 0;
}
```
### Example
```
Input
3 
1 2
100 200
10 40

Output
3
300
50

```

### [First and Last Digit ](https://www.codechef.com/problems/FLOW004)
```cpp
#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--){
		int n;int b;
		cin>>n;
		int res =n%10; //This statement return First Digit
		while(n){
			b=n%10;
			n=n/10;  //Last Digit
		}
		cout<<b+res<<endl;  //simple sum
	}

	return 0;
}
```
### Example
```
Input
3 
1234
124894
242323

Output
5
5
5

```



