#include "Arduino.h"
#MAX_DIST     //Distancia maxima de lectura de US
  //DEFINICION FUNCIONES PARA EL OBJETO ROBOT
  robot::init {
  //definir los pines , iniciar  los timers y llamar a los objetos de los sensores  
  pinMode(SL1, INPUT);
  pinMode(SL2, INPUT);
  pinMode(SL3, INPUT);
  pinMode(SL4, INPUT);
  pinMode(SL5, INPUT);
  pinMode(SL6, INPUT);
  pinMode(SL7, INPUT);
  pinMode(SL8, INPUT);

  pinMode(md, OUTPUT);
  pinMode(md_1, OUTPUT);
  pinMode(md_2, OUTPUT); 
  pinMode(mi, OUTPUT);
  pinMode(mi_1, OUTPUT);
  pinMode(mi_2, OUTPUT); 

  Newping US1(US1t, US1e, MAX_DIST); //DEFINICION US
  Newping US2(US2t, US2e, MAX_DIST);
  Newping US3(US3t, US3e, MAX_DIST);
  Newping US4(US4t, US4e, MAX_DIST);
  
  }

  robot::
