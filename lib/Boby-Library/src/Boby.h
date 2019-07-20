/*
* [foo description]
* Librairie principale des robots Boby
* @date         2018-11-22
* @author       Jules T. / Thomas Duvinage.
* @version      V0.0.0
*/

#ifndef Boby_h
#define Boby_h
#define LIBRARY_VERSION	0.0.0

/*********************************
     Constantes de calibrations
 *********************************/

#define Boby_MM_TO_STEP 345
#define Boby_RAD_TO_STEP 1861
#define Boby_DELTA_ARC 47


/*********************
	 Dependances
*********************/
#include <Arduino.h>

#include <avr/power.h>
#include <avr/sleep.h>
#include <avr/interrupt.h>

#include "BobySteppers.h"

class Boby{
public:

  Boby();

  Boby(int version);

  void init();

  void setCalibration(int distance, int rotation);

  void run();

  void stop(long temps);

  void stop();

  void gauche(long pas);

  void tournerGauche(long angleDegree);

  void droite(long pas);

  void tournerDroite(long angleDegree);

  void avant(long pas);

  void avancer(long distanceMillimeter);

  void arriere(long pas);

  void reculer(long distanceMillimeter);

  void setSpeed(float vitesse);

  void setSpeed(float vitesseD, float vitesseG);

  void logSpeed();

  void turnGo(float angle, long ligne);

  void turnGoDegree(float angle, long ligne);

  void polygone(unsigned int nbrCote, unsigned int longueur);

  void rectangle(unsigned int largeur, unsigned int longueur);

  void carre(unsigned int longueur);

  void cercle(unsigned int diametre);

  void arc(float rayon,float angle);

private:

  BobySteppers *Steppers;

  // Variable capteur de distance
  int _distDroite;
  int _distGauche;


  // Variables de calibration des deplacements
  int _mmToStep = 0;
  int _radToStep = 0;
  int _deltaArc = 0;


};
#endif
