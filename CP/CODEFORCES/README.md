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

```cpp
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int k=2;k<=1e8;k++)
		{
		int p=pow(2,k);
		--p;
		if(n%p==0){
			cout<<n/p<<"\n";
		}	break;
			
		}
	}
	return 0;
}
```

```cpp
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
	int t,a,d;
	char ch;
	while(cin>>t)
	{
		a=0;
		d=0;
		for(int i=1;i<=t;i++)
		{
			cin>>ch;
			if(ch=='A')
			a=a+1;
			else
			d=d+1;
		}
		if(a>d)
		cout<<"Anton"<<endl;
		else if(d>a)
		cout<<"Danik"<<endl;
		else
		cout<<"Friendship"<<endl;
	}
	return 0;
}
```

```
#include<iostream>

using namespace std;

int main()

{
	long long int a,b;
	cin>>a>>b;
	int res=0;
	
	while(a<=b){
		a*=3;
		b*=2;
		res++;
	}
	cout<<res<<endl;
	
	return 0;
}
```

```
nclude<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	float sum;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
		
	}
	cout<<sum/n;
}
```

```
#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
		}
	}
	cout<<count;	
}
```



