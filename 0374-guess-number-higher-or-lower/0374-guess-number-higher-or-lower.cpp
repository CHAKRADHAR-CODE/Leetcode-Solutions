/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=0,j=n;
        while(i<=j){
            int m = i+(j-i)/2;
            int r=guess(m);
            if(r == 0) return m;
            else if(r==1) i=m+1;
            else j=m-1;
        }
        return 0;
    }
};