#include "BinarySearch.h"
#include <stdio.h>

int binarySearch( int target, int array[], int startIndex, int endIndex ){

	int midIndex, Ans;
	
	midIndex= (startIndex + endIndex)/2;
	printf("%d\n", array[midIndex]);
	
	if( target == array[midIndex] )
		return array[midIndex];
	
	if( target < array[midIndex] ){	
		Ans = (startIndex + midIndex)/2;
		printf("%d\n", array[Ans]);
		
		if( array[Ans] == target)
			return array[Ans];
		// else if( array[Ans+1] == target)
			// return array[Ans+1];
		// else if( array[Ans-1] == target)
			// return array[Ans-1];		
		binarySearch( target, array, Ans ,  midIndex);
	}
	
	if( target > array[midIndex] ){	
		Ans = (endIndex + midIndex)/2;
		printf("%d\n", array[Ans]);
		
		if( array[Ans] == target)
			return array[Ans];
		// else if( array[Ans+1] == target)
			// return array[Ans+1];
		// else if( array[Ans-1] == target)
			// return array[Ans-1];
		binarySearch( target, array, midIndex, Ans );
	}
	


}