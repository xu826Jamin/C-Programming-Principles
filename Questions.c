#include "Questions.h"

// Q1_for: Sums all multiples of 'num' between 1 and 1000 
// Returns 0 if num <= 0.
int Q1_for(int num){
		int sum = 0;
		int i;
		
		// If num is not positive, return 0 
		if (num <= 0) return 0;
	       // Loop through multiples of num only
	       for (i = num; i <= 1000; i += num) {
		       sum += i;
	       }

		// calculated sum:
		return sum;
}
// Q1_while: Sums all multiples of 'num' between 1 and 1000 
// Returns 0 if num <= 0.
int Q1_while(int num){
		int sum = 0;
		int i = num;
	
		// If num is not positive, return 0 
		if (num <= 0) return 0;

	       // Loop through multiples of num 
	       while (i <= 1000) {
		       sum += i;
		       i += num;
	       }

		// calculated sum:
		return sum;
}
// Q1_dowhile: Sums all multiples of 'num' between 1 and 1000 
// Returns 0 if num <= 0.
int Q1_dowhile(int num){
		int sum = 0;
		int i = num;

		// If num is not positive, return 0 
		if (num <= 0) return 0;
			   if (num > 0) {
				   do {
					   if (i > 1000) break;
					   sum += i;
					   i += num;
				   } while (i <= 1000);
			   }

		// calculated sum:
		return sum;
}
//===============================================================================================
// Q2_FPN: Floating point number range checker.
// Returns:
//   0 if Q2_input in [-2*threshold, -1*threshold)
//   1 if Q2_input in [-1*threshold, 0)
//   2 if Q2_input in [0, 1*threshold)
//   3 if Q2_input in [1*threshold, 2*threshold]
//  -999 for invalid threshold/out of range
int Q2_FPN(float Q2_input, float Q2_threshold){
	int result;
	// If threshold is not positive, return -999 
	if (Q2_threshold <= 0.0f) {
		result = -999;
	} else {
		// Range boundaries
		float a = -2.0f * Q2_threshold;
		float b = -1.0f * Q2_threshold;
		float c = 0.0f;
		float d = 1.0f * Q2_threshold;
		float e = 2.0f * Q2_threshold;

		// Check which range Q2_input falls into
		if (Q2_input >= a && Q2_input < b) {
			result = 0;
		} else if (Q2_input >= b && Q2_input < c) {
			result = 1;
		} else if (Q2_input >= c && Q2_input < d) {
			result = 2;
		} else if (Q2_input >= d && Q2_input <= e) {
			result = 3;
		} else {
			result = -999; // Out of range
		}
	}
	// Return the result
	return result;
}
//===============================================================================================
// Q3: Finds all perfect numbers <= Q3_input (>1).
// perfect[] -> perfect numbers found.
// Returns the count of perfect numbers found.
int Q3(int Q3_input, int perfect[]){
	// If input is <= 1, there are no perfect numbers
	if (Q3_input <= 1) return 0;

	int count = 0;
	int n, d;

	// Loop through all numbers from 2 to Q3_input
       for (n = 2; n <= Q3_input; ++n) {
	       int sum = 0;
	       for (d = 1; d <= n / 2; ++d) {
		       if (n % d == 0) sum += d;
	       }
	       if (sum == n) {
		       perfect[count++] = n;
	       }
       }
	// Return the number of perfect numbers 
	return count;

}
//===============================================================================================
// Q4_Bubble: Bubble sort on the input array in ascending order.
// Returns the number of passes performed until the array is sorted.
// The array is sorted in-place.
int Q4_Bubble(int array[], int size){
	// If array has 0 or 1 elements, no passes needed
	if (size <= 1) return 0;
	int passes = 0;
	int swapped;
	int i;

	// Repeat passes until no swaps are made (array is sorted)
       do {
	       swapped = 0;
	       for (i = 0; i <= size - 2; ++i) {
		       if (array[i] > array[i+1]) {
			       int tmp = array[i];
			       array[i] = array[i+1];
			       array[i+1] = tmp;
			       swapped = 1;
		       }
	       }
	       if (swapped) passes++;
       } while (swapped);
       return passes;
}