#include <stdio.h>
#include <conio.h> 
#include<locale.h> 

//Binary numbers are converted to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int decimalNumber = 0;
 
    //Base starts with 2^0= 1
    int base = 1;
 	
 	//To be able to use the number again, number is equalized to "temp" and the process continues.
    int temp = num;
    while (temp) {
        int lastDigit = temp % 10;
        temp = temp / 10;
 
        decimalNumber += lastDigit * base;
 
        base = base * 2;
    }
	
	return decimalNumber;
}

//Decimal numbers are converted to binary
void decimalToBinary(int n)
{
    //Given a capacity enough to store most binary numbers
    int binaryNumber[64];
  
    //Counter for binary array
    int i = 0;
    while (n > 0) {
        //Storing remainder in binary array
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
  
    //Printing binary array
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNumber[j]);
}


int main() {
	//A code we wrote to use Turkish characters
	setlocale(LC_ALL, "Turkish");
	
	printf("--Binary sayý toplama--\n");
	
	int num1,num2,sum;
	printf("Birinci binary sayýyý giriniz: ");
	scanf("%d", &num1);
	
	printf("Ýkinci binary sayýyý giriniz: ");
	scanf("%d", &num2);
	
	//Two binary numbers are taken from the user. One by one they are decimalized and collected.
	sum=(binaryToDecimal(num1) + binaryToDecimal(num2)) ;
	
	//This sum is converted back from decimal to binary and printed on the screen.
	decimalToBinary(sum);
}
