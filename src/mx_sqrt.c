#include "libmx.h"

int mx_sqrt(int x) {
	if(x == 0) return 0;
	int left = 1;
	int right = x/2 + 1;
	int res = 0;

	while(left<=right){
		int mid = left + ((right-left)/2);
		if (mid <= x / mid) {
			left = mid+1;
			if(mid * mid == x){
				res = mid;
				return res;
			}
		}
		else{
			right = mid-1;
		}
	}
	return res;
}
