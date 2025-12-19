#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Questions.h"

int successCount;
int passCount;

int totalTestCases, totalAssertions;

int assert_equal_int(int, int);
int assert_equal_char(char, char);
void tearDown(int result);

//=========Question 1==================================
    
    void TestQ1_for() {

        int actual = Q1_for(3);
        int expected = 166833;
        int result = assert_equal_int(expected, actual);

        actual = Q1_for(11);
        expected = 45045;
        result &= assert_equal_int(expected, actual);

        actual = Q1_for(37);
        expected = 13986;
        result &= assert_equal_int(expected, actual);
        
        tearDown(result);		
    }

    void TestQ1_while() {

        int actual = Q1_while(3);
        int expected = 166833;
        int result = assert_equal_int(expected, actual);

        actual = Q1_while(11);
        expected = 45045;
        result &= assert_equal_int(expected, actual);

        actual = Q1_while(37);
        expected = 13986;
        result &= assert_equal_int(expected, actual);
        
		tearDown(result);
    }

    void TestQ1_dowhile() {

        int actual = Q1_dowhile(3);
        int expected = 166833;
        int result = assert_equal_int(expected, actual);

        actual = Q1_dowhile(11);
        expected = 45045;
        result &= assert_equal_int(expected, actual);

        actual = Q1_dowhile(37);
        expected = 13986;
        result &= assert_equal_int(expected, actual);
        
		tearDown(result);
    }

    void TestQ1_for_Custom()
    {
        int result = 1;
        // Custom test cases
        result &= assert_equal_int(0, Q1_for(0));         // num = 0, should return 0
        result &= assert_equal_int(0, Q1_for(-5));        // num < 0, should return 0
        result &= assert_equal_int(500500, Q1_for(1));    // num = 1, sum of 1..1000
        tearDown(result);
    }

    void TestQ1_while_Custom()
    {
        int result = 1;
        // Custom test cases
        result &= assert_equal_int(0, Q1_while(0));         // num = 0, should return 0
        result &= assert_equal_int(0, Q1_while(-5));        // num < 0, should return 0
        result &= assert_equal_int(500500, Q1_while(1));    // num = 1, sum of 1..1000
        tearDown(result);
    }

    void TestQ1_dowhile_Custom()
    {
        int result = 1;
        // Custom test cases
        result &= assert_equal_int(0, Q1_dowhile(0));         // num = 0, should return 0
        result &= assert_equal_int(0, Q1_dowhile(-5));        // num < 0, should return 0
        result &= assert_equal_int(500500, Q1_dowhile(1));    // num = 1, sum of 1..1000
        tearDown(result);
    }

//===========================================================
//=================Question 2================================
    void TestQ2_Model() {

        float threshold = 3.7;
	    float input = -10.1;
        int actual = Q2_FPN(input, threshold);
        int expected = -999;
        int result = assert_equal_int(expected, actual);

        input = -6.2;
        actual = Q2_FPN(input, threshold);
        expected = 0;
        result &= assert_equal_int(expected, actual);

        input = -2.4;
        actual = Q2_FPN(input, threshold);
        expected = 1;
        result &= assert_equal_int(expected, actual);

        input = 1.8;
        actual = Q2_FPN(input, threshold);
        expected = 2;
        result &= assert_equal_int(expected, actual);

        input = 4.9;
        actual = Q2_FPN(input, threshold);
        expected = 3;
        result &= assert_equal_int(expected, actual);

        input = 91.1;
        actual = Q2_FPN(input, threshold);
        expected = -999;
        result &= assert_equal_int(expected, actual);

        tearDown(result);
    }   

    void TestQ2_Custom()
    {
        int result = 1;
        // Custom test cases
        result &= assert_equal_int(-999, Q2_FPN(2.0, 0.0));   // threshold = 0, invalid
        result &= assert_equal_int(1, Q2_FPN(-0.5, 1.0));     // input in [-1,0)
        result &= assert_equal_int(3, Q2_FPN(2.0, 1.0));      // input in [1,2]
        tearDown(result);
    }


//===========================================================
//=================Question 3================================   
    void TestQ3_none() {

        int input = 5;
        int expected[100]={0};
        int actual[100]={0};
        int expectedCount = 0;
        int actualCount = Q3(input,actual);
        int result = assert_equal_int(expectedCount, actualCount);
	    
        int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);

        tearDown(result);
    }

    void TestQ3_10() {

        int input = 10;
        int expected[100]={0},actual[100]={0};
        expected[0]= 6;
        int expectedCount=1;
        int actualCount = Q3(input,actual);
        int result = assert_equal_int(expectedCount, actualCount);
	    
        int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);

        tearDown(result);
    }

    void TestQ3_1000() {

        int input = 1000;
        int expected[100]={0};
        int actual[100]={0};
        expected[0]=6;
        expected[1]=28;
        expected[2]=496;
        int expectedCount=3;
        int actualCount = Q3(input,actual);
        int result = assert_equal_int(expectedCount, actualCount);
	
        int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);

        tearDown(result);
    }
      
    void TestQ3_10000() {

        int input = 10000;
        int expected[100]={0},actual[100]={0};
        expected[0]=6;
        expected[1]=28;
        expected[2]=496;
        expected[3]=8128;
        int expectedCount=4;
        int actualCount = Q3(input,actual);
        int result = assert_equal_int(expectedCount, actualCount);
    
    	int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);

        tearDown(result);
    }
    
    void TestQ3_neg() {

        int input = -1000;
        int expected[100]={0},actual[100]={0};
        int expectedCount=0;
        int actualCount = Q3(input,actual);
        int result = assert_equal_int(expectedCount, actualCount);
	    
        int i;
        for (i=0;i<100;i++)
          	result &= assert_equal_int(expected[i], actual[i]);

        tearDown(result);
    }

    void TestQ3_Custom()
    {
        int result = 1;
        int arr[100] = {0}, exp[100] = {0};
    exp[0] = 6; exp[1] = 28; exp[2] = 496; exp[3] = 8128;
    int count = Q3(10000, arr);
    result &= assert_equal_int(4, count);
    int i;
    for (i = 0; i < 4; i++) result &= assert_equal_int(exp[i], arr[i]);
        tearDown(result);
    }



//===========================================================
//=================Question 4================================ 
    void TestQ4_8() {

        int targetArray[8] = {6, 13, 0, -7, 28, 1, 45, -4};
		int inputSize = 8;
        int expectedArray[8] = {-7, -4, 0, 1, 6, 13, 28, 45};
        int expectedPass = 7;
        int actualPass = Q4_Bubble(targetArray, inputSize);        
        int result = assert_equal_int(expectedPass, actualPass);

        int i;
        for (i = 0; i < inputSize; i++)
          	result &= assert_equal_int(expectedArray[i], targetArray[i]);

        tearDown(result);
    } 

    void TestQ4_16() {

        int targetArray[16] = {11, 3, -2, 88, 10, 25, 103, 91, -44, 0, 233, -85, 1015, -7, -411, -27};
		int inputSize = 16;
        int expectedArray[16] = {-411, -85, -44, -27, -7, -2, 0, 3, 10, 11, 25, 88, 91, 103, 233, 1015};
        int expectedPass = 15;
        int actualPass = Q4_Bubble(targetArray, inputSize);        
        int result = assert_equal_int(expectedPass, actualPass);

        int i;
        for (i = 0; i < inputSize; i++)
          	result &= assert_equal_int(expectedArray[i], targetArray[i]);

        tearDown(result);
    } 

    void TestQ4_25() {

        int targetArray[25] = {889, 12, 69, 7, -25, 25, 353, -1422, -1, -65535, 11, 89, 63, -375, 227, 55, 3688, -324, 71, -6, -31, 88, 477, -5225, -91};
		int inputSize = 25;
        int expectedArray[25] = {-65535, -5225, -1422, -375, -324, -91, -31, -25, -6, -1, 7, 11, 12, 25, 55, 63, 69, 71, 88, 89, 227, 353, 477, 889, 3688};

        // three possible passes, all valid.  We are not grading for efficiency optimization.
        int expectedPass1 = 23;
        int expectedPass2 = 24;
        int expectedPass3 = 25;         

        int actualPass = Q4_Bubble(targetArray, inputSize);        
        int result;

        if(actualPass == expectedPass1)
            result = assert_equal_int(expectedPass1, actualPass);
        else if(actualPass == expectedPass2)
            result = assert_equal_int(expectedPass2, actualPass);
        else
            result = assert_equal_int(expectedPass3, actualPass);

        int i;
        for (i = 0; i < inputSize; i++)
          	result &= assert_equal_int(expectedArray[i], targetArray[i]);

        tearDown(result);
    } 

    void TestQ4_Custom()
    {
        int result = 1;
        int arr[5] = {5, 4, 3, 2, 1};
        int exp[5] = {1, 2, 3, 4, 5};
        int passes = Q4_Bubble(arr, 5);
        result &= assert_equal_int(4, passes);
        int i;
        for (i = 0; i < 5; i++) result &= assert_equal_int(exp[i], arr[i]);
        tearDown(result);
    }

  
    
//===========================================================
	int runAllTests(int argc, char const *argv[]) {
		
		TestQ1_for();   
		TestQ1_while(); 
        TestQ1_dowhile();    
        TestQ1_for_Custom();    
        TestQ1_while_Custom();   
        TestQ1_dowhile_Custom();  

        TestQ2_Model();
        TestQ2_Custom();  

        TestQ3_none();
        TestQ3_10();
        TestQ3_1000();
        TestQ3_10000();
        TestQ3_Custom(); 

        TestQ4_8();
        TestQ4_16();
        TestQ4_25();
        TestQ4_Custom();  

		return (successCount == totalAssertions);
	}

int main(int argc, char const *argv[]) {
  		
	successCount = 0;
	passCount = 0;
    totalAssertions = 0;
    totalTestCases = 0;
    
	int successCode = runAllTests(argc, argv);

	return successCode? EXIT_SUCCESS : EXIT_FAILURE;
}
    
int assert_equal_int(int a, int b)
{
	int result = (a == b);
	if(result)	
		successCount++;

    totalAssertions++;
	return result;
}

int assert_equal_char(char a, char b)
{
	int result = (a == b);
	if(result)	
		successCount++; 

    totalAssertions++;
	return result;
}

void tearDown(int result)
{
    totalTestCases++;
    
    if(result) 
    {
        passCount++;
    } 
}