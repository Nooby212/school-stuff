#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int* arr = malloc(n*sizeof(int));
    char (*name)[50] = malloc(n*50*sizeof(char));

    for(int i = 0; i<n; i++){
        printf("%d: ",i+1);
        scanf("%s", &name[i]);
        printf("%d: ",i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                char tempname[50];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                strcpy(tempname, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], tempname);
                //我没用结构体。我他妈讨厌结构体，它们浪费我的时间。
            }
        }
    }
    for (int i = 0; i<n; i++){
        printf("%s - %d\n", name[i], arr[i]);
    }

    free(name);
    free(arr);
}
