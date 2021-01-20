```cpp
#include<iostream>
using namespace std;

int main()
{
	long long n;
	int count=0;
	cin>>n;
	while(n!=0){
		if(n%10==4 || n%10==7){
			count++;
		}
		n/=10;	
	}
	if(count==4 || count==7){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
```

```cpp
#include<iostream>
using namespace std;

int main()
{
	int n,a,b,c(0),m(0);
	cin>>n;
	while(n--){
		scanf("%d %d",&a,&b);
		c-=a;
		c+=b;
		if(c>m){
			m=c;
		}
	}
	printf("%d\n",m);
	return 0;
}
```
