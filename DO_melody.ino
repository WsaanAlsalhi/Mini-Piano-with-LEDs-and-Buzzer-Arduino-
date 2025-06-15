// ----- Pin Definitions -----
const int buttonPins[6] = {2, 3, 4, 5, 6, 7};     // Buttons for Do–La
const int ledPins[6]    = {A0, A1, A2, A3, A4, A5}; // LEDs for Do–La
const int buzzerPin     = 8;                      // Buzzer

// Note frequencies (Hz) from Do to La
const int noteFreq[6] = {
  262, // Do
  294, // Re
  330, // Mi
  349, // Fa
  392, // Sol
  440  // La
};

void setup() {
  // Initialize buttons and LEDs
  for (int i = 0; i < 6; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP); // Button with internal pull-up
    pinMode(ledPins[i], OUTPUT);          // LED
  }
  pinMode(buzzerPin, OUTPUT);             // Buzzer
}

void loop() {
  bool anyPressed = false;

  // Check each button
  for (int i = 0; i < 6; i++) {
    if (digitalRead(buttonPins[i]) == LOW) {
      digitalWrite(ledPins[i], HIGH);    // Turn on LED
      tone(buzzerPin, noteFreq[i]);      // Play the note
      anyPressed = true;
    } else {
      digitalWrite(ledPins[i], LOW);     // Turn off LED
    }
  }

  // If no button is pressed, stop the tone
  if (!anyPressed) {
    noTone(buzzerPin);
  }
}
