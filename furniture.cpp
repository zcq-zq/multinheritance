#include"furniture.h"

Sofa::Sofa(int weight)
	:Furniture(weight)
{
	cout << "sofa constructing" << endl;
}

Bed::Bed(int weight)
	: Furniture(weight)
{
	cout << "bed constructing" << endl;
}

SofaBed::SofaBed(int weight)
	:Furniture(weight)
{
	cout << "SofaBed constructing" << endl;
}