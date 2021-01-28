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

```
#include<iostream>
using namespace std;

int main()
{
	int n,t;
	string s;
	cin>>n>>t>>s;
	
	while(t--)
	{
		
		for(int i=1;i<n;i++)
		{
			if(s[i]=='G' && s[i-1]=='B')
			{
				s[i]='B';
				s[i-1]='G';
				i++;
			}
		}
	}
	cout<<s;
	return 0;
}
```
```
#include<iostream>
using namespace std;

int main()
{
	int n,x(0);
	cin>>n;
	string s;
	while(n--)
	{
		
		cin>>s;
		if(s[1]=='+')
		++x;
		else
		--x;
	}
	cout<<x<<endl;
}
```
```
#include<iostream>
using namespace std;

int main()
{
	string s;
	int n; 
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s.length()>10)
		{
			cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
	}
	return 0;
}
```

```
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main ()
{
    int a,b,c,d;

    while (cin >> a >> b >> c >> d)
    {
        if ((a < b+c && b < a+c && c < a+b) || (a < b+d && b < a+d && d < a+b) || (a < d+c && d < a+c && c < a+d) || (d < b+c && b < d+c && c < d+b))
            cout << "TRIANGLE" << endl;
        else if ((a == b+c || b == a+c || c == a+b) || (a == b+d || b == a+d || d == a+b) || (a == d+c || d == a+c || c == a+d) || (d == b+c || b == d+c || c == d+b))
            cout << "SEGMENT" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
```



