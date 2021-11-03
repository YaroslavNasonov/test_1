#include "multi_before_and_after_negative.h"

int comp_bef_and_aft_neg(int arr[], int size) {
    int p = 1;
	int i;
	
	int first = first_neg(arr, size);
	int last = last_neg(arr, size);

    for (i = 0; i < first; i++) {
        p *= arr[i];
    }
    for (i = last; i < size; i++) {
        p *= arr[i];
	}
    return p;
}
