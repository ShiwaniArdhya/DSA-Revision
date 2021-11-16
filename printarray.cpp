#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    if(n == 0){
        return;
    }

    printarray(arr, n - 1);
    cout << arr[n -1] << "\n";

}

int main()
{
    int size;
    cin >> size;
    int arr1[size];
    
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    printarray(arr1,size);
}
