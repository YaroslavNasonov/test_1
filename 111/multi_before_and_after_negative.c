#include "multi_before_and_after_negative.h"

int comp_bef_and_aft_neg(int first, int last, int arr[], int size) {
    int p = 1;
	int i;
    for (i = 0; i < first; i++) {
        p *= arr[i];
    }
    for (i = last; i < size; i++) {
        p *= arr[i];
	}
    return p;
}
