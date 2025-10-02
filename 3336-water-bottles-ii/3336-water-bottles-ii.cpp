class Solution {
public:
    int maxBottlesDrunk(int numB, int numE) {
        int Drink = numB;
        int empty = numB;

        while(empty >= numE){
            empty -= numE;

            numE++;
            empty++;
            Drink++;
          
        }

        return Drink;

    }
};