#include <iostream>
#include <vector>

void reducedRecipe(std::vector<int> &ing, int min) {
    bool multiple = false;
    int count;

    int lcm;

    for (int i = 2; i <= min; i++) {
        count = 0;
        for (int j = 0; j < ing.size(); j++) {
            if (ing[j] % i == 0) {
                count++;
            }
        }

        if (count == ing.size()) {
            lcm = i;
            multiple = true;


        }
    }

    if (multiple) {
        for (int i = 0; i < ing.size(); i++) {
            ing[i] = ing[i] / lcm;
        }
    }

}


int main() {
    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int count = 0;
        int numIngredient;
        int minIngredient = INT_MAX;
        std::cin>>numIngredient;
        std::vector<int> ingredients(numIngredient);
        while(numIngredient--)
        {
            int ingredient;
            std::cin>>ingredient;
            if(ingredient <= minIngredient)
            {
                minIngredient = ingredient;
            }

            ingredients[count] = ingredient;
            count ++;
        }



        reducedRecipe(ingredients,minIngredient);

        for(int &i: ingredients)
            std::cout<<i<<" ";

        std::cout<<std::endl;

    }
    return 0;
}