#include <Stepper.h>
 
// change this to fit the number of steps per revolution
// nombre de step 
const int stepsPerRevolution = 32*64;  

const float diametre_roue = 52.3;//cette variable est a modifier en fonction de votre conception pour la roue 

const float perimetre_roue = 3.14 * diametre_roue;// formule de 2*pi*r

 
 
// initialize the stepper library on pins 8 through 11
// initialisation de la librairie stepper
// (step,1N2,1N4,1N3,1N1)
Stepper droite(stepsPerRevolution, 11, 13, 12, 10
);
Stepper gauche(stepsPerRevolution, 5, 7, 6, 4);
//Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);
 
 
void setup() {
 
  Serial.begin(9600);
}
 
void loop() {
  for(int i = 0; i<3 ; i++){
    avancer(164.222,10, stepsPerRevolution, perimetre_roue);

    tourner_droite(120,7,stepsPerRevolution,perimetre_roue);
  }
} 
