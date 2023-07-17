#include <stdio.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i = 1, and = 0, xor = 0, or = 0, mn = k;
  
    while(k != 0){
        for(int j = i +1; j <= n;j++){
            int a = (i&j);
            //printf("%d - %d\n",i,j);
            if(and < a && a < mn){
               and = a;
               
            }
          
            int b = i | j;
            if(or < b && b < mn){
              or = b;
            }
          
            int c = i ^ j;
            if(xor < c && c < mn){
              xor = c;
            }
        }
        i++;
        k--;
    }
    printf("%d\n%d\n%d",and,or,xor);  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
