 <h1 align="center"><img alt="wave" src="https://image.flaticon.com/icons/png/512/1465/1465611.png" width="50"><br> Data Structure and Algorithm </h1>
<!-- toc -->
## Array
  * [1.Program to find largest element in an array](#Program-to-find-largest-element-in-an-array)
  * [2.Program to find sum of elements in a given array](#Program-to-find-sum-of-elements-in-a-given-array)
  * [3.Find the Number Occurring Odd Number of Times](#Find-the-Number-Occurring-Odd-Number-of-Times)
   * [4.Find the Missing Number](#This-method-uses-the-technique-of-XOR-to-solve-the-problem)
  
        
  
  
  
  

<!-- tocstop -->


## Array

### Program to find largest element in an array
```cpp
#include<iostream>
using namespace std;

int FindMax(int arr[],int n)
{
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	return max;
}
int main()
{
	int arr[]={20,45,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<" Maximum is  "<<FindMax(arr,n);
	return 0;	
}
```
### Program to find sum of elements in a given array
```cpp
#include<iostream>
using namespace std;
int SumArray(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	sum +=arr[i];
	return sum;
}

int main()
{
	int arr[]={10,20,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Sum of Array element is "<<SumArray(arr,n);
}
```
### Find the Number Occurring Odd Number of Times
```cpp
#include<iostream>
using namespace std;
int OddOccurance(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	res ^=arr[i];
	return res;
}
int main()
{
	int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Odd occurance is "<<OddOccurance(arr,n);	 
}
```
### This method uses the technique of XOR to solve the problem
```cpp
#include<iostream>
using namespace std;

int findMissing(int arr[],int n)
{
	int x1=0;
	int x2=1;
	for(int i=0;i<n;i++)
	x1=x1^arr[i];
	for(int i=1;i<n;i++)
	x2=x2^i;
	return(x1^x2);
}

int main()
{
	int arr[]={1,2,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Missing Number is "<<findMissing(arr,n);
	return 0;
}
```


## MATH

### 1.Count_Digit

```cpp
//Simple Iterative Solution
#include<iostream>
using namespace std;

int countDigit(long long n)
{
	int count=0;
	while(n!=0){
		n=n/10;
		++count;
	}
	return count;
}

int main()
{
	long long n;
	cout<<"Enter any length number ";
	cin>>n;
	cout<<"Number of digits : "<<countDigit(n);
	return 0;
}

```

```
input :
Enter any length number 454545
output :
Number of digits 6
```
### 2.count_digit

```cpp
//Recursive Solution
#include<iostream>
using namespace std;

int countDigit(long long n)
{
	if(n==0)
	return 0;
	return 1+countDigit(n/10);
}

int main()
{
long long n;
	cout<<"Enter any length number ";
	cin>>n;
	cout<<"Number of digits : "<<countDigit(n);
	
	return 0;
}
```
```
input :
Enter any length number 454545
output :
Number of digits 6
```
