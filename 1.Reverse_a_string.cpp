#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    string s1;
    int i=0, len=0, temp=0;
    cout<<"Enter string : ";
    getline(cin, s1);
    
    while(s1[temp]!='\0')
    {
    	len++;
    	temp++;
	}
    
    char s2[len];
    while(i<len)
    {
    	s2[i]= s1[len-i-1];
    	i++;
	}
    
    cout<<s2;
    
} 

