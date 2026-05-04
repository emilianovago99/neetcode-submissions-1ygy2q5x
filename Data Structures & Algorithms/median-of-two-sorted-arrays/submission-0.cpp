class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        int inicio = 0, fin = m;
        
        while (inicio <= fin) {
            int p1 = inicio + (fin - inicio) / 2;
            int p2 = (m + n + 1) / 2 - p1;
            
            int maxIzquierda1 = (p1 == 0) ? INT_MIN : nums1[p1 - 1];
            int minDerecha1 = (p1 == m) ? INT_MAX : nums1[p1];
            
            int maxIzquierda2 = (p2 == 0) ? INT_MIN : nums2[p2 - 1];
            int minDerecha2 = (p2 == n) ? INT_MAX : nums2[p2];
            
            if (maxIzquierda1 <= minDerecha2 && maxIzquierda2 <= minDerecha1) {
                if ((m + n) % 2 == 0) {
                    return (max(maxIzquierda1, maxIzquierda2) + min(minDerecha1, minDerecha2)) / 2.0;
                } 
                else {
                    return max(maxIzquierda1, maxIzquierda2);
                }
            } 
            else if (maxIzquierda1 > minDerecha2) {
                fin = p1 - 1;
            } 
            else {
                inicio = p1 + 1;
            }
        }
        
        return 0.0;      
    }
};
