#include "index_last_negative.h"

int last_neg(int arr[], int size) {
	int i;
    for (i = size - 1; i >= 0; i--) {
        if (arr[i] < 0) {
            return i;
        }
    }
}
