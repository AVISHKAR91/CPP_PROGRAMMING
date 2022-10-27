#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20], count=0;
    cout << "Enter a string:"<< endl;
    gets(str);
    for(int i=1; str[i] != '\0'; i++)
    {
        count++;
    }

    cout<<"no of words in string :" << count+1;

    return 0;
}