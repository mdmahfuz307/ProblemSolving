#include <stdio.h>

long long computeGCD(long long num1, long long num2) {
    if (num2 == 0) return num1;
    return computeGCD(num2, num1 % num2);
}

int main() {
    int testCases;
    scanf("%d", &testCases);  

    while (testCases--) {
        int arraySize;
        long long targetValue;
        scanf("%d %lld", &arraySize, &targetValue);  

        long long arr[arraySize];  
        for (int index = 0; index < arraySize; index++) {
            scanf("%lld", &arr[index]);
        }

        int isEqual = 1;
        for (int index = 0; index < arraySize; index++) {
            if (arr[index] != targetValue) {
                isEqual = 0;
                break;
            }
        }

        if (isEqual) {
            printf("0\n");  // No operation needed
        } else {
            // Find the start and end of the range where arr[index] != targetValue
            int rangeStart = -1, rangeEnd = arraySize;
            for (int index = 0; index < arraySize; index++) {
                if (arr[index] != targetValue) {
                    if (rangeStart == -1) rangeStart = index;
                    rangeEnd = index;
                }
            }

            // If there's only one element not equal to targetValue, we need just one operation
            if (rangeStart == rangeEnd) {
                printf("1\n");
            } else {
                int hasSameXOR = 1, isAllDivisibleByTarget = 1;
                long long firstXORValue = (arr[rangeStart] ^ targetValue);

                // Check if all elements in the range either XOR to the same value or are divisible by targetValue
                for (int index = rangeStart; index <= rangeEnd; index++) {
                    if (arr[index] % targetValue != 0) isAllDivisibleByTarget = 0;
                    if ((arr[index] ^ targetValue) != firstXORValue) hasSameXOR = 0;
                }

                if (hasSameXOR || isAllDivisibleByTarget) {
                    printf("1\n");
                } else {
                    printf("2\n");
                }
            }
        }
    }

    return 0;
}
