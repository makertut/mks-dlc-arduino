#define enPin 8
 /* Stepper Motor X */
#define stepXPin 2
#define dirXPin 5

/* Stepper Motor Y */
#define stepYPin 3
#define dirYPin 6

/* Stepper Motor Z */
#define stepZPin 4
#define dirZPin 7

#define stepsPerRevolution 200
#define delayms 1000

byte incomingByte;

void setup() {
  
     Serial.begin(9600);
  // put your setup code here, to run once:
    pinMode(stepXPin, OUTPUT);
    pinMode(dirXPin, OUTPUT);

    pinMode(stepYPin, OUTPUT);
    pinMode(dirYPin, OUTPUT);

    pinMode(stepZPin, OUTPUT);
    pinMode(dirZPin, OUTPUT);
    
    pinMode(enPin , OUTPUT);

    digitalWrite( enPin , HIGH); // Disable Stepper
    digitalWrite( enPin , LOW); // Enanble Stepper
    
}

void loop() {
  
        digitalWrite(dirXPin, HIGH);
        
        // Spin the stepper motor X revolution:
        for (int i = 0; i < stepsPerRevolution; i++) {
            // These four lines result in 1 step:
          digitalWrite(stepXPin, HIGH);
          delayMicroseconds(delayms);
          digitalWrite(stepXPin, LOW);
          delayMicroseconds(delayms);
         
        }

        delay(3000);
        digitalWrite(dirXPin, LOW           
        
        
        );
        
        // Spin the stepper motor X revolution:
        for (int i = 0; i < stepsPerRevolution; i++) {
            // These four lines result in 1 step:
          digitalWrite(stepXPin, HIGH);
          delayMicroseconds(delayms);
          digitalWrite(stepXPin, LOW);
          delayMicroseconds(delayms);
         
        }
      
}
