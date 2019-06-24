//Program for implementation of Lagrange's Interpolation 
#include<bits/stdc++.h> 
using namespace std; 
// To represent a data point corresponding to x and y = f(x) 
struct Data //we define a structure for the data 
{ 
    int x, y; 
}; //always remember this semicolon
// function to interpolate the given data points using Lagrange's formula 
// xi corresponds to the new data point whose value is to be obtained 
// n represents the number of known data points 
double interpolation(Data f[], int xi, int n) 
{ 
    double result = 0; // Initialize result 
  
    for (int i=0; i<n; i++) 
    { 
        // Compute individual terms of above formula 
        double term = f[i].y; 
        for (int j=0;j<n;j++) 
        { 
            if (j!=i) 
                term = term*(xi - f[j].x)/double(f[i].x - f[j].x); 
        } 
  
        // Add current term to result 
        result += term; 
    } 
  
    return result; 
} 
  
//Main Function
int main() 
{ 
    // creating an array of 4 known data points 
    //you can modify according to your question data
    Data f[] = {{0,2}, {1,3}, {2,12}, {5,147}}; 
  
    // Using the interpolate function to obtain a data point 
    // corresponding to x=3 
    cout << "Value of f(3) is : " << interpolation(f, 3, 5); 
  
    return 0; 
} 
