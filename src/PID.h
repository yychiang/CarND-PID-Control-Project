#ifndef PID_H
#define PID_H

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;

  /*
  * Coefficients
  */ 
  double Kp=0;
  double Ki=0;
  double Kd=0;

    //set previous cte
    double prev_cte=0;
    double int_cte=0;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  double generateSteering(double cte);

  void printParameters();

  /*
  * Calculate the total PID error.
  */
  double TotalError();
};

#endif /* PID_H */
