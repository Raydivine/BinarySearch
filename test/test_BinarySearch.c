#include "unity.h"
#include "BinarySearch.h"
#include <stdio.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_BinarySearch_for_search_3_inside_the_middle_array(){
	int ans;
	int array[] = {1,2,3,4,5};
	int target  = 3 ;
	int startIndex = 1;
	int endIndex = 5;
	
	ans = binarySearch( target, array, startIndex , endIndex );	
	TEST_ASSERT_EQUAL( 3, ans );
	
}

void test_BinarySearch_for_search_3_inside_the_front_array(){
	int ans;
	int array[] = {1,3,9,235};
	int target  = 3 ;
	int startIndex = 1;
	int endIndex = 4;
	
	ans = binarySearch( target, array, startIndex , endIndex );	
	TEST_ASSERT_EQUAL( 3, ans );
	
}

void test_BinarySearch_for_search_8_inside_the_front_array(){
	int ans;
	int array[] = {1,3,8, 9,235,333, 444};
	int target  = 8 ;
	int startIndex = 1;
	int endIndex = 7;
	
	printf("start\n");
	ans = binarySearch( target, array, startIndex , endIndex );	
	printf("end");
	TEST_ASSERT_EQUAL( 8, ans );
	
}

void xtest_BinarySearch_for_search_2_inside_the_front_array(){
	int ans;
	int array[] = {1,2,3, 4,5,6, 7,8,9,10};
	int target  = 2 ;
	int startIndex = 1;
	int endIndex = 10;
	
	ans = binarySearch( target, array, startIndex , endIndex );	
	TEST_ASSERT_EQUAL( 2, ans );
	
}

void xtest_BinarySearch_for_search_5_inside_the_front_array(){
	int ans;
	int array[] = {1,2,3, 4,5,6, 7,8,9,10};
	int target  = 5 ;
	int startIndex = 1;
	int endIndex = 10;
	
	printf("start\n");
	ans = binarySearch( target, array, startIndex , endIndex );	
	printf("end");
	
	TEST_ASSERT_EQUAL( 5 , ans );
	
}
void test_BinarySearch_for_search_8_inside_the_back_array(){
	int ans;
	int array[] = {1,3,8, 9,235,333, 444};
	int target  = 333 ;
	int startIndex = 1;
	int endIndex = 7;
	
	ans = binarySearch( target, array, startIndex , endIndex );	
	TEST_ASSERT_EQUAL( 333 , ans );
	
}