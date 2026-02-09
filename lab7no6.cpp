#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checknumber(int m, int n, int array[20][20], int num);
void printArray(int m, int n, int array[20][20]);

int main() {
    int m, n;
    int A[20][20];
    srand(time(NULL));
    scanf("%d %d",&m,&n);
    if (m>2 && m<20 && n>2 && n<20){
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                int random;
                do{
                    random = (rand() % 101) + 100;
                } while (checknumber(m,n,A,random));
                A[i][j] = random;
            }
        }
        printArray(m,n,A);
    } else{
        printf("error");
    }
    return 0;
}

int checknumber(int m,int n,int A[20][20],int num){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (A[i][j] == num){
                return 1; 
            }
        }
    }
    return 0; 
}

void printArray(int m,int n,int A[20][20]){
    for (int i=0; i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
