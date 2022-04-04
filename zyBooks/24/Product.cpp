#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

Product::Product(string code, double price, int count){
   this->code = code;
   this->price = price;
   this->count = count;
}
   
void Product::SetCode(string code){
   this->code = code;
}

string Product::GetCode(){
   return code;
}

void Product::SetPrice(double p){
   price = p;
}

double Product::GetPrice(){
   return price;
}

void Product::SetCount(int num){
   count = num;
}

int Product::GetCount(){
   return count;
}

void Product::AddInventory(int amt){
   count += amt;
}

void Product::SellInventory(int amt){
   count -= amt;
}
