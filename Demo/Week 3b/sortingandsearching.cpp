#include <iostream>
#include <vector>
using namespace std;

void BinarySearch (vector<int> num, int search, int low, int high){
    int mid = (low + high) / 2;
    int range = low - high;

    if (search == num.at(mid)){
        cout << search << " is at position " << mid;
    }
    else if (range == 0){
        cout << "not found" << endl;
    }
    else if (search > num.at(mid)){
        BinarySearch(num, search, mid + 1, high);
    }
    else{
        BinarySearch(num, search, low, mid - 1);
    }

}

int main()
{
    vector<int> num = { 7, 2, 5, 9, 1, 19, 13, 6, 15, 4, 12, 8};
    int temp;

    cout << "Bubble Sorting : " << endl;

    for (int  i = 0; i < (num.size() - 1); i++){
        for (int  j = 0; j < (num.size() - i - 1); j++){
            if (num.at(j) > num.at(j + 1)){
                temp = num.at(j);
                num.at(j) = num.at(j + 1);
                num.at(j + 1) = temp;
            }
        }

        for (int  a = 0; a < num.size(); a++){
            cout << num.at(a) << " ";
        }
        cout << endl;
    }

    cout << endl;

    int min;

    cout << "Selection Sorting : " << endl;

    num =  { 7, 2, 5, 9, 1, 19, 13, 6, 15, 4, 12, 8};

    for (int  i = 0; i < (num.size() - 1); i++){
        min = i;
        for (int  j = i + 1; j < num.size(); j++){
            if (num.at(min) > num.at(j)){
                min = j;
            }
        }

        if (min != i){
            temp = num.at(i);
            num.at(i) = num.at(min);
            num.at(min) = temp;
        }

        for (int  a = 0; a < num.size(); a++){
            cout << num.at(a) << " ";
        }
        cout << endl;
    }

    int search = 19;
    BinarySearch(num, search, 0, num.size());

    return 0;
}

//https://www.geeksforgeeks.org/binary-search/