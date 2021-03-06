//
//  E02_Bitwise.cpp
//  Unit1_exercise2_understanding_bitwise
//

/*
 
 Note:
 Implement the functions in this exercise file to make the tests
 pass in E02_BitwiseSpec.cpp file.
 
 Your primary goal is to implement all these functions by using
 bitwise operators only.
 
 */

int andOfEachByte(int n) {
	char byte0, byte1, byte2, byte3;
	int result = 0;
	byte0 = ((char*)(&n))[0];
	byte1 = ((char*)(&n))[1];
	byte2 = ((char*)(&n))[2];
	byte3 = ((char*)(&n))[3];
	result = byte0 & byte1 & byte2 & byte3;
    return result;
}

//
// Note1:
// implement the function using bitwise operators only
// should not use * and + operators.
int numberFromBits(int bits[32]) {
	return -9999;
}

int Add(int x, int y)
{
	if (y == 0)
		return x;
	else
		return Add(x ^ y, (x & y) << 1);
}
//
// Note2:
// implement the function using bitwise operators only
// should not use % and / operators.
void bitsFromNumber(int n, int bits[32]) {
    
}

//
// Note3:
// Refer this to understand how numbers are represented in binary format
// https://www.youtube.com/watch?v=qrUjFtZZWf4
// mainly how negative number are represented.
//
// implement this function by calling above bitsFromNumber function only.
//
int numberOfOnesInBinary(int n) {
    return -1;
}

//
// Returns
//  1 - yes
//  0 - no
//
int isPalindromeInBase256(unsigned long int n) {
    return -99;
}
