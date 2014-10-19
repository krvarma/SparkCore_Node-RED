// This #include statement was automatically added by the Spark IDE.
#include "DHT.h"

#define DHTPIN D4
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

int getDHTTemperature(){
    float temp = dht.readTemperature();

    return (int)temp;
}

int getDHTHumidity(){
    float humidity = dht.readHumidity();
    
    return (int)humidity;
}

void publish(){
    char szValue[32];
    
    sprintf(szValue, "{\"t\":%d, \"h\":%d}", getDHTTemperature(), getDHTHumidity());
    
    Spark.publish("dhtvalue", szValue);
}

void setup() {
     dht.begin();
}

void loop() {
    publish();
    
    delay(60000);
}