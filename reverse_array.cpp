#include<iostream>
using namespace std;

int main()
{
    int arr[50];
    int num, i;

    cout<<"How many element you want to insert in an array:"<<endl;
    cin>>num;

    for(i=0; i<num; i++)
    {
        cout<<"enter "<< i << "element"<<endl;
        cin>>arr[i];
    }

    cout<<"element in array is:"<<endl;
    for(i=0; i<num; i++)
    {
        cout<<","<<arr[i];
    }


    int j, temp;
    for(i=0,j=num-1; i<num/2; i++,j--)
    {
        
        
            temp=arr[i];
            arr[i] = arr[j];
            arr[j]=temp;
        
    }

    cout<<"\n reverse all element is :"<< endl;

    
    for(i=0; i<num; i++)
    {
        cout<<arr[i]<<",";
    }
}