#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private:
        int age;
        int standard;
        string fname;
        string lname;
    
    public:
        void set_age(int a){
            age = a;
        }
        
        void set_first_name(string a){
            fname = a;
        }
        
        void set_last_name(string a){
            lname = a;
        }
        
        void set_standard(int a){
            standard = a;
        }
        
        
        int get_age(){
            return age;
        }
        
        string get_first_name(){
            return fname;
        }
        
        string get_last_name(){
            return lname;
        }
        
        int get_standard(){
            return standard;
        }
        
        
        string to_string(){
            string result = "";
            result = result + std::to_string(age) + "," + fname + "," + lname + "," + std::to_string(standard);
            
            return result;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
