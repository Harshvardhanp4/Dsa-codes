#include<bits/stdc++.h>
using namespace std;
const double pi(3.1415);

double calc_area_circle(double radius){
return pi *radius *radius;  

}
double calc_vol_cylinder(double radius, double height ){
    return pi*radius*radius*height;
}
void volume_cylinder(){
    double radius;
    double height;
    cout<<"Enter the radius of the cylinder: "<<endl;
    cin>>radius;
    cout<<"Enter the height of the cylinder: "<<endl;
    cin>>height;
    cout<<"The volume of the cylinder is: "<<calc_vol_cylinder(radius,height)<<endl;
}
void area_circle(){
    double radius;
    cout<<"Enter the radius of the circle:  ";
    cin>>radius;
    cout<<"The area of circle is: "<<calc_area_circle(radius)<<endl;

}



int main()


{
    area_circle();
    volume_cylinder();



}