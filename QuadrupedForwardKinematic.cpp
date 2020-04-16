/*
*author:Technician13
*date:2020.4.13
*/
#include"QuadrupedForwardKinematic.h"
#include<iostream>
#include<cmath>

#define pi 3.1415926

QuadrupedForwardKinematic::QuadrupedForwardKinematic()
{
    std::cout<<"Please input parameters:";
    std::cout<<std::endl<<"gamma:  ";
    std::cin>>gamma;

    std::cout<<std::endl<<"alpha:  ";
    std::cin>>alpha;

    std::cout<<std::endl<<"beta:  ";
    std::cin>>beta;

    std::cout<<std::endl<<"The length of the first link:  ";
    std::cin>>h;

    std::cout<<std::endl<<"The length of the second link:  ";
    std::cin>>hu;

    std::cout<<std::endl<<"The length of the third link:  ";
    std::cin>>hl;
}

QuadrupedForwardKinematic::~QuadrupedForwardKinematic()
{
    std::cout<<"The result is:  "<<std::endl
             <<"LEFT:"<<std::endl
             <<"The X-axis:  "
             <<pos_x<<std::endl
             <<"The Y-axis:  "
             <<L_pos_y<<std::endl
             <<"The Z-axis:  "
             <<L_pos_z<<std::endl

             <<"RIGHT:"<<std::endl
             <<"The X-axis:  "
             <<pos_x<<std::endl
             <<"The Y-axis:  "
             <<R_pos_y<<std::endl
             <<"The Z-axis:  "
             <<R_pos_z<<std::endl;
}

float QuadrupedForwardKinematic::calc_pos_x()
{
    pos_x = hu*sin(alpha)+hl*cos((pi/2)+alpha+beta);
    std::cout<<pos_x<<std::endl;
    return pos_x;
}

double QuadrupedForwardKinematic::calc_lyz()
{
    lyz = hu*cos(alpha)+hl*sin((pi/2)+alpha+beta);
    std::cout<<lyz<<std::endl;
    return lyz;
}

float QuadrupedForwardKinematic::calc_L_pos_y()
{
    L_pos_y = -(h*cos(gamma)+lyz*sin(gamma));
    std::cout<<L_pos_y<<std::endl;
    return L_pos_y;
}

float QuadrupedForwardKinematic::calc_L_pos_z()
{
    L_pos_z = h*sin(gamma)-lyz*cos(gamma);
    std::cout<<L_pos_z<<std::endl;
    return L_pos_z;
}

float QuadrupedForwardKinematic::calc_R_pos_y()
{
    R_pos_y = h*cos(gamma)-lyz*sin(gamma);
    std::cout<<R_pos_y<<std::endl;
    return R_pos_y;
}

float QuadrupedForwardKinematic::calc_R_pos_z()
{
    R_pos_z = -h*sin(gamma)-lyz*cos(gamma);
    std::cout<<R_pos_z<<std::endl;
    return R_pos_z;
}