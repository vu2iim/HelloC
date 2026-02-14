
#include <stdio.h>
#include <string.h>

int main()
{
    char username[100];
    
    printf("%d", sizeof(username));
    
    // Prompt user to enter their name
    printf("Please enter your name: ");
    
    // Read the username (fgets is safer and handles spaces)
    fgets(username, sizeof(username), stdin);
    
    printf("%d", sizeof(username));
    
    // Remove the newline character if present
    username[strcspn(username, "\n")] = '\0';
    
    // Print welcome message
    printf("Welcome, %s!\n", username);
    
    return 0;
}
