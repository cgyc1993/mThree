#include <iostream>
#include "BankAccount.h"
using namespace std;

// TODO: Define public member functions
void BankAccount::SetName(string newName){
   customerName = newName;
}

string BankAccount::GetName(){
   return customerName;
}

void BankAccount::SetChecking(double amt){
   checking = amt;
}

double BankAccount::GetChecking(){
   return checking;
}

void BankAccount::SetSavings(double amt){
   saving = amt;
}

double BankAccount::GetSavings(){
   return saving;
}

void BankAccount::DepositChecking(double amt){
   if (amt >= 0){
      checking += amt;
   }
}

void BankAccount::DepositSavings(double amt){
   if (amt >= 0){
      saving += amt;
   }
}

void BankAccount::WithdrawChecking(double amt){
   if (amt >= 0){
      checking -= amt;
   }
}

void BankAccount::WithdrawSavings(double amt){
   if (amt >= 0){
      saving -= amt;
   }
}

void BankAccount::TransferToSavings(double amt){
   if (amt >= 0){
      checking -= amt;
      saving += amt;
   }
}

