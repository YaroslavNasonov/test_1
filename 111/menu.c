#include <stdio.h>
#include "input_value.h"
#include "input_array.h"
#include "neg_count_array.h"
#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_before_and_after_negative.h"
#include "multi_between_negative.h"
#include "output_res.h"

#define N 20

int main() {
    int arr[N];
    int size, value;
    value = input_val();
    size = input_arr(arr, N);
    int first, last, res;
    int neg_count = neg_count_array(arr, size);
    if (((value == 0 | value == 1) && neg_count >= 1) ||
    ((value == 2 | value == 3) && neg_count >= 2)){
        switch (value) {
            case 0:
                res = first_neg(arr, size);
                output(res);
                break;
            case 1:
                res = last_neg(arr, size);
                output(res);
                break;
            case 2:
                first = first_neg(arr, size);
                last = last_neg(arr, size);
                res = comp_betw_neg(first, last, arr);
                output(res);
                break;
            case 3:
                first = first_neg(arr, size);
                last = last_neg(arr, size);
                res = comp_bef_and_aft_neg(first, last, arr, size);
                output(res);
                break;
        }
    }
    else{
        puts("Данные некорректны");
    }
}
