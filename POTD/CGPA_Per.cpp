#include<iostream>
using namespace std;
int main(){

float s1,s2,s3,s4,s5;
int c1,c2,c3,c4,c5;
float sum_SGPA = 0;
int sum_of_credits = 0;
double CGPA = 0;
float percentage;

cout<<"Enter the SGPA of 1st sem :"<<endl;
cin>>s1;
cout<<"Enter the SGPA of 2nd sem :"<<endl;
cin>>s2;
cout<<"Enter the SGPA of 3rd sem :"<<endl;
cin>>s3;
cout<<"Enter the SGPA of 4th sem :"<<endl;
cin>>s4;
cout<<"Enter the SGPA of 5th sem :"<<endl;
cin>>s5;


cout<<"Enter the total credit of 1st sem :"<<endl;
cin>>c1;
cout<<"Enter the total credit of 2nd sem :"<<endl;
cin>>c2;
cout<<"Enter the total credit of 3rd sem :"<<endl;
cin>>c3;
cout<<"Enter the total credit of 4th sem :"<<endl;
cin>>c4;
cout<<"Enter the total credit of 5th sem :"<<endl;
cin>>c5;

// calculated sgpa*credit of particular sem and then sum

sum_SGPA = s1*c1 + s2*c2 + s3*c3 + s4*c4 + s5*c5;

sum_of_credits = c1+c2+c3+c4+c5;

CGPA = sum_SGPA/sum_of_credits;

cout<<"your cgpa is - "<<CGPA<<endl;

percentage = (CGPA-0.75)*10;

cout<<"your percentage is : "<<percentage;


}
