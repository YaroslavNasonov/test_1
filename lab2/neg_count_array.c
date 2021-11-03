#include "neg_count_array.h"

int neg_count_array(int arr[], int size){
    int count = 0;
	int i;
    for (i = 0; i < size; i++){
        if (arr[i] < 0){
            count++;
        }
		if (count >= 2)
			break;
    }
    return count;
}
