#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter integers: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int avg;
    int sum=0;
    for(int i=0;i<n;i++) {
        sum+= arr[i];
    }
    avg = sum/n;
    cout<<"Average of given numbers is :"<<avg;
    return 0;
}
