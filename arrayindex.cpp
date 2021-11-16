#include<iostream>
using namespace std;

void arrayindex(int arr[],int idx){
    /* hmara expectation hai ki arrayindex(arr,1) index 1 se n tk print kr hi lega , hmko faith hai,
    aur faith aur expectation ko jodne k liye hm bss arr[0] print krenge aur baki arrayindex(arr,1)
    handle kr lega*/
    int size = sizeof(arr)/sizeof(arr[0]);
    //base case
    if (idx == size){ 
        return;
    }
    cout << arr[idx] << "\n";
    arrayindex(arr,idx + 1);

}

int main()
{
   int size;
   cin >> size;
   int arr1[size];
   for (int i = 0; i < size; i++){
        cin >> arr1[i];
    }
    arrayindex(arr1,0); 
}