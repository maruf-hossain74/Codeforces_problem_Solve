#include <bits/stdc++.h>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the rightmost element as pivot
    int i = low - 1;  // Index of smaller element
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int t; cin >> t; while(t--) {
        int x,y,z,a,b,c,d,e;
        cin>>x>>y>>z>>a>>b>>c>>d>>e;
        x-=a;y-=b;z-=c;
        if(x>=0 && y>=0 && z>=0 && x+z>=d && y+z>=e && ((x+y+z)>=(d+e)) ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    return 0;
}