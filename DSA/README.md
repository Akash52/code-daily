 <h1 align="center"><img alt="wave" src="https://image.flaticon.com/icons/png/512/1465/1465611.png" width="50"><br> Data Structure and Algorithm </h1>
 
<!-- toc -->
## Array

  * [1.Program to find largest element in an array](#Program-to-find-largest-element-in-an-array)
  * [2.Program to find sum of elements in a given array](#Program-to-find-sum-of-elements-in-a-given-array)
  * [3.Find the Number Occurring Odd Number of Times](#Find-the-Number-Occurring-Odd-Number-of-Times)
  * [4.Find the Missing Number](#This-method-uses-the-technique-of-XOR-to-solve-the-problem)
  * [5. Write a program to reverse an array or string](#This-method-uses-the-technique-of-XOR-to-solve-the-problem)
  * [6.Program for array rotation](#Program-for-array-rotation)
  * [7.Stock Buy Sell to Maximize Profit](#Stock-Buy-Sell-to-Maximize-Profit)
  * [8.Generating SubArray](#Generating-SubArray)
  * [9.Largest Sum Contiguous Subarray](#Largest-Sum-Contiguous-Subarray)
  * [10.Largest Sum Contiguous Subarray Better Aproach](#Largest-Sum-Contiguous-Subarray-Better-Aproach)
  * [11.Largest Sum Contiguous Subarray Better Aproach Optimize solution](#Largest-Sum-Contiguous-Subarray-Better-Aproach-Optimize-solution-O(n))
  
  ## Math

  * [1.Count Digit problem](#Count-Digit-problem)
  * [2.Count digit Recursive Solution](#count-digit-Recursive-Solution)
  * [3.Program for factorial of a number](#Program-for-factorial-of-a-number)
  * [4. Program for factorial of a number recursive solution](#Program-for-factorial-of-a-number-recursive-solution)
  * [4.Prime Numbers](#Prime-Numbers)
  
   ## Bit Magic
   
    
  * [1.and or xor program](#and-or-xor-program)
  * [2.Right Shift Oprerator Program](#Right-Shift-Oprerator-Program)
  * [3.Check whether K-th bit is set or not](#Check-whether-K-th-bit-is-set-or-not)
  * [4.Cpp code to swap using XOR](#Cpp-code-to-swap-using-XOR)
  * [5.Find the Number Occurring Odd Number of Times](#Find-the-Number-Occurring-Odd-Number-of-Times)
  
  ## Recursion
  

  * [1.program to check if an array is sorted or not using recursion](#program-to-check-if-an-array-is-sorted-or-not-using-recursion)
  * [2.find power of given number using recursion](#find-power-of-given-number-using-recursion)
  * [3.fibonacci series c++ recursion](#fibonacci-series-CPP-recursion)
  * [4.Given a array check if it is sorted OR not](#Given-a-array-check-if-it-is-sorted-OR-not)
  
  
  Given a array check if it is sorted OR not
  

 
  
  

  
  
 
  

  
 
   
  
  
 
  
  

 

    
  

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
### Write a program to reverse an array or string
```cpp
#include<iostream>
using namespace std;
void ArrayRever(int arr[],int start,int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
}
void PrintArray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	ArrayRever(arr, 0, n-1);
	cout << "Reversed array is" << endl;
    	PrintArray(arr, n);
}
```
### Program for array rotation

```cpp
#include<iostream>
using namespace std;

void leftRotatebyone(int arr[],int n)
{
	int temp=arr[0];
	for(int i=0;i<n-1;i++)
	{
	arr[i]=arr[i+1];
	arr[i]=temp;
	}
}
void leftRotate(int arr[],int d,int n)
{
	for(int i=0;i<d;i++)
	leftRotatebyone(arr,n);
}
void PrintRotateArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);	
	leftRotate(arr,2,n);
	PrintRotateArray(arr,n);
	return 0;
}
```
### Stock Buy Sell to Maximize Profit
```cpp
#include<iostream>
using namespace std;

int stock(int arr[],int n)
{
	int profit=0;
	for(int i=1;i<n;i++)
	if(arr[i]>arr[i-1])
	profit+=(arr[i]-arr[i-1]);
	return profit;
}
int main()
{
	int arr[]={1,5,3,8,12};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<stock(arr,n);
	return 0;
}
```
### Generating SubArray
```cpp
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){		
			for(int k=i;k<=j;k++){
				cout<<a[k]<<" ,";
			}
			cout<<endl;
		}
	}
	return 0;
}
```
### Largest Sum Contiguous Subarray
```cpp
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[1000];
	int maximumSum=0;
	int currentSum=0;
	int left=-1;
	int right=-1;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			currentSum=0;			
			for(int k=i;k<=j;k++){
				
			currentSum+=a[k];
			}
			if(currentSum>maximumSum){
				maximumSum=currentSum;
				left=i;
				right=j;
			}
		}
	cout<<"MaximumSum is "<<maximumSum<<endl;
	for(int k=left;k<=right;k++ ){
		cout<<a[k]<<",";
	}
	return 0;
}
```
  
### Largest Sum Contiguous Subarray Better Aproach

```cpp
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[1000];
	int cumSum[1000]={0};
	int maximumSum=0;
	int currentSum=0;
	int left=-1;
	int right=-1;
	
	cin>>a[0];
	cumSum[0]=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		cumSum[i]=cumSum[i-1]+a[i];	
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			currentSum=0;
			currentSum=cumSum[j]-cumSum[i-1];
				if(currentSum>maximumSum){
				maximumSum=currentSum;
				left=i;
				right=j;
			}
		}
	}
	cout<<"MaximumSum is "<<maximumSum<<endl;
	for(int k=left;k<=right;k++ ){
		cout<<a[k]<<",";
	}	
	return 0;
}
```
### Largest Sum Contiguous Subarray Better Aproach Optimize solution O(n) 
```cpp
#include<iostream>
using namespace std;

int maxSubArraySum(int a[],int n)
{
	int max_so_far=a[0];
	int curr_max=a[0];
	for(int i=0;i<n;i++){
		curr_max=max(a[i],curr_max+a[i]);
		max_so_far=max(max_so_far,curr_max);
	}
	return max_so_far;
}

int main()
{
	int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
	
	int n=sizeof(a)/sizeof(a[0]);
	int max_sum=maxSubArraySum(a,n)
	cout<<"Maximum contiguous sum is "<<max_sum;
	
}
```

## MATH

### Count Digit problem

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
### Count digit Recursive Solution

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
### Program for factorial of a number
```cpp
#include<iostream>
using namespace std;

unsigned int factorial(unsigned int n)
{
	if(n==0)
	return 1;
	return n*factorial(n-1);
}

int main()
{
	int num=5;
	cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
	return 0;
}
```
### Program for factorial of a number recursive solution
```cpp
#include<iostream>
using namespace std;

int FactorialRecurision(int n)
{
	if(n==0)
	return 1;
	for(int i=0;i<n;i++)
	return n*FactorialRecurision(n-1);
}

int FactorialIteration(int n)
{
	int res=1;
	for(int i=2;i<n;i++)
	res*=i;
	return res;
}

int main()
{
	int n=5;
	
	cout<<"Factorial Recurision "<<FactorialRecurision(n)<<endl;
	cout<<"Factorial Iteration "<<FactorialRecurision(n);
	
}
```
### Prime Numbers
```cpp
include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if(n<=1)
	return false;
	for(int i=2;i<n;i++)
	if(n%i==0)
	return false;
	return true;
}

int main()
{
	isPrime(11) ? cout << " true\n" : 
                  cout << " false\n";
}
```

## Bit Magic

### Right Shift Oprerator Program
```cpp
//Left Shift Oprerator
#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int x=3;
	cout<<(x<<1)<<endl;
	cout<<(x<<2)<<endl;
	cout<<(x<<3)<<endl;
	
	int y=4;
	int z=(x<<y);
	cout<<z;
	
	return 0;
	
}

/*	3*2 POW 1 =6
	3*2 POW 2 =12
	3*2 POW 2 =12
*/
```
### Left Shift Oprerator Program
```cpp
//Left Shift Oprerator
#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int x=33;
	cout<<(x>>1)<<endl;
	cout<<(x>>2)<<endl;
	cout<<(x>>3)<<endl;
	
	int y=4;
	int z=(x>>y);
	cout<<z;
	
	return 0;
	
}

/*	
	x=x / 2 pow y
	33/2 pow 1 = 16
	33/2 pow 2 = 8
	
*/
```

### Check whether K-th bit is set or not
```cpp
//Check whether K-th bit is set or not

#include<iostream>
using namespace std;

void isKthBit(int n,int k)

{
		if(n&(1<<(k-1)))
		cout<<"SET";
		else
		cout<<"NOT SET";
}

int main()
{
	int n,k;
	cin>>n>>k;
	isKthBit(n,k);
	return 0;
}
```
### Cpp code to swap using XOR
```cpp
#include<iostream>
using namespace std;

int main()
{
	int x=10,y=5;
	
	x=x^y; //x 15(1111)
	y=x^y;	// y 10(1010)
	x=x^y;	// x 5(0101)
	
	cout<<"After swapping X=" <<x<<",Y="<<y;
	return 0;

}
```
## Recursion

### program to check if an array is sorted or not using recursion

```cpp
#include<iostream>
using namespace std;

bool isSorted(int *a,int n)
{
	if(n==1)
	return true;
	if(a[0]<a[1] && isSorted(a+1,n-1))
	{
		return true;
	 } 
	 return false;	
}
int main()
{
	int a[]={1,3,7,8,10};
	int n=5;
	if(isSorted(a,n)){
		cout<<"Yes sorted ! ";
	}
	else{
		cout<<" Not sorted";
	}	
	return 0;
}
```
### find power of given number using recursion
```cpp
#include<iostream>
using namespace std;

int power(int a,int b)
{
	if(b==0)
	return 1;
	return a*power(a,b-1);
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b)<<endl;	
	return 0;
}
```
### fibonacci series CPP recursion
```cpp
//fibonacci series c++ recursion
#include<iostream>
using namespace std;

int fib(int n){
	if(n<=1)
		return n;
		return fib(n-1)+fib(n-2);
}
int main()
{
	
	int n=6;
	cout<<fib(n)<<endl;
	return 0;
}
```
### Given a array check if it is sorted OR not
```cpp
//Given a array, check if it is sorted OR not !
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *a,int n)
{
	if(n==1)
	return true;
	if(a[0]<a[1] && isSorted(a+1,n-1)){
		return true;
	}
	return false;
}

int main()
{
	int a[]={1,2,3,4,5};
	int n=5;
	
	if(isSorted(a,n)){
		cout<<"Yes Sorted !";
	}
	else{
		cout<<"Not Sorted !";
	}
	return 0;
}
```






