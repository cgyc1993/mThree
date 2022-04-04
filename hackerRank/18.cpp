#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    
    public :
        virtual void getdata() = 0;
        
        virtual void putdata() = 0;
};

class Professor : public Person{
    private:
        static int nextId;
        int publications;
        int id;
    
    public:
        Professor(){
            nextId++;
            id = nextId;
        }
        
        void getdata() {
            cin >> this->name >> this->age >> this->publications;
        }
        
        void putdata() {
            cout << this->name << " "  << this->age << " "  << this->publications  << " " << this->id << endl;
        }
        
};


class Student : public Person{
    private:
        static int nextId;
        int total = 0;
        int id;
    
    public:
        Student(){
            nextId++;
            id = nextId;
        }
        
        void getdata() {
            cin >> this->name >> this->age;
            int marks;
            for (int i = 0; i < 6; i++){
                cin >> marks;
                total += marks;
            }
        }
        
        void putdata() {
            cout << this->name << " " << this->age << " "  << this->total << " "  << this->id << endl;
        }
};

int Student::nextId = 0;
int Professor::nextId = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
