

class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end()); 
        int minimo = r;

        while (l <= r) {
            int medio = l + (r - l) / 2;
            long long horas = 0;

            for (int pile : piles) {
                horas += (long long)(pile + medio - 1) / medio;
            }

            if (horas <= h) {
                minimo = medio;
                r = medio - 1;
            } 
            else {
                l = medio + 1;
            }
        }

        return minimo;
    }
};
