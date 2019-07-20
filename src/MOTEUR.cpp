#include<Arduino.h>
/*
float distance_rotation(float angle){
  const float rayon_robot = 56.45;// cette distance correspond à la ditance entre les joints toriques

  float perimetre_angle = (angle * rayon_robot * 3.14) / 180;

  return perimetre_angle;
  
}


//cette fonction permet de caclculer le nombre de tour et ainsi le nombre de pas a faire pour parcourir une certaine distance
int nombre_pas(float distance_parcourir, int steprevolution, float perimetre){
  float tours = distance_parcourir / perimetre; // nous calculons le nombre de tours a faire
  
  int entier = floor(tours);//on extrait les entiers et les decimals afin de determiner le nombre de pas
  float decimal = tours - entier;

  int pas = (entier * steprevolution) + (decimal * steprevolution);// on calcul le nombre de pas

  return pas ;
}

//on creer une fonction cette fonciton prend en parametre la distance a parcourir et la vitesse
void avancer(float distance, int vitesse, int steprevolution, float perimetre){//vitesse comprise en 0 et 10
  int pas = nombre_pas(distance,steprevolution,perimetre);// on recupere le nombre de pas 
  
  gauche.setSpeed(vitesse);
  droite.setSpeed(vitesse);
  
  int n = 0;// on defini une variable qui sert de curseur 
  for(n = 0; n<pas; n++){
      gauche.step(1);
      droite.step(-1);
    }
}

//on creer une fonction cette fonciton prend en parametre la distance a parcourir et la vitesse
void reculer(float distance, int vitesse, int steprevolution, float perimetre){//vitesse comprise en 0 et 10
  int pas = nombre_pas(distance,steprevolution,perimetre);// on recupere le nombre de pas 
  
  gauche.setSpeed(vitesse);
  droite.setSpeed(vitesse);
  
  int n = 0;// on defini une variable qui sert de curseur 
  for(n = 0; n<pas; n++){
      gauche.step(-1);
      droite.step(1);
    }
}

void tourner_droite(float angle, int vitesse, int steprevolution, float perimetre){
  float distance = distance_rotation(angle);
  int pas = nombre_pas(distance,steprevolution,perimetre);// on recupere le nombre de pas
  Serial.print(pas);

  gauche.setSpeed(vitesse);
  droite.setSpeed(vitesse);
  
  int n = 0;// on defini une variable qui sert de curseur 
  for(n = 0; n<pas; n++){
      gauche.step(-1);
      droite.step(-1);
    }
}

*/