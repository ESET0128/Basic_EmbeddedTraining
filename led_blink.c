// Saurabh Kumar -> Employee ID: ESET0128
// Problem 1 : 03-09-2025

// this program is reprentative structure of LED blink (as we don't have actual hardware)
#include <stdio.h> // Standard input/output library (for printf)

// Function to simulate a delay (blocking delay)
void delay_ms(int ms) {
    volatile long i, j; 	// Use volatile to prevent optimization
for(i=0; i<ms;i++)
{
    for(j=0; j<ms*1000; j++){

    }
}
}

int main() {
    int counter = 0; 	// Initialize counter variable
    int max_blinks = 5; 	// Maximum number of blinks
    int threshold = 3; 	// Threshold for conditional check

    while(threshold){
    // The for loop iterates a known number of times (max_blinks)
        
        for(int counter=0;counter<max_blinks;counter++){
        // Checks if the current counter value is less than the threshold
        
            // Simulate turning LED ON (e.g., set pin high)
            printf("LED ON (Counter: %d)\n", counter); 	// For simulation
            delay_ms(500);

            // Simulate turning LED OFF (e.g., set pin low)
            printf("LED OFF (Counter: %d)\n", counter); 	// For simulation
            delay_ms(500);
            
        }
        printf("\n"); // this statement is provided to see difference between two blinks
            
            delay_ms(1000); //longer delay
            threshold=threshold-1;
    }
    // If the counter is at or above the threshold
    printf("Counter reached threshold or above");

    return 0; 	// Indicate successful execution
} 