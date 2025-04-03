#define BLYNK_TEMPLATE_ID "TMPL3f_WaWj8w"
#define BLYNK_TEMPLATE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "jtDIi_o-LTY5z5rfQZxF6cn4xRNzSYVn"


  #include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "SSID NO.";
char pass[] = "Password";


#define RELAY_PIN D4  // Change to the GPIO pin connected to your relay/LED

BLYNK_WRITE(V1) { // Virtual pin V1
    int switchState = param.asInt(); // Read button state
    digitalWrite(RELAY_PIN, switchState); // Control relay
    
}

void setup() {
    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, LOW); // Start with relay off
    
    Serial.begin(9600);
    Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
    Blynk.run();
    
    
}
