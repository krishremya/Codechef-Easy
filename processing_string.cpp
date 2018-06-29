/*This program is to get the string as per the user's wish and if the string contains digit then add those and store them in variable named sum and finally print them.*/

#include <iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    //Declaring the number of test cases.
    int t;
    int sum;
    int i;
    cin>>t;
    while(t--)
    {
        sum=0;
        string S;
        
        //Accepting the string
        cin>>S;
        
        //Traversing through the string.
        for(i=0;i<S.length();i++)
        {
            //Checking if its digit.
            if(isdigit(S[i]))
                
            //Ensuring character encoding is used in ASCII
            sum=sum+S[i]-48;
        }
        cout<<sum<<"\n";
    }
    return 0;
} 
