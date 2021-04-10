#include "anm.h"

float newton_raphson(funcptr1 func,funcptr2 dfunc){
    int itr, maxitr;
    float h,x0,x1,allowed_error;
    x0 = 2;
    allowed_error = 0.0001;
    maxitr = 10;
    for(itr = 1; itr<=maxitr; itr++){
        h = (func(x0))/(dfunc(x0));
        x1=x0-h;
        if(fabs(h)<allowed_error){
            return x1;
        }
        x0=x1;
    }
    return FAILED_TO_CONVERGE;

}