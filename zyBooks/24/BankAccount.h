#ifndef BANKACCOUNTH
#define BANKACCOUNTH

#include <string>
using namespace std;

class BankAccount {
   public:
      // TODO: Declare public member functions
      BankAccount(string newName, double amt1, double amt2){
         customerName = newName;
         checking = amt1;
         saving = amt2;
      }
      
      void SetName(string newName);
      string GetName();
      void SetChecking(double amt);
      double GetChecking();
      void SetSavings(double amt);
      double GetSavings();
      void DepositChecking(double amt);
      void DepositSavings(double amt);
      void WithdrawChecking(double amt);
      void WithdrawSavings(double amt);
      void TransferToSavings(double amt);
      
   private:
      // TODO: Declare private data members
      string customerName;
      double saving;
      double checking;
};

#endif