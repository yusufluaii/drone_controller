#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>



const char *wifiName = "JOGLO";
const char *wifiPass = "BAYAR3000";


ESP8266WebServer server(80);

void setup(){
  Serial.begin(115200);
  WiFi.begin(wifiName,wifiPass);
  Serial.print("Connected");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
 }
