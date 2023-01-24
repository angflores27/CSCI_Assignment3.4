//  Assignment 3.4
//  Angela Flores Figueroa
//  CSCI 40 Fall 2022
//

#include <iostream>
#include <iomanip> //for setw
using namespace std;

// function to replace highest and lowest with 0
void replace( int anArray[], int length)
{
    int lowest=anArray[0];
    int highest=anArray[0];
    
    //find highest value
    for (int i=0; i<length; i++)
        if (anArray[i]>highest) {
            highest=anArray[i]; }

    //find lowest value
    for (int i=0; i<length; i++)
        if (anArray[i]<lowest) {
            lowest=anArray[i]; }

    for (int i=0; i<length; i++)
        if (anArray[i]==lowest) {
            anArray[i]=0;
            break; }
    
    for (int i=0; i<length; i++)
        if (anArray[i]==highest) {
            anArray[i]=0;
            break; }
    
}

int main()
{
    
    //Part 1
    int a[50];
    cout<<"50 andom numbers are generated and saved in an integer array"<<endl;
    cout<<"================================================================="<<endl;
    cout<<"Those numbers are displayed as following: "<<endl;
    cout<<"================================================================="<<endl;
    
    for (int i=0; i<50; i++)
    { a[i]=rand()%100;
        cout<<setw(4)<<a[i]<<" ";
        
        //clean lines after 10 numbers to make it pretty
        if(i!=0 && (i+1) % 10 == 0 )
            cout<<endl;
    }
    cout<<"=================================================================="<<endl;
    
    //largest integer
    int max=0;
        for (int i=0; i<50; i++)
            if (a[i]>max) {
                max=a[i]; }
    cout<<"The largest integer is: "<<max<<endl;
                
                
    //smallest integer
    int min=a[0];
        for (int i=0; i<50; i++)
            if (a[i]<min) {
                min=a[i]; }
    cout<<"The smallest integer is: "<<min<<endl;
                    
                    
    // Sum of the integers
    int sum=0;
    for (int i=0; i<50; i++) {
        sum+=a[i];}
    cout<<"The sum of those integers is: "<<sum<<endl;
                    
    // counter of 70 and over
    int counter=0;
    for (int i=0; i<50; i++)
        if (a[i]>=70)
        {counter++;}
    
    cout<<"The total number of integers that are >= to 70 is: "<<counter<<endl;
    
    // Part 2
    int array[12]={ 3, 8, 2, 6, 5, 3, 4, 15, 8, 1, 10, 7 };
    
    //display new numbers
    replace(array, 12);
    
    cout<<"=================================================================="<<endl;
    cout<<"=================================================================="<<endl;
    
    cout<<"New number array after replacing the lowest and highest is: "<<endl;
    for (int i=0; i<12; i++)
        cout<<array[i]<<" ";
    
    cout<<endl;

    return 0;
                }
                
