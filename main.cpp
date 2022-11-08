//Marlvin Goremusandu    J00975960
// Page 259 qn 7

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c;
    int root1;
    int root2;
    double discriminant;
    
    cout << "Enter the value of a,b,c";
    cin >> a>>b>>c;
    
    discriminant = pow(b,2) - 4 * a * c;
    root1 = (-b + sqrt(discriminant))/(2 * a);
    root2 = (-b - sqrt(discriminant))/(2 * a);

    if (discriminant == 0){
        cout << "The root is one  real root\n";
        cout << "The roots of the equation are " << root1 << "\n";
    }
      
    else if(discriminant > 0){
      cout << "There are two real roots\n";
      cout << "the roots of the equation are " << root1 << ", " << root2 << "\n";
    }
      
    else if (discriminant < 0){
        cout << "The roots are complex\n";
    }

return 0;
}


