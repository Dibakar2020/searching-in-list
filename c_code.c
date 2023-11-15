#include <stdio.h>
#include <stdlib.h>

int main() {
    // Number of elements in the array
    int num_elements = 100;

    // Dynamically allocate memory for an array of floats
    float *float_array = (float *)malloc(num_elements * sizeof(float));

    // Check if memory allocation was successful
    if (float_array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Return an error code
    }

    // Initialize the array with some values (optional)
    for (int i = 0; i < num_elements; ++i) {
        float_array[i] = 1.5f * i; // You can set any values you prefer
    }

    // Access and print the values in the array (optional)
    printf("Array elements:\n");
    for (int i = 0; i < num_elements; ++i) {
        printf("%.2f ", float_array[i]);
    }
    printf("\n");

    // Don't forget to free the allocated memory when done
    free(float_array);

    return 0;
}
