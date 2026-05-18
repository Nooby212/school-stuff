#include <stdio.h>

//n = districts
//m = num roads
//k = num carrier routes

int queue[100] = {0};
int start = 0, end = 0;

void push(int num){ queue[end++] = num; }
int pop(int num) { return queue[start++]; }
int empty(int num) { return start == end; }

typedef struct {
    int x;
    int y;
    int w;
} points;
typedef struct {
    int a;
    int b;
} croutes;

int main(void) {
    int n, m, k; scanf("%d %d %d", &n, &m, &k);
    points p[m*3+1];
    croutes c[k*2+1];
    for (int i = 0; i<m; i++) {
        scanf("%d %d %d", &p[i].x, &p[i].y, &p[i].w);
        printf("\n");
    }
    for (int i = 0; i<k; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
        printf("\n");
    }



}
