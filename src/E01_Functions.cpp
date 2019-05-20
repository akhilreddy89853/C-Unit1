//
//  E01_Functions.cpp
//  Unit1_exercise1_understanding_functions
//

/*
 
 Note:
 Implement the functions in this exercise file to make the tests
 pass in E01_FunctionsSpec.cpp file.
 
 */


//
// Note:
//  Think of all the edge cases.
//
// returns the mid-point of
// given 2 points on X-axis
//
int midPoint(int x1, int x2) {
	int number1 = x2 - x1;
	int mid_point = (x1 ) + (number1) / 2;
    return mid_point;
}

//
// sum of most significant digits of non-negative integers.
//
int sumOfMSDs(int num1, int num2) {
	int result = 0, number1 = 0, number2 = 0;
	while (num1 != 0) {
		number1 = num1 % 10;
		num1 /= 10;
	}
	while (num2 != 0) {
		number2 = num2 % 10;
		num2 /= 10;
	}
	return number1 + number2;
}
//
// sum of two 100 digit positive numbers
//
void sumOf100DigitNumbers(int num1[100], int num2[100], int sum[101]) {
	int sum1 = 0, carry = 0;
	for (int counter = 99; counter >= 0; counter--) {
		sum1 = num1[counter] + num2[counter] + carry;
		if (sum1 >= 10) {
			sum1 = sum1 - 10;
			sum[counter + 1] = sum1;
			carry = 1;
		}
		else {
			sum[counter + 1] = sum1;
			carry = 0;
		} 
		if (counter == 0) {
			sum[0] = carry;
		}
	}
}

//
// product of two 100 digit positive numbers
//
void productOf100DigitNumbers(int num1[100], int num2[100], int prod[200]) {
	int counter1, counter2, carry = 0, product = 0, len, sum = 200, temp = 0, counter;

	int product1[200] = { 0 };
	for (counter2 = 99; counter2 >= 0; counter2--) {
		sum--;
		carry = 0;
		temp = 0;
		for (counter1 = 99; counter1 >= 0; counter1--) {
			len = sum - temp;
			product = (num2[counter2] * num1[counter1]) + carry;
			carry = product / 10;
			product = product % 10;
			product1[len] = product1[len] + product;
			temp++;
		}
		product1[len - 1] = carry;

	}
	carry = 0, product = 0;
	for (counter = 199; counter >= 0; counter--) {
		product = product1[counter] + carry;
		carry = 0;
		if (product > 9) {
			carry = product / 10;
			product = product % 10;
			
		}
		product1[counter] = product;
	}
	for (counter = 0; counter < 200; counter++) {
		prod[counter] = product1[counter];
	}
}
