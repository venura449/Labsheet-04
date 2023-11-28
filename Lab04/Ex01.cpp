#include<iostream>
#include<cmath>
#include<iomanip>


const float pi = static_cast<float>(22) / 7;

//Dimensions of full garden
const float length = 28;
const float width = 15;


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
};

void Circle_Area(float radius, float &Circle_Area);
void Square_Area(float length, float &Square_Area);
void Rectangle_Area(float length,float width, float &rec_Area);

int main() {
	Circle cir1;
	Square sq1;
	Rectangle rec1;

	//Assiging Variables
	cir1.radius = 5;
	sq1.length = 4;
	rec1.length = 7;
	rec1.width = 3;


	//Calculating Area
	Circle_Area(cir1.radius,cir1.Circle_Area);
	Square_Area(sq1.length, sq1.Square_Area);
	Rectangle_Area(rec1.length, rec1.width, rec1.rec_Area);

	//printing part
	float final_Area = ((length * width) - (cir1.Circle_Area + sq1.Square_Area + rec1.rec_Area));
	cout << "Area of the Green Area is :" << fixed << setprecision(3) << final_Area << endl;

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

