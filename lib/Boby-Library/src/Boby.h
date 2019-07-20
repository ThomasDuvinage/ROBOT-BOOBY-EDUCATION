/*
.--.       .  .           .--.      .          .
|   )     _|_ |           |   )     |         _|_
|--:  .-.  |  | .  . ____ |--'  .-. |.-.  .-.  |
|   )(   ) |  | |  |      |  \ (   )|   )(   ) |
'--'  `-'  `-'`-`--|      '   ` `-' '`-'  `-'  `-'
                   ;
                `-'
* [foo description]
* Librairie principale des robots Boby et Scott
* @date         2018-11-22
* @author       Jules T. / Adrien B. / Alexandre P.
* @entreprise   La Machinerie
* @version      V2.0.3
*/

#ifndef Boby_h
#define Boby_h
#define LIBRARY_VERSION	2.0.3

/*********************************
     Constantes de calibrations
 *********************************/

#define Boby_MM_TO_STEP 345
#define Boby_RAD_TO_STEP 1861
#define Boby_DELTA_ARC 47


/*********************
	 Dependances
*********************/
#include <Servo.h>
#include <Arduino.h>

#include <IRremote.h>
#include <avr/power.h>
#include <avr/sleep.h>
#include <avr/interrupt.h>

#include "BobySteppers.h"

void pin2_isr();

class Boby{
public:

  Servo crayon;
  IRsend irsend;
  decode_results results;

  int pin = 9;
  IRrecv irrecv = new IRrecv(pin);

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

  void leverCrayon();

  void poserCrayon();

  void bougerCrayon(int angle);

  // ----------------------------
  // Fonctions dédiées à BobyV1
  // ----------------------------

  void isIRDataReceived();

  void initIRcom();

  void sonyCode(byte data);

  bool proximite(int i = 10, int seuil = 5);

  int mesureBatterie();

  void sleepNow();

  void sleepWakeup();

private:

  int _pinBobyServo= 11  ; // Pin servo pour BobyV1

  // Définition des pins à partir de la version BobyV1
  int _pinTsop = 9;
  int _pinBobyIrEmetteur = 13 ;
  int _pinMesureBatterie = A5;
  int _pinBuzzer = 7;
  BobySteppers *Steppers;

  // Variable capteur de distance
  int _distDroite;
  int _distGauche;

  // Variable Crayon
  // Version Boby
  int _BobyBas = 90;
  int _BobyHaut = 50;

  // Variables de calibration des deplacements
  int _mmToStep = 0;
  int _radToStep = 0;
  int _deltaArc = 0;

  int servoAction = 0;

};
#endif
