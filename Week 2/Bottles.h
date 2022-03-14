#ifndef BOTTLES_H
#define BOTTLES_H

#include <iostream>
using namespace std;

class Bottles {

    public:
		Bottles();

        int GetRemainingBottles();

		void Picked(int amount);
        void PrintRemaining();

    private:
        int remaining;
};

#endif /* BOTTLES_H_ */