#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int module = 10;
    int som = 0;

    for(int i =0; i<5;i++){
       som += n % module;
       n = n / module;
    }
    printf("%d", som);
    return 0;
}