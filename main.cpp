/*
*author:Technician13
*date:2020.4.13
*function:This program realizes the forward kinematics solution of the legs of the 
          quadruped robot. For a leg with three degrees of freedom, the position 
          coordinates of the toe will be output after give the angle of joint space 
*/
#include <iostream>
//Eigen is not used in this project , however it is reserved for enhanced extensibility
#include <D:/CplusplusLibrary/eigen337/Eigen/Dense>
#include"QuadrupedForwardKinematic.h"
#include"QuadrupedForwardKinematic.cpp"

//using namespace Eigen;

int main()
{
    QuadrupedForwardKinematic *p=new QuadrupedForwardKinematic;
    p->calc_pos_x();
    p->calc_lyz();
    p->calc_L_pos_y();
    p->calc_R_pos_y();
    p->calc_L_pos_z();
    p->calc_R_pos_z();

    delete p;
    p = nullptr;
    system("pause");
    return 0;
}