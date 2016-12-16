#ifndef PRESENT_H 
#define PRESENT_H
class Present
{
public:
	//Constructos
	Present ();
	Present (int,int,int);
	//Accessors
	int getLength();
	int getWidth();
	int getHeight();
	int getSide1();
	int getSide2();
	int getSide3();
	int getTotal();
	//mutators
	void setLength(int);
	void setWidth(int);
	void setHeight(int);
	void setSide1(int);
	void setSide2(int);
	void setSide3(int);
	void setTotal(int);
	//general methods
	void calcTotal();
	
private:
	int l,w,h;
	int s1,s2,s3;
	int total;
};
#endif 
