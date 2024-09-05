#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum = 0,temp;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while (n!=0) {
    temp = n % 10;
    sum = sum + temp;
    n = n / 10;
    }
    printf("%d",sum);
    
    return 0;
}
