// ***ANY PINS NOT CONNECTED TO PLATES MUST BE CONNECTED TO GROUND!!!***//
// constants won't change. They're used here to
// set pin numbers:
const int c4Pin = 2;// the number of the pushbutton pin
const int Db4Pin = 3;
const int d4Pin = 4;
const int Eb4Pin = 5;
const int e4Pin = 6;
const int f4Pin = 7;
const int Gb4Pin = 8;
const int g4Pin = 9;
const int Ab4Pin = 10;
const int a4Pin = 11;
const int Bb4Pin = 12;
const int b4Pin = 13;




// Variables will change:
 // the current state of the output pin


int c4State; // the current c4Reading from the input pin
int Db4State;
int d4State;
int Eb4State;
int e4State;
int f4State;
int Gb4State;
int g4State;
int Ab4State;
int a4State;
int Bb4State;
int b4State;

int lastc4State = LOW;   // the previous c4Reading from the input pin
int lastDb4State = LOW;
int lastd4State = LOW;
int lastEb4State = LOW;
int laste4State = LOW;
int lastf4State = LOW;
int lastGb4State = LOW;
int lastg4State = LOW;
int lastAb4State = LOW;
int lasta4State = LOW;
int lastBb4State = LOW;
int lastb4State = LOW;

// the following variables are unsigned long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
unsigned long lastC4DebounceTime = 0;  // the last time the output pin was toggled
unsigned long lastDb4DebounceTime = 0;
unsigned long lastD4DebounceTime = 0;
unsigned long lastEb4DebounceTime = 0;
unsigned long lastE4DebounceTime = 0;
unsigned long lastF4DebounceTime = 0;
unsigned long lastGb4DebounceTime = 0;
unsigned long lastG4DebounceTime = 0;
unsigned long lastAb4DebounceTime = 0;
unsigned long lastA4DebounceTime = 0;
unsigned long lastBb4DebounceTime = 0;
unsigned long lastB4DebounceTime = 0;

unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers

void setup() {
  pinMode(c4Pin, INPUT);
  pinMode(Db4Pin, INPUT);
  pinMode(d4Pin, INPUT);
  pinMode(Eb4Pin, INPUT);
  pinMode(e4Pin, INPUT);
  pinMode(f4Pin, INPUT);
  pinMode(Gb4Pin, INPUT);
  pinMode(g4Pin, INPUT);
  pinMode(Ab4Pin, INPUT);
  pinMode(a4Pin, INPUT);
  pinMode(Bb4Pin, INPUT);
  pinMode(b4Pin, INPUT);
  


  // set initial LED state

  
  Serial.begin(230400);
}

void loop() {
  // read the state of the switch into a local variable:
  int c4Reading = digitalRead(c4Pin);
  int Db4Reading = digitalRead(Db4Pin);
  int d4Reading = digitalRead(d4Pin);
  int Eb4Reading = digitalRead(Eb4Pin);
  int e4Reading = digitalRead(e4Pin);
  int f4Reading = digitalRead(f4Pin);
  int Gb4Reading = digitalRead(Gb4Pin);
  int g4Reading = digitalRead(g4Pin);
  int Ab4Reading = digitalRead(Ab4Pin);
  int a4Reading = digitalRead(a4Pin);
  int Bb4Reading = digitalRead(Bb4Pin);
  int b4Reading = digitalRead(b4Pin);

  // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH),  and you've waited
  // long enough since the last press to ignore any noise:
  // If the switch changed, due to noise or pressing:
  if (c4Reading != lastc4State) {
    // reset the debouncing timer
    lastC4DebounceTime = millis();}
  if (Db4Reading != lastDb4State) {
    lastDb4DebounceTime = millis();}
  if (d4Reading != lastd4State) {
    lastD4DebounceTime = millis();}
  if (Eb4Reading != lastEb4State) {
    lastEb4DebounceTime = millis();}
  if (e4Reading != laste4State) {
    lastE4DebounceTime = millis();}
  if (f4Reading != lastf4State) {
    lastF4DebounceTime = millis();}
  if (Gb4Reading != lastGb4State) {
    lastGb4DebounceTime = millis();}
  if (g4Reading != lastg4State) {
    lastG4DebounceTime = millis();}
  if (Ab4Reading != lastAb4State) {
    lastAb4DebounceTime = millis();}
  if (a4Reading != lasta4State) {
    lastA4DebounceTime = millis();}
  if (Bb4Reading != lastBb4State) {
    lastBb4DebounceTime = millis();}
  if (b4Reading != lastb4State) {
    lastB4DebounceTime = millis();}

    
  if ((millis() - lastC4DebounceTime) > debounceDelay) {
    // whatever the c4Reading is at, it's been there for longer
    // than the debounce delay, so take it as the actual current state:
    // if the button state has changed:
    if (c4Reading != c4State) {
      c4State = c4Reading;
      Serial.print('A');}}
  if ((millis() - lastDb4DebounceTime) > debounceDelay) {
    if (Db4Reading != Db4State) {
      Db4State = Db4Reading;
      Serial.print('B');}}
  if ((millis() - lastD4DebounceTime) > debounceDelay) {
    if (d4Reading != d4State) {
      d4State = d4Reading;
      Serial.print('C');}}
  if ((millis() - lastEb4DebounceTime) > debounceDelay) {
    if (Eb4Reading != Eb4State) {
      Eb4State = Eb4Reading;
      Serial.print('D');}}
  if ((millis() - lastE4DebounceTime) > debounceDelay) {
    if (e4Reading != e4State) {
      e4State = e4Reading;
      Serial.print('E');}}
  if ((millis() - lastF4DebounceTime) > debounceDelay) {
    if (f4Reading != f4State) {
      f4State = f4Reading;
      Serial.print('F');}}
  if ((millis() - lastGb4DebounceTime) > debounceDelay) {
    if (Gb4Reading != Gb4State) {
      Gb4State = Gb4Reading;
      Serial.print('G');}}
  if ((millis() - lastG4DebounceTime) > debounceDelay) {
    if (g4Reading != g4State) {
      g4State = g4Reading;
      Serial.print('H');}}
  if ((millis() - lastAb4DebounceTime) > debounceDelay) {
    if (Ab4Reading != Ab4State) {
      Ab4State = Ab4Reading;
      Serial.print('I');}}
  if ((millis() - lastA4DebounceTime) > debounceDelay) {
    if (a4Reading != a4State) {
      a4State = a4Reading;
      Serial.print('J');}}
  if ((millis() - lastBb4DebounceTime) > debounceDelay) {
    if (Bb4Reading != Bb4State) {
      Bb4State = Bb4Reading;
      Serial.print('K');}}
  if ((millis() - lastB4DebounceTime) > debounceDelay) {
    if (b4Reading != b4State) {
      b4State = b4Reading;
      Serial.print('L');}}


      
  // set the LED:

  // save the c4Reading.  Next time through the loop,
  // it'll be the lastc4State:
  
  lastc4State = c4Reading;
  lastDb4State = Db4Reading;
  lastd4State = d4Reading;
  lastEb4State = Eb4Reading;
  laste4State = e4Reading;
  lastf4State = f4Reading;
  lastGb4State = Gb4Reading;
  lastg4State = g4Reading;
  lastAb4State = Ab4Reading;
  lasta4State = a4Reading;
  lastBb4State = Bb4Reading;
  lastb4State = b4Reading;
}
