#include<bits/stdc++.h> 
using namespace std;

int main()
{
    vector<string>word_array={"zero","one","two","three","four","five","six","seven","eight","nine"};
    vector<int>num_array={0,1,2,3,4,5,6,7,8,9,};
    string number;

    cout<<"Enter the number between 0 to 9"<<"\n";
    while (cin>>number)
    {
        for (int i = 0; i < word_array.size(); i++)
        {
            if(word_array[i]==number)
            cout<<num_array[i]<<"\n";
        }
        
    }
    
}
