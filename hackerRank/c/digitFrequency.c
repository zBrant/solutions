#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char user[1000];
    scanf("%s",user);
   
   int i = 0;
   int num[] = {0,0,0,0,0,0,0,0,0,0};

   while(i < 10){
      for(int j = 0; user[j]; j++){
         if(i == user[j]-48){
            num[i]++;
         }
      }
      i++;
   }

   for (i =0; i < 10; i++) {
      printf("%d ", num[i]);
   }

    return 0;
}