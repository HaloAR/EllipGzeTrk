/*
 * main_routine.cpp
 *
 *  Created on: 3 Mar 2016
 *      Author: jhayes
 */

#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include ellipse.h		//ellipse fitting algorithm
#include calibration.h	//not written yet

//include distances between eye-tracking cameras =camera_distances

//camera_distances = 40

//capture camera feed one and two

int main (int argc, char** argv)
{
	VideoCapture cap(0) cap2(1); //camera device IDs may not be 0 and 1
	if (!cap.open(0) || !cap2.open(1));
	{
		//end
	}

	while Mat frame 1,2;
	{
		for frame 1,2 ellipse algorithm...;
		{
			Mat 1; x1=a+(camera_distances/2), y1=b, z1=0, A1=A, B1=B, C1=C;
			Mat 2; x2=a-(camera_distances/2), y2=b, z2=0, A2=A, B2=B, C2=C;
		}
		// test [A1,B1;A2,B2] [-A1,-B1;A2,B2] [A1,B1;-A2,-B2] [-A1,-B1;-A2,-B2]

		if
		{
			sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)) > sqrt(pow((x2+A2)-(x1+A1),2)+pow((y2+B2)-(y1+B1),2)+pow((z2+C2)-(z1+C1),2))
		return gaze point and gaze vectors;
		}
		else if
		{
			sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)) > sqrt(pow((x2+A2)-(x1-A1),2)+pow((y2+B2)-(y1-B1),2)+pow((z2+C2)-(z1+C1),2))
		return gaze point and gaze vectors;
		}
		else if
		{
			sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)) > sqrt(pow((x2-A2)-(x1+A1),2)+pow((y2-B2)-(y1+B1),2)+pow((z2+C2)-(z1+C1),2))
		return gaze point and gaze vectors;
		}
		else
		{
			sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2)) > sqrt(pow((x2-A2)-(x1-A1),2)+pow((y2-B2)-(y1-B1),2)+pow((z2+C2)-(z1+C1),2))
		return gaze point and gaze vectors;
		}

		//use correct signs of A and B to find point of convergence/ closest passing
		//finding gaze point
/*
		variables t, s; //need to declare properly

		xa=x1+(A1*t);
		ya=y1+(B1*t);
		za=z1+(C1*t);

		xb=x2+(A2*s);
		yb=y2+(B2*s);
		zb=z2+(C2*s);

		xc=xb-xa; //xc,yc,zc is vector PQ between shortest points
		yc=yb-ya;
		zc=zb-za;

		alpha=(xc*A1)+(yc*B1)+(zc*C1); //dot product PQ.(A1,B1,C1)
		beta =(xc*A2)+(yc*B2)+(zc*C2);

		//...solve alpha and beta to get t and s

		length_PQ=sqrt((pow(xc,2))+(pow(yc,2))+(pow(zc,2)));

		gaze_point=alpha . (PQ*length_PQ/2); //dot product? is this for skew lines? also needs skew acceptable limit

		gaze_direction = [origin(x=0,y=0,z=0)] - gaze_point[x?,y?,z?]; // origin is between the eyes
		gaze_distance  = sqrt(x?*x?+y?*y?+z?*z?)*pixel_to_metre_scalar;

		*/

		//make gaze direction and distance available to other programmes

		//display mointoring video feeds 1,2
		imshow("press esc to close", frame1, frame2); //also report gaze point

    	if(waitKey(30) == 27) //wait for 'esc' key press for 30 ms. If 'esc' key is pressed, break loop
    	{
    		cout << "esc key is pressed by user" << endl;
    		break;
    	}
	}
return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////












