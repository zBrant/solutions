#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int lexicographic_sort(const char* a, const char* b);
int lexicographic_sort_reverse(const char* a, const char* b);
int sort_by_number_of_distinct_characters(const char* a, const char* b);
void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b));
int sort_by_length(const char* a, const char* b);


int lexicographic_sort(const char* a, const char* b) {
   while(*a && (*a == *b)){
    a++;
    b++;
  }
  return (*a > *b)? 1 : 0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
  while(*a && ( *a == *b)){
    a++;
    b++;
  }
  return (*a < *b)? 1 : 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
  char chars_a[2500], chars_b[2500];
  memset(chars_a, 0, 2500);
  memset(chars_b, 0, 2500);
   
  int len_a = strlen(a);
  for (int i = 0; i < len_a; i++) {
    chars_a[a[i]] = 1;
  }

  int len_b = strlen(b);
  for (int i = 0; i < len_b; i++) {
    chars_b[b[i]] = 1;
  }

  int distinct_chars_a = 0, distinct_chars_b = 0;
  for (int i = 0; i < 2500; i++) {
    if (chars_a[i]) 
      distinct_chars_a++;
    if (chars_b[i])
      distinct_chars_b++;
  }


   return (distinct_chars_a == distinct_chars_b) ? lexicographic_sort(a, b) : distinct_chars_a > distinct_chars_b;
}

int sort_by_length(const char* a, const char* b) {
  int size[] = {0,0};
  for(int i=0; a[i]; i++){
    size[0]++; 
  }
  
  for(int i=0; b[i]; i++){
    size[1]++;
  }

  if(size[0] > size[1]){
    return 1;
  }else if(size[0] < size[1]){
    return 0;
  }else{
    while(*a && (*a == *b)){
      a++;
      b++;
    }
  }
  
  return !(*(const unsigned char*)a - *(const unsigned char*)a);
}

void string_sort(char** arr,const int len, int (*cmp_func)(const char* a, const char* b)){
  for(int i = 0; i < len; i++){
    for(int j = i+1; j < len; j++){
      if(cmp_func(arr[i], arr[j])){
        char *buffer = arr[i];
        arr[i] = arr[j];
        arr[j] = buffer;
      }
    }
  }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}