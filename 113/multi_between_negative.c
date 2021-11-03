#include "multi_between_negative.h"

int comp_betw_neg(int first, int last, int arr[]) {
    int p = 1;
	int i;
    for (i = first; i < last; i++) {
        p *= arr[i];
    }
    return p;
}
