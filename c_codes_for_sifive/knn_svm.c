#include <stdio.h>
#include <metal/cpu.h>
#include <metal/led.h>
#include <metal/button.h>
#include <metal/switch.h>
#include "svm_model.h"
#include "scaler.h"

#define RTC_FREQ    32768

#define x1 0.77884104f
#define x2 0.0293919f
#define x3 0.03471025f

#define b 42989.00816508668f
void scale_input(float *x){
	for(int i=0;i<NUM_FEATURES;i++){
		x[i]=(x[i]-mean[i]/scale[i]);
	}
}
int predict(float *x){
	float max_score=-1e9;
	int best_class=-1;

	for(int c=0;c< NUM_CLASSES;c++){
		float score=bias[c];
		for(int i=0;i< NUM_FEATURES;i++){
			score+=weights[c][i]*x[i];
		}
		if(score>max_score){
			max_score=score;
			best_class=c;
		}
	}
	return best_class;
}

int main(){
	float input[2]={19,9000};
	//preprocess
	scale_input(input);

	//predict
	int prediction=predict(input);

	//output result (print to uart or onboard console)
    printf("precited class: %d\n", prediction);

    return 0;
}
