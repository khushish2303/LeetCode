// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long s = 1;
        long long e = n;
        long long mid = s + (e - s)/2;

        while(s < e){
            if(isBadVersion(mid)){
                e = mid;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        return s;
    }
};