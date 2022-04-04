#include<bits/stdc++.h>

using namespace std;
class Box{
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
    private:
        int l;
        int b;
        int h;
        
// The class should have the following functions : 
    public:
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
        Box(){
            l = 0;
            b = 0; 
            h = 0;
        }
        
        Box(int len,int base,int height){
            l = len;
            b = base;
            h = height;
        }
        
        Box(Box& input){
            l = input.l;
            b = input.b;
            h = input.h;
        }

// int getLength(); // Return box's length
        int getLength(){
            return l;
        }
// int getBreadth (); // Return box's breadth
        int getBreadth(){
            return b;
        }
// int getHeight ();  //Return box's height
        int getHeight(){
            return h;
        }
// long long CalculateVolume(); // Return the volume of the box
        long long CalculateVolume(){
            long long i = 1;
            i *= l;
            i *= b;
            i *= h;
            
            return i;
        }
        
        
//Overload operator < as specified
//bool operator<(Box& b)
        bool operator<(Box& box){
            if (l < box.l){
                return true;
            }
            else if (b < box.b && l == box.l){
                return true;
            }
            else if (h < box.h && b == box.b && l == box.l){
                return true;
            }
            else{
                return false;
            }
        }

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
        friend ostream& operator<<(ostream& out, Box& B){
            out << B.l << " " << B.b << " " << B.h;
            
            return out;
        }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}