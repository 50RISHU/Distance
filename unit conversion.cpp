/****************************
       Unit conversion
****************************/

#include<iostream>
using namespace std;

void m_to_cm();
void cm_to_m();
void m_to_km();
void km_to_m();
void cm_to_km();
void km_to_cm();

int main()
{
    repit:
    int n;
    float x;
    
    cout<<"1. meter to cm"<<endl;
    cout<<"2. cm to meter"<<endl;
    cout<<"3. meter to km"<<endl;
    cout<<"4. km to meter"<<endl;
    cout<<"5. cm to km"<<endl;
    cout<<"6. km to cm"<<endl;
    cout<<"7. stop"<<endl<<endl;
    
    cout<<"choose a number(1 to 7):";
    cin>>n;
    
    if(n == 7)
        goto end;   
    
    if(n == 1)
        m_to_cm();
        
    else if(n == 2)
        cm_to_m();
        
    else if(n == 3)
        m_to_km();
        
    else if(n == 4)
        km_to_m();
        
    else if(n == 5)
        cm_to_km();
        
    else if(n == 6)
        km_to_cm();
        
    else
        cout<<"invalid choice"<<endl;    
        
    goto repit;          
    
    end:
    return 0;
}

void m_to_cm()
{
    float a;
    cout<<"Enter meter:"<<endl;
    cin>>a;
    float ans = a * 100;
    cout<<a<<"m = "<<ans<<"cm"<<endl<<endl;
}

void cm_to_m()
{
    float a;
    cout<<"Enter centimetres:";
    cin>>a;
    float ans = a / 100;  
    cout<<a<<"cm = "<<ans<<"m"<<endl<<endl;  
}

void m_to_km()
{
    float a;
    cout<<"Enter meter:";
    cin>>a;
    float ans = a / 1000;
    cout<<a<<"m = "<<ans<<"km"<<endl<<endl;
}

void km_to_m()
{
    float a;
    cout<<"Enter kilometer:";
    cin>>a;
    float ans = a * 1000;
    cout<<a<<"km = "<<ans<<"m"<<endl<<endl;
}

void cm_to_km()
{
    float a;
    cout<<"Enter centimetres:";
    cin>>a;
    float ans = a / 100000;
    cout<<a<<"cm = "<<ans<<"km"<<endl<<endl;
}

void km_to_cm()
{
    float a;
    cout<<"Enter kilometer:";
    cin>>a;
    float ans = a * 100000;
    cout<<a<<"km = "<<ans<<"cm"<<endl<<endl;
}    