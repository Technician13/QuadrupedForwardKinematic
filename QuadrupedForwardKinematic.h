/*
*author:Technician13
*date:2020.4.13
*/
#ifndef QUADRUPEDFORWARDKINEMATIC_H_
#define QUADRUPEDFORWARDKINEMATIC_H_

#include<math.h>
#include <D:/CplusplusLibrary/eigen337/Eigen/Dense>

class QuadrupedForwardKinematic
{
    public:
        QuadrupedForwardKinematic();
        virtual ~QuadrupedForwardKinematic();
        //List the functions one by one for preserving the interface
        float calc_pos_x();
        double calc_lyz();
        float calc_L_pos_y();//Calculate the left legs' y
        float calc_R_pos_y();//Calculate the right legs' y
        float calc_L_pos_z();//Calculate the left legs' z
        float calc_R_pos_z();//Calculate the right legs' z
        
    private:
        //given         
        float gamma;//The first joint angle rotation angle
        float alpha;//The second joint angle rotation angle
        float beta;//The third joint angle rotation angle
        float h;//The length of the first link
        float hu;//The length of the second link
        float hl;//The length of the third link
        //find
        float pos_x;//The position of the toe - X axis
        float L_pos_y;//The position of the left toe - Y axis
        float R_pos_y;//The position of the right toe - Y axis
        float L_pos_z;//The position of the left toe - Z axis
        float R_pos_z;//The position of the right toe - Z axis
        //middle parameters
        double lyz;//Length from top-pitch-joint to P on Y-Z      
};

#endif