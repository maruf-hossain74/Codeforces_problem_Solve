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
    int n,p1,p2,p3,t1,t2,l,r,x,y,ans;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    cin>>l>>r;

    ans+=(r-l)*p1;
    for (int i=1; i<n; i++){
        cin>>x>>y;
        ans+=(min(x-r,t1)*p1)+max(0,min(x-r-t1,t2))*p2+max(0,x-r-t1-t2)*p3;
        ans+=(y-x)*p1;
        l=x;
        r=y;
    }

    cout<<ans<<endl;
    return 0;
}