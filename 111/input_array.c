#include "input_array.h"

int input_arr(int arr[], int size) {
    int n = 0;
    char c;
    while (n < size) {
        scanf("%d%c", &arr[n], &c);
        n++;
        if (c == '\n')
            break;
    }
    return n;
}
