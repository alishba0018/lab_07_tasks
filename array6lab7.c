#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; 
    int count[n]; 
    
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        count[arr[i]]++; 
    }

    printf("Numbers that occur more than once: ");
    int found = 0; 
    for (int i = 0; i < n; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("No duplicates found.");
    }
  
    return 0;
}