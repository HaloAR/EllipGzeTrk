/*
 * ellipse.cpp
 *
 *  Created on: 11 Apr 2016
 *      Author: jhayes
 */

/*
#include "opencv3/core/core.hpp"
#include "opencv3/highgui/highgui.hpp"
#include "opencv3/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <math.h>
*/	//						CHANGE TO OpenCV 3.0.0

#define PI 3.14159265

using namespace cv;

int main(int argc, char** argv)
{
	Mat img = ("filename.jpg", 0);   									//input image

	double threshold(img, bimg, 70, 255, THRESH_BINARY);

	GaussianBlur(bimg, bimg, 3*3, 0, 0, BORDER_DEFAULT);				//smooth

	void findContours(bimg, cbimg, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE, offset=point(0));

		for( int i = 0; i< contours.size(); i++ ); // iterate
			{
    			double contour_cbimg=contourArea( cbimg[i],false);  	//Find the largest area of contour
    			if(contour_cbimg>largest_area)
					{
        				largest_area=contour_cbimg;
        				largest_contour_index=i;
					}
			}

	//remove all other blobs - unecessary b/c contour_cbimg is array of (x,y) points suitable for direct search
	//												 of ellipse shape
	contour_cbimg=largest_area											//centre of mass

	Moments moments(contour_cbimg, binaryImage=true);

	vector<Moments> mu( contour_cbimg.size() );
	for( int i = 0; i < contour_cbimg.size(); i++ )
 	{
 		mu[i] = moments( contour_cbimg[i], false );
 	}

	vector<Point2f> mc( contour_cbimg.size() );							//Get the mass centers
	for( int i = 0; i < contour_cbimg.size(); i++ )
 	{
 		mc[i] = Point2f( mu[i].m10/mu[i].m00 , mu[i].m01/mu[i].m00 );
 	}

	//....curvature function: k= delta(alpha)/delta(s)
	//	....find the most common direction for [p_i-1...p_i-10] & [p_i+1...p_i+10]
	//	....k= (avg_direction_2nd_window - avg_direction_1st_window) / (window length==10)
	//		if k >(curvature_limit==2) or <(curvature_limit==-2)
	//			....discard
	// limit of 2 is suggested parameter to discard peaks and troughs
	// of occluding features like eyelashes
	// also corneal glint (1st Purkinje image) is characterised by
	// two peak positive values surrounding a trough negative value

	//alternative 1: if the area of a sector under the delta s is bigger than the actual area, then it has to be error points

	//alternative 2: find most commonly occurring point where lines normal to delta s pairs intersect
	//and maybe also require there to be mirror image delta s pairs on the opposite side

	array<int,10> s1;
	array<int,10> s2;
	for ( contour_cbimg[i]=0; i<=contour_cbimg.size; i++);
	{
		array<int, contour_cbimg.size> ellipse_array;

		for ( j=0; j<10; j++ );
		{
			s1[j]=contour_cbimg[i+1];
			fitLine(s1, output_s1, CV_DIST_L2, 0, , 0.01);

			s2[j]=contour_cbimg[i-9];
			fitLine(s2, output_s2, CV_DIST_L2, 0, , 0.01);

			delta_s=abs(output_s1-output_s2);
			delta_angle=abs(output2.angle-output1.angle);

			if ( -2 <= (delta_s)/(delta_angle) <= 2 );
			{
				//store in array ellipse_array
				ellipse_array[j];
				s1[j]=s1[j+1];
				s1[9]=s2[0];
			}
		}
	}
		rotatedRect fitEllipse(ellipse_array);

		//gaze vector, of which there are 4 possible solutions,
		//The polar angle is the unknown direction
		//Therefore there are 4 polar angle combinations to test for convergence

int a = RotatedRect.center.x ;
int b = RotatedRect.center.y ;
double c = RotatedRect.size.height ;	// height=hypotheneuse, width=adjacent in right angle triangle
double d (RotatedRect.size.width) ;		// and arccos(width/height) is polar angle
double e (RotatedRect.angle) ;		    // azimuthal angle
double azimuthal_angle=e*180.00/PI;
double polar_angle=acos((d/c))*180.00/PI;
double A=cos(e)*sin(polar_angle);
double B=sin(e)*sin(polar_angle);
double C=d/c;	//cos(polar_angle)=cos(arccos(polar_angle))

///////////////////////////////////////////////////////////////////////////////////////////////////////////////



