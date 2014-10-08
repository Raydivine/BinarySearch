#include "BinarySearch.h"
#include <stdio.h>

int binarySearch( int target, int array[], int startIndex, int endIndex ){

	int midIndex;
	midIndex = (startIndex + endIndex)/2;
	
	if( target < array[midIndex] ){	
		midIndex = (startIndex + midIndex)/2;
		
		if( array[midIndex] == target)
		return array[midIndex];

	}
	
	if( target > array[midIndex] ){	
		midIndex = (endIndex + midIndex)/2;
		
		if( array[midIndex] == target)
		return array[midIndex];
	}

}