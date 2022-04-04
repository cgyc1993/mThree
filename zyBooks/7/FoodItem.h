#ifndef FOODITEMH
#define FOODITEMH

#include <string>

using namespace std;

class FoodItem {
   public:
      FoodItem();
      FoodItem(string n, double f, double c, double p);

      string GetName();

      double GetFat();

      double GetCarbs();

      double GetProtein();

      double GetCalories(double numServings);

      void PrintInfo();

   private:
      string name;
      double fat;
      double carbs;
      double protein;
};

#endif