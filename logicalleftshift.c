// Online C compiler to run C program online
#include <stdio.h>



int main() {
    int num; // Use unsigned to avoid sign issues
    #include<stdio.h>
#define MAX 4
int main(){
    int a[MAX];
    int shift[MAX];
    for(int i=0;i<MAX;i++){
        printf("\nEnter a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    // printf("%d",shift[0]);

    for(int i=0,j=1;i<MAX-1 && j<MAX;i++,j++){
        shift[j] = a[i];
    }

    shift[0] = a[MAX-1];

    for(int i=0;i<MAX;i++){
        printf("%d ",shift[i]);
    }

    printf("\n");
}

    // Input the number and the number of positions to shift
    printf("Enter a binary number : ");
    scanf("%d", &num);

    // Perform logical left shift
    unsigned int result = num << 1;

    // Output the result
    printf("Original number: %d\n", num);
    printf("After logical left shift ", result);

    return 0;
}


