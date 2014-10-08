#include "BinarySearch.h"
#include <stdio.h>

int binarySearch( int target, int array[], int startIndex, int endIndex ){
	int midIndex;
	midIndex= (startIndex + endIndex)/2;
	
	if( target == array[midIndex] )
		return array[midIndex];
	else if( startIndex == endIndex)
		return -1;
	else if( target < array[midIndex] )
		binarySearch(target, array, startIndex, midIndex - 1);
	else 
		binarySearch(target, array, midIndex + 1, endIndex);
}

