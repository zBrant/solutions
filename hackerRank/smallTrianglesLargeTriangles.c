#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    for(int i =0; i < n; i++){
        for(int j = i; j < n;j++){
            double p = (tr[i].a+tr[i].b+tr[i].c)/2.0; 
            double s = sqrt((p * ((p-tr[i].a) * (p-tr[i].b) * (p-tr[i].c))));
            
            double p2 = (tr[j].a+tr[j].b+tr[j].c)/2.0; 
            double s2 = sqrt((p2 * ((p2-tr[j].a) * (p2-tr[j].b) * (p2-tr[j].c))));
            
            if(s > s2){
                triangle tmp;
                tmp = tr[i];
                tr[i] = tr[j];
                tr[j] = tmp;    
            }
        }
    }
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}