#include <Servo.h>

Servo servothumb;          // Define thumb servo
Servo servoindex;          // Define index servo
Servo servomajeure;
Servo servoringfinger;
Servo servopinky;
Servo servowrist;
//Servo servobiceps;
//Servo servorotate;
//Servo servoshoulder;
//Servo servoomoplat;
//Servo servoneck;
//Servo servorothead;

void setup() { 
  servothumb.attach(2);  // Set thumb servo to digital pin 2
  servoindex.attach(3);  // Set index servo to digital pin 3
  servomajeure.attach(4);
  servoringfinger.attach(5);
  servopinky.attach(6);
//  servowrist.attach(7);
//  servobiceps.attach(8);
//  servorotate.attach(9);
//  servoshoulder.attach(10);
//  servoomoplat.attach(11);
//  servoneck.attach(12);
//  servorothead.attach(13);
  
} 

void loop() {            // Loop through motion tests

  fist();        // Example: alltovirtual
  delay(2000); 
  one();        // Example: alltovirtual
  delay(1000); 
  two();        // Example: alltovirtual
  delay(1000);
  three();            // Uncomment to use this
  delay(1000); 
  four();            // Uncomment to use this
  delay(1000); 
  five();            // Uncomment to use this
  delay(2000); 
//  hangloose();        // Example: alltovirtual
//  delay(2000); 
//  rock();        // Example: alltovirtual
//  delay(1000); 
//  okay();        // Example: alltovirtual
//  delay(1000); 
//  alltovirtual();        // Example: alltovirtual
//  delay(1000);           // Wait 4000 milliseconds (4 seconds)
//  alltorest();           // Uncomment to use this
//  delay(4000);           // Uncomment to use this
}

void hangloose() {         

  servothumb.write(0);
  servoindex.write(180);
  servomajeure.write(180);
  servoringfinger.write(180);
  servopinky.write(0);
  //servowrist.write(90);
  delay (1000);
  //servowrist.write(0);
  //delay (500);
  //servowrist.write(180);
  //delay (500);
  //servowrist.write(0);
  //delay (500);
  //servowrist.write(180);
  //delay (500);
  //servowrist.write(0);
  //delay (500);
  //servowrist.write(180);
  //delay (500);
  //servowrist.write(90);

}


void two() {         
  servothumb.write(180);
  servoindex.write(0);
  servomajeure.write(0);
  servoringfinger.write(180);
  servopinky.write(180);
  //servowrist.write(90); 
}

void one() {         
  servothumb.write(60);
  delay(1000);
  servoindex.write(0);
  servomajeure.write(180);
  servoringfinger.write(180);
  servopinky.write(180);
  servothumb.write(180);
//  servowrist.write(90);   
}
void okay() {         
  servothumb.write(80);
  servoindex.write(80);
  servomajeure.write(0);
  servoringfinger.write(0);
  servopinky.write(0);
//  servowrist.write(90); 
}
void three() {         
  servothumb.write(180);
  servoindex.write(0);
  servomajeure.write(0);
  servoringfinger.write(0);
  servopinky.write(180);
//  servowrist.write(90); 
}
void four() {         
  servothumb.write(180);
  servoindex.write(0);
  servomajeure.write(0);
  servoringfinger.write(0);
  servopinky.write(0);
//  servowrist.write(90); 
}
// Motion to set the servo into "virtual" 0 position: alltovirtual
void fist() {         
  servothumb.write(180);
  servoindex.write(180);
  servomajeure.write(180);
  servoringfinger.write(180);
  servopinky.write(180);
//  servowrist.write(90);
//  servobiceps.write(0);  
//  servorotate.write(20);    //Never less then (20 degree)
//  servoshoulder.write(30);  //Never less then (30 degree)
//  servoomoplat.write(10);   //Never less then (10 degree)
//  servoneck.write(0);
//  servorothead.write(0);
}
// Motion to set the servo into "rest" position: alltorest
//void alltorest() {         
//   servothumb.write(90);
//  servoindex.write(90);
//  servomajeure.write(90);
//  servoringfinger.write(90);
//  servopinky.write(90);
//  servowrist.write(90);
//  servobiceps.write(0);     
//  servorotate.write(90);    //Never less then (20 degree)
//  servoshoulder.write(30);  //Never less then (30 degree)
//  servoomoplat.write(10);   //Never less then (10 degree)
//  servoneck.write(90);
//  servorothead.write(90);
//}



// Motion to set the servo into "max" position: alltomax
void five() {
  servothumb.write(0);
  servoindex.write(0);
  servomajeure.write(0);
  servoringfinger.write(0);
  servopinky.write(0);
//  servowrist.write(90);
//  servobiceps.write(85);      //Never more then (85 or 90degree)
//  servorotate.write(110);     //Never more then (110 degree)
//  servoshoulder.write(130);   //Never more then (130 degree)
//  servoomoplat.write(70);     //Never more then (70 degree)
//  servoneck.write(180);
//  servorothead.write(180);
 
}
