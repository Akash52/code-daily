#include<iostream>
using namespace std; 

int N=1000000;
int p[N+1];

void primeSeieve(int n){

p[0]=p[1]=0;
p[2]=1;

//Let us mark all Odd Number as Prime

for(int i=3;i<=n;i+=2){
    p[i]=1;
}

//Non prime nuber as 0

for(int i=3;i<=n;i+2){

}



}