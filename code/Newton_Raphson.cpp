// Program for implementation of Newton Raphson Method for 
#include<bits/stdc++.h> 
#define EPSILON 0.001 //you can take this value according to your question
using namespace std; 
  
// An example function whose solution is determined using 
// Bisection Method. The function is x^3 - x^2  + 2 
double func(double x) 
{ 
    return x*x*x - x*x + 2; 
} 
  
// Derivative of the above function which is 3*x^x - 2*x 
double derivFunc(double x) 
{ 
    return 3*x*x - 2*x; 
} 
  
// Function to find the root 
void newtonRaphson(double x) 
{ 
    double h = func(x) / derivFunc(x); 
    while (abs(h) >= EPSILON) 
    { 
        h = func(x)/derivFunc(x); 
   
        // x(i+1) = x(i) - f(x) / f'(x)   
        x = x - h; 
    } 
  
    cout << "The value of the root is : " << x; 
} 
  
// Main function
int main() 
{ 
    double x0;
    cout<<"Enter the value of initial approximation"<<endl;
    cin>>x0;
    newtonRaphson(x0); 
    return 0; 
} 
