// #include <WiFi.h>
// #include <WiFiClient.h>
// #include <WebServer.h>
// #include <ESPmDNS.h>

// const char* ssid = "RIMA";
// const char* password = "sydney2024";

// WebServer server(80);


// //const int led = 13;



// void setup()
// {
//     Serial.begin(115200);
//     delay(1000);
//     Serial.println("\n");

//     //WiFi.persistent(false);
//     WiFi.begin(ssid, password);
//     Serial.print("Tentative de connexion...");

//     while (WiFi.status() != WL_CONNECTED)
//     {
//         Serial.print(".");
//         delay(100);
//     }

//     Serial.println("\n");
//     Serial.println("Connexion etablie!");
//     Serial.print("Adresse IP: ");
//     Serial.println(WiFi.localIP());

// //    server.on("/", handleRoot);
//  //   server.onNotFound(handleNotFound);
//     server.begin();

//     Serial.println("Serveur web actif!");
// }


// void loop()
// {
//     server.handleClient();
// }




#include <WiFi.h>

#define CONNECTION_TIMEOUT 10

const char* ssid = "iPhone de Rima";
const char* password = "sydney2024";

void setup(){
    Serial.begin(115200);
    delay(1000);

    WiFi.mode(WIFI_STA); //Optional
    WiFi.begin(ssid, password);
    Serial.println("\nConnecting");
    int timeout_counter = 0;

    while(WiFi.status() != WL_CONNECTED){
        Serial.print(".");
        delay(200);
        timeout_counter++;
        if(timeout_counter >= CONNECTION_TIMEOUT*5){
        ESP.restart();
        }
    }

    Serial.println("\nConnected to the WiFi network");
    Serial.print("Local ESP32 IP: ");
    Serial.println(WiFi.localIP());
}

void loop(){}