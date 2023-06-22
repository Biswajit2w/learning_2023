
#include <stdio.h>
#define N 1000

int main() {
    int arr[N];

    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for (int i = 0; i< n; i++){
    printf("Enter an array %d: ", i+1);
    
        scanf("%d", &arr[i]);
    }

   
    printf("Reversed array: ");
    for (int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}

