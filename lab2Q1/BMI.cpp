// This is for Lab2 

#include "BMI.h"


using namespace std;

class BMI {
public:

	void setWeight(int w) {
		weight = w;
	}
	void setHeight(int h) {
		height = h;
	}

	float compute() {

		BMi = weight / ((height / 100)*(height / 100));

		return BMi;

	}

	string categories(int BMi)
	{
		if (BMi <  15.0) return "Very severely underweight ..";
		else if (BMi <  16.0) return "Severely underweight ..";
		else if (BMi <  18.5) return "Underweight ..";
		else if (BMi <  25.0) return "Normal ..";
		else if (BMi <  30.0) return "Overweight ..";
		else if (BMi <  35.0) return "Obese Class I ..";
		else if (BMi <  40.0) return "Obese Class II ..";
		else if (BMi >= 40.0) return "Obese Class III .."; 

	}

private:

	int weight;
	float height, BMi;
};