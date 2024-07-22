/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A 2  //pin 2
  #define LEFT_ENC_PIN_B 3  //pin 3
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A A4  //pin A4
  #define RIGHT_ENC_PIN_B A5   //pin A5
#elif defined(ARDUINO_MEGA_ENC_COUNTER)

  #define LEFT_ENC_A 18
  #define LEFT_ENC_B 19

  #define RIGHT_ENC_A 2
  #define RIGHT_ENC_B 3
  
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

