#include<iostream>
#include<cmath>
#include<iomanip>


const float pi = static_cast<float>(22) / 7;

using namespace std;


struct Circle {
	float radius;
	float Circle_Area;

};

struct Square {
	float length;
	float Square_Area;
};

struct Rectangle {
	float length;
	float width;
	float rec_Area;
	float perirec;
};

void Circle_Area(float radius, float &Circle_Area);
void Square_Area(float length, float &Square_Area);
void Rectangle_Area(float length,float width, float &rec_Area);
void Main_perimiter(float length, float width, float &perirec);
float build_cost(float perirec);

int main() {
	Circle cir1;
	Square sq1;
	Rectangle rec1,recmain;

	//Assiging Variables
	cir1.radius = 5;
	sq1.length = 4;
	rec1.length = 7;
	rec1.width = 3;

	//Dimensions of full garden
	recmain.length = 28;
	recmain.width = 15;



	//Calculating Area
	Circle_Area(cir1.radius,cir1.Circle_Area);
	Square_Area(sq1.length, sq1.Square_Area);
	Rectangle_Area(rec1.length, rec1.width, rec1.rec_Area);
	Main_perimiter(recmain.length, recmain.width, recmain.perirec);

	//printing part
	float final_Area = ((recmain.length * recmain.width) - (cir1.Circle_Area + sq1.Square_Area + rec1.rec_Area));
	cout << "Area of the Green Area is :" << fixed << setprecision(3) << final_Area << endl;
	cout << "Total Cost for Fence is :" << fixed << setprecision(2) << build_cost(recmain.perirec) << endl;


}
void Circle_Area(float radius, float &Circle_Area) {
	Circle_Area = pi * pow(radius, 2);
}

void Square_Area(float length, float &Square_Area) {
	Square_Area = pow(length, 2);
}

void Rectangle_Area(float length, float width, float &rec_Area) {
	rec_Area = length * width;
}
void Main_perimiter(float length, float width, float &perirec) {
	perirec = 2 * (length + width);
}
float build_cost(float perirec) {
	float cost_meter;
	cout << "Enter Cost per meter :";
	cin >> cost_meter;
	return cost_meter * perirec;
}
