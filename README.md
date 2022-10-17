# hacktoberfest
Your first pull request


It picks an element as a pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways. 

Always pick the first element as a pivot.
Always pick the last element as a pivot (implemented below)
Pick a random element as a pivot.
Pick median as the pivot.
The key process in quickSort is a partition(). The target of partitions is, given an array and an element x of an array as the pivot, put x at its correct position in a sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.

Pseudo Code for recursive QuickSort function:

/* low  –> Starting index,  high  –> Ending index */

quickSort(arr[], low, high) {

    if (low < high) {

        /* pi is partitioning index, arr[pi] is now at right place */

        pi = partition(arr, low, high);

        quickSort(arr, low, pi – 1);  // Before pi

        quickSort(arr, pi + 1, high); // After pi

    }

}

Pseudo code for partition()  

/* This function takes last element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot */

partition (arr[], low, high)
{
    // pivot (Element to be placed at right position)
    pivot = arr[high];  

    i = (low – 1)  // Index of smaller element and indicates the 
    // right position of pivot found so far

    for (j = low; j <= high- 1; j++){

        // If current element is smaller than the pivot
        if (arr[j] < pivot){
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
}


// here i use lomoto algo for partation you can go with Hoar's also
=======
# Bubble sort

Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order (ascending or descending arrangement). The pass through the list is repeated until no swaps are needed
which indicates that the list is sorted.

## Complexity

| Name                  | Best            | Average             | Worst               | Memory    | Stable    | Comments  |
| --------------------- | :-------------: | :-----------------: | :-----------------: | :-------: | :-------: | :-------- |
| **Bubble sort**       | n               | n<sup>2</sup>       | n<sup>2</sup>       | 1         | Yes       |           |

## Algorithm

```Java
static void bubbleSort(int arr[], int n)
    {
        int i, j, temp;
        boolean swapped;
        for (i = 0; i < n - 1; i++)
        {
            swapped = false;
            for (j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    // swap arr[j] and arr[j+1]
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
 
            // IF no two elements were
            // swapped by inner loop, then break
            if (swapped == false)
                break;
        }
    }
```

# Merge Sort

Merge Sort is one of the most popular sorting algorithms that is based on the principle of Divide and Conquer Algorithm. A problem is divided into multiple sub-problems. Each sub-problem is solved individually. Finally, sub-problems are combined to form the final solution.

## Example
![Merge Sort Example](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e6/Merge_sort_algorithm_diagram.svg/1024px-Merge_sort_algorithm_diagram.svg.png)

## Complexity
| Name                  | Best            | Average             | Worst               | Memory    | Stable    | Comments  |
| --------------------- | :-------------: | :-----------------: | :-----------------: | :-------: | :-------: | :-------- |
| **Merge sort**       | nlogn            | nlogn               | nlogn               | n         | Yes       |           |
 
 ## Algorithm
 ```Java
 Merge_Sort(arr, beg, end)  
  
if beg < end  then
 mid = (beg + end)/2  
Merge_Sort(arr, beg, mid)  
Merge_Sort(arr, mid + 1, end)  
Merge (arr, beg, mid, end)  
end of if  
  
End Merge_Sort
```
Code for Merge function
```Java
void merge(int arr[],int low,int mid,int high)
   {
        
       int i,j,k,t[]=new int[max];
       i=low;
       k=low;
       j=mid+1;
       while(i<=mid && j<=high)
       {
         if(arr[i]<a[j])
         t[k++]=a[i++];
         else
          t[k++]=arr[j++];
          
       }
       while(i<=mid)
        t[k++]=arr[i++];
        while(j<=high)
        t[k++]=arr[j++];
        for(i=low;i<=high;i++)
        arr[i]=t[i];
   }    
```
# Selection Sort


Selection sort is a sorting algorithm, specifically an 
in-place comparison sort. It has O(n2) time complexity, 
making it inefficient on large lists, and generally 
performs worse than the similar insertion sort. 
Selection sort is noted for its simplicity, and it has 
performance advantages over more complicated algorithms 
in certain situations, particularly where auxiliary 
memory is limited.

![Algorithm Visualization](https://upload.wikimedia.org/wikipedia/commons/b/b0/Selection_sort_animation.gif)

![Algorithm Visualization](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)

## Complexity

| Name                  | Best            | Average             | Worst               | Memory    | Stable    | Comments  |
| --------------------- | :-------------: | :-----------------: | :-----------------: | :-------: | :-------: | :-------- |
| **Selection sort**    | n<sup>2</sup>   | n<sup>2</sup>       | n<sup>2</sup>       | 1         | No        |           |

## Algorithm
```Java
void sort(int arr[])
    {
        int n = arr.length;
 
        // One by one move boundary of unsorted subarray
        for (int i = 0; i < n-1; i++)
        {
            // Find the minimum element in unsorted array
            int min_idx = i;
            for (int j = i+1; j < n; j++)
                if (arr[j] < arr[min_idx])
                    min_idx = j;
 
            // Swap the found minimum element with the first
            // element
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
```


# Insertion Sort

## Complexity

| Name                  | Best            | Average             | Worst               | Space (Worst Case)|
| --------------------- | :-------------: | :-----------------: | :-----------------: | :----------------:| 
| **Insertion sort**    | n               | n<sup>2</sup>       | n<sup>2</sup>       | O(1)              | 


## Algorithm
```C++
#include <bits/stdc++.h>
using namespace std;
  
void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
 
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
```

# Heap Sort 
# C++ Program of Heap Sort :
// C++ program for implementation of Heap Sort
#include <iostream>
using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree
		heapify(arr, n, largest);
	}
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// One by one extract an element from heap
	for (int i = n - 1; i >= 0; i--) {
		// Move current root to end
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

// Driver program
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
}
            
## Time Complexity :
Time complexity : O(N*logN)
Auxiliary space: O(1)
		
# Stooge Sort :
# Program of Stooge Sort in C++
// C++ code to implement stooge sort
#include <iostream>
using namespace std;

// Function to implement stooge sort
void stoogesort(int arr[], int l, int h)
{
	if (l >= h)
		return;

	// If first element is smaller than last,
	// swap them
	if (arr[l] > arr[h])
		swap(arr[l], arr[h]);

	// If there are more than 2 elements in
	// the array
	if (h - l + 1 > 2) {
		int t = (h - l + 1) / 3;

		// Recursively sort first 2/3 elements
		stoogesort(arr, l, h - t);

		// Recursively sort last 2/3 elements
		stoogesort(arr, l + t, h);

		// Recursively sort first 2/3 elements
		// again to confirm
		stoogesort(arr, l, h - t);
	}
}

// Driver Code
int main()
{
	int arr[] = { 2, 4, 5, 3, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Calling Stooge Sort function to sort
	// the array
	stoogesort(arr, 0, n - 1);

	// Display the sorted array
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}

