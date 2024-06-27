#include <iostream>
usingnamespace std;

voidswap(intarr[] , int pos1, int pos2){
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

intpartition(intarr[], int low, int high, int pivot){
	inti = low;
	int j = low;
	while( i<= high){
		if(arr[i] > pivot){
			i++;
		}
		else{
			swap(arr,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

voidquickSort(intarr[], int low, int high){
	if(low < high){
	int pivot = arr[high];
	intpos = partition(arr, low, high, pivot);
	
	quickSort(arr, low, pos-1);
	quickSort(arr, pos+1, high);
	}
}

intmain()
{
	int n ;
	cout<<" enter the size of array";
	cin>>n;
	intarr[n];
	for( inti = 0 ; i< n; i++){
		cin>>arr[i];
	}
	quickSort(arr, 0 , n-1);
	cout<<"The sorted array is: ";
	for( inti = 0 ; i< n; i++){
		cout<<arr[i]<<"\t";
	}
	
}
