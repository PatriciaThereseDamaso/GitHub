#include <iostream> 
#include <iomanip> 
#include <cmath> 
  
using namespace std; 
  
void cube(){ 
    float s, volume; 
    cout << "Enter side: "; 
    cin >> s; 
    
    volume = pow(s,3); 
    cout << "The volume of the cube is " << volume << endl; 
} 
  
void sphere(){ 
    float r, volume, power; 
    const float pi = 3.1415; 
    cout << "Enter radius: "; 
    cin >> r; 
    
    power = pow(r,3);
    volume = (4*pi*power)/3; 
    cout << "The volume of the Sphere is " << fixed << setprecision(2) <<volume << endl; 
} 
  
void RecParallel(){ 
    float l,w,h, volume; 
    cout << "Enter length: "; 
    cin >> l; 
    cout << "Enter width: "; 
    cin >> w; 
    cout << "Enter height: "; 
    cin >> h; 
 
    volume = w*h*l;
    cout << "The volume of the Rectangular Parallelepiped is " << setprecision(2) << volume << endl; 
} 
  
int main (){ 
    char Key; 
    char choice; 

    do{ 

            cout << left << setw(50) << "************************************************"<<endl; 
            cout << setw(15) << " " << setw(30) << "Volume of Shapes" <<endl; 
            cout << left <<setw(50) << "************************************************"<<endl; 
            cout << setw(5) << " " << setw(25) << "[C] - Cube"<<endl; 
            cout << setw(5) << " " << setw(25) << "[S] - Sphere"<<endl; 
            cout << setw(5) << " " << setw(25) << "[R] - Rectangular Parallelepiped" <<endl; 
            cout << setw(5) << " " << setw(25) << "[X] - EXIT" <<endl; 
            cout << left <<setw(50) << "************************************************"<<endl; 
            cout << "Choose Calculator: "; 
            cin >> choice; 

            switch (choice){ 
                case 'C': case 'c':
                {
                    cube(); 
                    cout << "Press any key to continue..."<<endl; 
                    cin >> Key; 
                    break; 
                }
            
                case 'S': case 's': 
                {
                    sphere(); 
                    cout << "Press any key to continue...."; 
                    cin >> Key; 
                    break; 
                }

                case 'R': case 'r':
                {
                    RecParallel();
                    cout << "Press any key to continue...."; 
                    cin >> Key;
                    break;
                }

                case 'X': case 'x':
                {
                    cout << "Thank you for using this area calculator!"<<endl;
                    return 0;
                    break;
                }
                default: cout << "INVALID OPTION";
            } 

    } while (Key != 'X' || Key != 'x'); 

    return 0;
}