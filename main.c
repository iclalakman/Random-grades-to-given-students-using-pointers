#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Random number generator//
int randfunction(void){
    int x;
    x = rand() %100;
    return x;
}

int main(){
    int n;
    int *pointer;
    int i=0;
    srand(time(NULL));

    printf("How many students you have? ");
    scanf("%d",&n);

    //Creating an one dimensional array//
    pointer = malloc(n*sizeof(int));
    if (pointer == NULL){
        printf("Failed to allocate memory.");
        exit(1);
    }

    //Printing array one by one//
    for (i=0; i<n; i++){
        printf("Student %d: %d\n",i+1, randfunction());
    }
    free(pointer);

    return 0;
}