#include "PID.h"
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {

}

PID::~PID() {}

void PID::Init(double kp, double ki, double kd) {
    Kp=kp;
    Ki=ki;
    Kd=kd;
}

void PID::UpdateError(double cte) {
    p_error=cte;
}

double PID::generateSteering(double cte) {
    double delta_cte;
    delta_cte=cte-prev_cte;
    prev_cte=cte;
    int_cte=int_cte+cte;
    double steering=-1*cte*Kp-delta_cte*Kd-int_cte*Ki;
    return steering;
}

double PID::TotalError() {
    double totalError=0.0;
    return totalError;
}

void PID::printParameters(){
    cout << "Kp=" << Kp <<endl;
    cout << "Ki=" << Ki <<endl;
    cout << "Kd=" << Kd <<endl;

}

