int intPin = 2;
int LEDPin = 5;

int state = 0;

bool printout = FALSE;

void setup()
{
	pinMode(intPin, INPUT);
	pinMode(LEDPin, OUTPUT);

	digitalWrite(LEDPin, LOW);

	Serial.begin(9600);
}







void loop()
{
	state = digitalRead(intPin);

	while (state == HIGH)
	{

		if ( printout == FALSE)
		{
			Serial.print("There's motion boi \n");
			printout = TRUE;
		}

		digitalWrite(LEDPin, HIGH);

		delay(200);

		state = digitalRead(intPin);

		digitalWrite(LEDPin, LOW);
	}

printout = FALSE;

}