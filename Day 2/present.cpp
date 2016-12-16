#include "present.h"

//constructor
Present::Present()
{

}
Present::Present(int i,int j,int k)
{
	l=i;
	w=j;
	h=k;
	s1=l*w;
	s2=l*h;
	s3=w*h;
	calcTotal();
}
//accessors
int Present::getLength()
{
	return l;
}
int Present::getWidth()
{
	return w;
}
int Present::getHeight()
{
	return h;
}
int Present::getSide1()
{
	return s1;
}
int Present::getSide2()
{
	return s2;
}
int Present::getSide3()
{
	return s3;
}
int Present::getTotal()
{
	return total;
}
//mutators
void Present::setLength(int i)
{
	l=i;
}
void Present::setWidth(int i)
{
	w=i;
}
void Present::setHeight(int i)
{
	h=i;
}
//general methods
void Present::calcTotal()
{
	int smalls;
	if (s1 <= s2 && s1 <= s3)
	{
		smalls=s1;
	}
	else if (s2 <= s1 && s2 <= s3)
	{
		smalls=s2;
	}
	else
	{
		smalls=s3;
	}
	total=2*(s1+s2+s3)+smalls;
}