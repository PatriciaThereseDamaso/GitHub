/*
Activity: Temperature converter using funtion
Date: November 14, 2023
*/

#include<iostream>

 using namespace std; 

float Celcius_to_Fahrenheit(float c){ 
    float f; 
    f=(c*9/5)+32; 
    return f; 
} 

float Fahrenheit_to_Celcius(float f){ 
    float c; 
    c=(f-32)*5/9; 
    return c; 
} 

float Celcius_to_Kelvin(float c){ 
    float k; 
    k=c+273.15; 
    return k; 
} 


int main(){ 
    int problem; char choice='N'; 
     
do{ 
    cout<<"======================"<<endl; 
    cout<<" TEMPERATURE "<<endl; 
    cout<<"======================"<<endl; 
    cout<<"[1]-Celcius to Fahrenheit\n"; 
    cout<<"[2]-Fahrenheit to Celcius\n"; 
    cout<<"[3]-Celcius to Kelvin\n"; 
    cin>>problem; 
    
    switch(problem){ 
        case 1:{ 
            system("cls");
            float c, f; 
            cout<<"Input Celcius: "; 
            cin>>c; 
            
            f=Celcius_to_Fahrenheit(c); 
            cout<<c<<" celcius is "<<f<<" Fahrenheit\n\n"; 
            
            cout<<"Do you want to continue[Y/N]?"; 
            cin>>choice; 
            break;
        } 
        case 2: { 
            system("cls"); 
            float f, c; 
            cout<<"Input Fahrenheit: "; 
            cin>>f; 
            
            c=Fahrenheit_to_Celcius(f); 
            cout<<f<<" Fahrenheit is "<<c<<"Celcius\n\n"; 
            
            cout<<"Do you want to continue[Y/N]?"; 
            cin>>choice; 
            break; 
        } 
        case 3: { 
            system("cls"); 
            float c, k; 
            cout<<"Input Celcius: "; 
            cin>>c; 
            
            k=Celcius_to_Kelvin(c); 
            cout<<c<<" Celcius is "<<k<<"Kelvin\n\n"; 
            cout<<"Do you want to continue[Y/N]?"; 
            cin>>choice; 
            break; 
        }  
            default:cout<<"You have entered incorrect option. "; 
    } 
} 
    while (choice=='Y'||choice=='y'); 
}

