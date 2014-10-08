#include "unity.h"
#include "BinarySearch.h"
#include <stdio.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_BinarySearch_for_same_Start_and_end_index_should_return_negative1(){
	int ans;
	int array[] = {1,3,8, 9,235,333, 444};
	int target  = 8 ;
	int startIndex = 7;
	int endIndex = 7;
	
	ans = binarySearch( target, array, startIndex , endIndex );	
	TEST_ASSERT_EQUAL( -1, ans );
}

void test_BinarySearch_for_search_8_inside_the_front_array(){
	int ans;
	int array[] = {1,3,8, 9,235,333, 444};
	int target  = 8 ;
	int startIndex = 1;
	int endIndex = 7;
	
	ans = binarySearch( target, array, startIndex , endIndex );	
	TEST_ASSERT_EQUAL( 8, ans );
}

void test_BinarySearch_for_search_333_inside_the_back_array(){
	int ans;
	int array[] = {1,3,8, 9,235,333, 444};
	int target  = 333 ;
	int startIndex = 1;
	int endIndex = 7;
	
	ans = binarySearch( target, array, startIndex , endIndex );	
	TEST_ASSERT_EQUAL( 333 , ans );
}

void test_BinarySearch_for_search_2_inside_the_2ndfront_array(){
	int ans;
	int array[] = {1,2,3,4,5,6, 7,8,9,10};
	int target  = 2 ;
	int startIndex = 1;
	int endIndex = 10;
	
	ans = binarySearch( target, array, startIndex , endIndex );	
	TEST_ASSERT_EQUAL( 2, ans );	
}

void test_BinarySearch_for_search_9_inside_the_2ndback_array(){
	int ans;
	int array[] = {1,2,3, 4,5,6, 7,8,9,10};
	int target  = 9;
	int startIndex = 1;
	int endIndex = 10;
	
	ans = binarySearch( target, array, startIndex , endIndex );	
	TEST_ASSERT_EQUAL( 9 , ans );
}
