#ifdef robot_h
#define robot_h

#include <NewPing.h>  //libreria US
//definir aquí mediante "#define" los pines 
//US dos define, buscar libreria 
//SL 1 pin de lectura digital 
//Motores 1 analogWrite(PWM) y dos digitales (para los sentidos de giro)
//RGB investigar o libreria 

#define md        //pin PWM motor derecho
#define md_1      //señal sentido 1
#define md_2      //señal sentido 2 

#define mi        //pin PWM motor izquierdo
#define mi_1      //señal sentido 1
#define mi_2      //señal sentido 2 

#define US1t
#define US1e

#define US2t
#define US2e

#define US3t
#define US3e

#define US4t
#define US4e

#define SL1
#define SL2
#define SL3
#define SL4
#define SL5
#define SL6
#define SL7
#define SL8


class robot
{
  public:

    void init(  );

    void avanza ( ); 

    void retrocede (  );

    void para ( );

    void izquierda( );

    void derecha (  );

    void leeUS ( ); 

    void leeSL (); 

  
  private:
  
}

#endif
