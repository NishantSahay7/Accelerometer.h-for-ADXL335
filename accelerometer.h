#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H

int get_degree(int p)
{
	int x,y,z,dx,dy,dz;	//x,y,z are the 3 axes, and the dx,dy,dz are the degrees in each cordinate,for example dx=degree in x cordinate
	
	if(p==1)
	{
	x = adc_read(0);
	dx=335-x;	//for each raise in the value of 1 the degree changes by 1.384 degrees,so we are getting here the change in value and for each if we multiply it by 1.384 we will get the value in terms of degrees
	dx=dx*1.384;	//here is the conversion of the changed value in degrees
	return dx;
	}
	
	if(p==2)
	{
	y = adc_read(1);
	dy=335-y;	//same as for x cordinate
	dy=dy*1.384;
	return dy;
	}
	
	if(p==3)
	{
	z = adc_read(2);
	dz=335-z;	//same as for x cordinate
	dz=dz*1.384;
	return dz;
	}
	
}

#endif