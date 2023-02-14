#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main() {
	    // Define valid password characters
	    const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	    const int num_valid_chars = sizeof(valid_chars) - 1;
	  
	    // Generate random seed based on current time
	     srand(time(NULL));
	  
	    // Generate random password
	     char password[PASSWORD_LENGTH + 1];
	     int i;
	     for (i = 0; i < PASSWORD_LENGTH; i++) {
	     password[i] = valid_chars[rand() % num_valid_chars];
	     }
	     password[PASSWORD_LENGTH] = '\0';
	    
	    // Print password
	     printf("Random password: %s\n", password);
	    
	     return 0;
	     }
