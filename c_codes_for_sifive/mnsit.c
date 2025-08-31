#include <stdio.h>
#include <metal/cpu.h>
#include <metal/led.h>
#include <metal/button.h>
#include <metal/switch.h>
#include "svm_model.h"
#include "scaler.h"
#include "test_images.h"

#define RTC_FREQ    32768

void scale_input(float *x){
	for(int i=0;i<NUM_FEATURES;i++){ //i<num features i.e 2 is because this is inference not training so we are doing only for one input that we are predicting
		x[i]=(x[i]-mean[i])/scale[i]; //(x-mean)/std deviation
	}
}
int predict(float *x){
	float max_score=-INFINITY;
	int best_class=0;

	for(int c=0;c< NUM_CLASSES;c++){ //c=0 because we have taken num class as 1
		float score=bias[0];
		for(int i=0;i< NUM_FEATURES;i++){
			score+=weights[0][i]*x[i];  //score=bias+weights*x
		}
		if(score>max_score){ //choosing class with the highest score
			max_score=score;
			best_class=c;
		}
	}
	return c;
}
void print_float(float val){
	int int_part=(int)val;
	int frac_part=(int)((val-int_part)*100);
	if(frac_part<0) frac_part*=-1;
	printf("%d,%02d \n", int_part, frac_part);
}

int main(){
	for(int i=0; i<NUM_TEST_IMAGES;i++){
		int predicted=svm_predict(test_images[i]);
		int actual=test_labels[i];
		printf("Image %d: Predicted=%d, Actual=%d\n",i,predicted, actual);
	}
	//preprocess
	scale_input(input);

	//predict
	int prediction=predict(input);

	//output result (print to uart or onboard console)
    printf("precited class: %d\n", prediction);

    return 0;
}
