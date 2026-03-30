class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
       int n = position.size();
        if (n == 0) return 0;

        vector<pair<int, int>> carros(n);
        for (int i = 0; i < n; i++) {
            carros[i] = {position[i], speed[i]};
        }

        sort(carros.rbegin(), carros.rend());

        int fleets = 0;
        double tiempo_maximo_actual = 0.0; 

        for (int i = 0; i < n; i++) {
          
            double tiempo_ideal = (double)(target - carros[i].first) / carros[i].second;


            if (tiempo_ideal > tiempo_maximo_actual) {
                fleets++;
                tiempo_maximo_actual = tiempo_ideal; 
            }
            
        }

        return fleets;
    }
};
