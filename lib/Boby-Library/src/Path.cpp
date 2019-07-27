#include <Arduino.h>
#include "Boby.h"


void Boby::avoid_obstacles(unsigned long robot_diagonal){//for my robot it is 13cm
	//this void allowed the robot to avoid obstacles 
	//for example if an obstable is in front of the robot, it will avoid it and return on the way it was.
	int securite = 30;//permit to be sure that the robot will not touch the obstacle
	int n = 0; //count the number that the robot went forward


	while (distance_Milieu() < (robot_diagonal + securite))
	{
		tournerDroite(70);
		avancer(50);
		tournerGauche(70);
		n+=50;
	}

	tournerDroite(70);
	avancer(70);//cette distance correpond à la moitie de la largeur du robot
	n+=70;
	tournerGauche(70);
	avancer(50 + robot_diagonal + securite);
	tournerGauche(70);

	while (distance_Milieu() < (robot_diagonal + securite)){
		tournerDroite(70);
		avancer(50);
		tournerGauche(70);
	}

	avancer(n);
	tournerDroite(70);
}

void Boby::autonomous_direction(){
	
	
}