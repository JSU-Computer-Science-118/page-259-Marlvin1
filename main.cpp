// wri// Marlvin Goremusandu                     J00975960
// Number 7                 Page 259        roots
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){
    
    cout<<"Good Day user\n";
    double a,b,c;
    cout<<"Enter the value of a,b,c in your equation: "<<endl;
    cin>>a>>b>>c;
    if(pow(b,2)-4*(a*c)==0)
    {
        cout<<"The equation has one(1) real root\n";
    }
    else if (pow(b, 2)-4*(a*c)>0){
        cout<<"The equation has two(2) real roots\n";
    }
    else if (pow(b, 2)-4*(a*c)<0){
        cout<<"The equation has complex roots\n";
    }
    double root1=(-b+sqrt(pow(b,2)-4*(a*c)))/2*a;
    double root2=(-b-sqrt(pow(b,2)-4*(a*c)))/2*a;
    
  if (pow(b, 2)-4*(a*c)>=0)
    {
        cout<<"The roots of the equation are "<<root1<<" and "<<root2<<endl;
        
    }
    return 0;
}


