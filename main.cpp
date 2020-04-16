#include "sorting.h"

int sorted[10];

int main(){
    int nums[9];
    int i;
    for(i = 0;i<10;++i)
        cin >> nums[i];
    merge_sort(nums, 0, 9);
    for (i = 0; i<10; ++i)
    {
        cout << nums[i];
        cout << ' ';
    }
    return 0;
}