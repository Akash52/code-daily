# DATA STRUCTURE AND ALGORITHM

<!-- toc -->
## Array
  * [Console log](#console-log)
  * [DataType,Naming,Rules](#DataType-Naming-Rules)
  * [Datatype,PRIMITIVE & REFERENCE](#Datatype-PRIMITIVE-REFERENCE)
  * [Type conversion](#Type-conversion)
  * [Numbers  & Math object](#Numbers-Math-object)
  * [String and its operation](#string-and-its-operation)
  * [object and literals](#object-and-literals)
  * [Date and time](#Date-and-time)
  
  

<!-- tocstop -->

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
