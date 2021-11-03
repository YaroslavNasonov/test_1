#include "multi_between_negative.h"

int comp_betw_neg(int arr[], int size) {
    int p = 1;
	int i;
	
	int first = first_neg(arr, size);
	int last = last_neg(arr, size);

    for (i = first; i < last; i++) {
        p *= arr[i];
    }
    return p;
}
