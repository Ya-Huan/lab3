#include "class.h"
int Class::compute_sum(vector<int> v1){
    int sum = 0;
    for(int k = 4; k < size ; k++) 
	sum = sum + v1[k];
    return sum;
}
