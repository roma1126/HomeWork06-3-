
#include <iostream>
#include <string>
#include "Libs.h"
#include "Figure.h"
#include "Triangle.h"
#include "Equilateral_triangle.h"
#include "Isosceles_triangle.h"
#include "Rectangular_triangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhomb.h"



void print_info(Figure* q)
{
	q->print_info();
}



int main()
{
	setlocale(LC_ALL, "Russian");
	

	Figure f = {};
	Triangle triangle = { 10,20,30,50,60,70 };
	Rectangular_triangle r_triangle = { 10,20,30,50,60 };
	Isosceles_triangle i_triangle = { 10,20,50,60 };
	Equilateral_triangle e_triangle = { 30 };

	Quadrangle quadrangle = { 10,20,30,40,50,60,70,80 }; 
	My_Rectangle rectangle = { 10,20 };
	Square square = { 20 };
	Parallelogram parallelogram = { 20,30,30,40 }; 
	Rhomb rhomb = { 30,30,40 }; 


	Figure* p_triagle = &triangle;
	Figure* p_equilateral_triangle = &e_triangle;
	Figure* p_isosceles_triangle = &i_triangle;
	Figure* p_rectangular_triangle = &r_triangle;

	Figure* p_rectangle = &rectangle;
	Figure* p_quadrangle = &quadrangle;
	Figure* p_square = &square;
	Figure* p_parallelogram = &parallelogram;
	Figure* p_rhomb = &rhomb;


	print_info(p_rectangular_triangle);
	print_info(p_isosceles_triangle);
	print_info(p_equilateral_triangle);

	print_info(p_quadrangle);
	print_info(p_rectangle);
	print_info(p_square);
	print_info(p_parallelogram);
	print_info(p_rhomb);



	return 0;
}