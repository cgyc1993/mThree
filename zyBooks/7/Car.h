#ifndef CARH
#define CARH

class Car {
   private:
      int modelYear;
      int purchasePrice;
      int currentValue;

   public:
      void SetModelYear(int userYear);

      int GetModelYear() const;

      void SetPurchasePrice(int userPrice);

      int GetPurchasePrice();

      void CalcCurrentValue(int currentYear);

     // TODO: Declare PrintInfo() method to output modelYear, purchasePrice, and
     // currentValue
     void PrintInfo();

};

#endif