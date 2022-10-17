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

		
# Shell Sort
# C++ Program of Shell Sort :
// C++ implementation of Shell Sort
#include <iostream>
using namespace std;

/* function to sort arr using shellSort */
int shellSort(int arr[], int n)
{
	// Start with a big gap, then reduce the gap
	for (int gap = n/2; gap > 0; gap /= 2)
	{
		// Do a gapped insertion sort for this gap size.
		// The first gap elements a[0..gap-1] are already in gapped order
		// keep adding one more element until the entire array is
		// gap sorted
		for (int i = gap; i < n; i += 1)
		{
			// add a[i] to the elements that have been gap sorted
			// save a[i] in temp and make a hole at position i
			int temp = arr[i];

			// shift earlier gap-sorted elements up until the correct
			// location for a[i] is found
			int j;			
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			
			// put temp (the original a[i]) in its correct location
			arr[j] = temp;
		}
	}
	return 0;
}

void printArray(int arr[], int n)
{
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {12, 34, 54, 2, 3}, i;
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Array before sorting: \n";
	printArray(arr, n);

	shellSort(arr, n);

	cout << "\nArray after sorting: \n";
	printArray(arr, n);

	return 0;
}

## Time Complexity :
Time complexity of Shell sort is O(n^2).
Worst Case Complexity
The worst-case complexity for shell sort is  O(n^2)
Best Case Complexity
When the given array list is already sorted the total count of comparisons of each interval is equal to the size of the given array.
So best case complexity is Ω(n log(n))
Average Case Complexity
The shell sort Average Case Complexity depends on the interval selected by the programmer. 
θ(n log(n)2).
The Average Case Complexity: O(n*log n)
Space Complexity:
The space complexity of the shell sort is O(1).
---
		
# Comb Sort :
# Program of Comb Sort in C++
// C++ implementation of Comb Sort
#include<bits/stdc++.h>
using namespace std;

// To find gap between elements
int getNextGap(int gap)
{
	// Shrink gap by Shrink factor
	gap = (gap*10)/13;

	if (gap < 1)
		return 1;
	return gap;
}

// Function to sort a[0..n-1] using Comb Sort
void combSort(int a[], int n)
{
	// Initialize gap
	int gap = n;

	// Initialize swapped as true to make sure that
	// loop runs
	bool swapped = true;

	// Keep running while gap is more than 1 and last
	// iteration caused a swap
	while (gap != 1 || swapped == true)
	{
		// Find next gap
		gap = getNextGap(gap);

		// Initialize swapped as false so that we can
		// check if swap happened or not
		swapped = false;

		// Compare all elements with current gap
		for (int i=0; i<n-gap; i++)
		{
			if (a[i] > a[i+gap])
			{
				swap(a[i], a[i+gap]);
				swapped = true;
			}
		}
	}
}

// Driver program
int main()
{
	int a[] = {8, 4, 1, 56, 3, -44, 23, -6, 28, 0};
	int n = sizeof(a)/sizeof(a[0]);

	combSort(a, n);

	printf("Sorted array: \n");
	for (int i=0; i<n; i++)
		printf("%d ", a[i]);

	return 0;
}
## Time Complexity:
Average case time complexity of the algorithm is Ω(N^2/2^p), where p is the number of increments. The worst-case complexity of this algorithm is O(n^2) and the Best Case complexity is O(nlogn). 
Auxiliary Space : O(1). 
=======

# Tree Sort:
# Program of Tree Sort in C++
// C++ program to implement Tree Sort
#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int key;
	struct Node *left, *right;
};

// A utility function to create a new BST Node
struct Node *newNode(int item)
{
	struct Node *temp = new Node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

// Stores inorder traversal of the BST
// in arr[]
void storeSorted(Node *root, int arr[], int &i)
{
	if (root != NULL)
	{
		storeSorted(root->left, arr, i);
		arr[i++] = root->key;
		storeSorted(root->right, arr, i);
	}
}

/* A utility function to insert a new
Node with given key in BST */
Node* insert(Node* node, int key)
{
	/* If the tree is empty, return a new Node */
	if (node == NULL) return newNode(key);

	/* Otherwise, recur down the tree */
	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);

	/* return the (unchanged) Node pointer */
	return node;
}

// This function sorts arr[0..n-1] using Tree Sort
void treeSort(int arr[], int n)
{
	struct Node *root = NULL;

	// Construct the BST
	root = insert(root, arr[0]);
	for (int i=1; i<n; i++)
		root = insert(root, arr[i]);

	// Store inorder traversal of the BST
	// in arr[]
	int i = 0;
	storeSorted(root, arr, i);
}

// Driver Program to test above functions
int main()
{
	//create input array
	int arr[] = {5, 4, 7, 2, 11};
	int n = sizeof(arr)/sizeof(arr[0]);

	treeSort(arr, n);

		for (int i=0; i<n; i++)
	cout << arr[i] << " ";

	return 0;
}
## Time Complexity :
Average Case Time Complexity: O(n log n) Adding one item to a Binary Search tree on average takes O(log n) time. Therefore, adding n items will take O(n log n) time
Worst Case Time Complexity: O(n^2). The worst case time complexity of Tree Sort can be improved by using a self-balancing binary search tree like Red Black Tree, AVL Tree. Using self-balancing binary tree Tree Sort will take O(n log n) time to sort the array in worst case. 

Auxiliary Space: O(n)
---
