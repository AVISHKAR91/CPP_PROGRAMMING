#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    
    char ch;
    cout<<"Enter any character, name or any  special character:"<<endl;
    ch=getchar();

    if(isalpha(ch))
    {
        cout<<"It is alphabet"<<endl;
    }
    else if(isdigit(ch))
    {
        cout<<"It is number"<<endl;
    }
    else
    {
        cout<<"It is special character"<<endl;
    }
}