#include "point_shape.h"
#include "framework.h"

PointShape::PointShape() {}

Shape* PointShape::copyShape()
{
	return new PointShape;
}

std::wstring PointShape::getName()
{
	xstart = xend;
	ystart = yend;
	xend = 0;
	yend = 0;
	return L"������";
}

void PointShape::Draw(HDC hdc)
{
	SetPixel(hdc, xstart, ystart, 0x00000000);
}

void PointShape::DrawRubber(HDC hdc) {}

LPCTSTR PointShape::setWindowText()
{
	return  L"������";
}