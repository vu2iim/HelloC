
#include <stdio.h>

int main() {
	
	// Create an integer variable that will store the number we get from the user
	int nAge;

	// Ask the user to type his/her age
	printf("Enter your age: ");

	// Get and save the age
	scanf("%d", &nAge);

	// Output the users age
	printf("Your age is: %d", nAge);
    
    return 0;
}