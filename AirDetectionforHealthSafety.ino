int sensor = A0; //A0 would be the sensor
int sensorValue = 0; //Setting the initial condition
int redPin = 11; //LEDRGB with red color
int greenPin = 10; //LEDRGB with green color
int bluePin = 9; ////LEDRGB with blue color


void setup() {
  // Initialize the digital pin of LED RGB  as an output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
  
  Serial.begin(9600);
}

void loop() {
  // Read the input from sensor (pin analog A0)
  sensorValue = analogRead(sensor);
  Serial.println(sensorValue, DEC);
  if (sensorValue > 2000) {
    // Means that there is a pollution, red LED will be light up
    digitalWrite(redPin, HIGH);
  }
    else {
      if (sensorValue < 2000 && sensorValue > 1000){
    // The Air is not really Healthy, better using masker
    digitalWrite(greenPin, HIGH);
      }
      else {
    sensorValue < 1000; {
    // The Air is safe
    digitalWrite(bluePin, HIGH);
    }      
  }
}
}
