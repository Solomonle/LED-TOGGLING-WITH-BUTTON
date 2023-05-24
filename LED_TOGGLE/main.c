#include<NXP/iolpc2124.h>
void toggle();
void init_gpio();
void delay();

void main()
{
  init_gpio();
 
  while(1){
    if (IO0PIN_bit.P0_14==0){
      toggle();
      delay();
       }
    }

 
}

void delay(){
  for(int i=0;i<20000;i++){
  
  }
  
 }
void init_gpio()  {
    PINSEL0_bit.P0_0 = 0;
    PINSEL0_bit.P0_14 = 0;
    
    IO0DIR_bit.P0_0 =1;
    IO0DIR_bit.P0_14 =0;
   
}
void toggle(){
   
  if(IO0PIN_bit.P0_0){
    
    IO0CLR_bit.P0_0 = 1;
  
    }
  else {
     IO0SET_bit.P0_0=1;
    
  }
  
  
}