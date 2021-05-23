// name: Sanjeevram Duraivelu
// // cruzid: sduraive 
// // class:  CSE15L
// // date:   10/8/19
// // description: Creates subsets with an n ordered elements with k elements of subsets

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void printSet(int B[], int n);
void printSubsets(int B[], int n, int k, int i);
#define MAX_SIZE 100

int main(int argc, char *argv[]) {
    int nth_element;
    int kth_element;
    int i = 1;
    int j;
    int check = 1;
    int m, n, status;
    double x;
    char ch;
    int bitArray[MAX_SIZE + 1];

 if (argc != 3) {
        printf("\nUsage: Subset n k (n and k are ints satisfying 0<=k<=n<=100)\n");
        return EXIT_SUCCESS;
    } else {
        for (m = 1; m < argc; m++) {
            status = sscanf(argv[m], "%d%c", &n, &ch);
            if (status == 1) {
                if (check == 1) {
                    nth_element = atoi(argv[check]);
                    bitArray[nth_element + 1];
                    for (j = 0; j <= nth_element; j++) {
                        bitArray[j] = 0;
                    }
                } else if (check == 2) {
                    kth_element = atoi(argv[check]);
                    if (0 > kth_element || kth_element > nth_element || nth_element > 100) {
                        printf("\nUsage: Subset n k (n and k are ints satisfying 0<=k<=n<=100)\n");
                        return EXIT_SUCCESS;
                    }
                }
                check++;
                continue;
            }
            status = sscanf(argv[m], "%lf", &x);
            if (status == 1) {
                printf("\nUsage: Subset n k (n and k are ints satisfying 0<=k<=n<=100)\n");
                return EXIT_SUCCESS;
            } else {
                printf("\nUsage: Subset n k (n and k are ints satisfying 0<=k<=n<=100)\n");
                return EXIT_SUCCESS;
            }
        }
    }
    if (check == 3) {
        printSubsets(bitArray, nth_element, kth_element, i);
    }
    return (EXIT_SUCCESS);
}

void printSubsets(int B[], int n, int k, int i) {
    if (k == 0) {
        printSet(B, n);
        return;
    } else if (k > n - i + 1) {
        return;
    } else {
        B[i] = 1;
        printSubsets(B, n, k - 1, i + 1);
        B[i] = 0;
        printSubsets(B, n, k, i + 1);
    }
}

void printSet(int B[], int n) {
    int i;
    int j;
    int counter = 0;
    for (j = 1; j <= n; j++) {
        if (B[j] == 1) {
            counter++;
        }
    }
    printf("{");
    for (i = 0; i <= n; i++) {
        if (B[i] == 1) {
            printf("%d", i);
            if (counter - 1 > 0) {
                printf(", ");
                counter--;
            }
        }
    }
    printf("}\n");
}
