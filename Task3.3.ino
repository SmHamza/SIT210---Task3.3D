int Led = D7;

void setup() {
    pinMode(Led,OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", Handler);
}

void Handler(const char *event, const char *data)
{
    if (strcmp(data,"wave")==0) 
    {
        digitalWrite(Led,HIGH);
        delay(1000);
        digitalWrite(Led,LOW);
        delay(1000);
        digitalWrite(Led,HIGH);
        delay(1000);
        digitalWrite(Led,LOW);
        delay(1000);
        digitalWrite(Led,HIGH);
        delay(1000);
        digitalWrite(Led,LOW);
        delay(1000);
    }   
    else if  (strcmp(data,"pat")==0) 
    {
        digitalWrite(Led,HIGH);
        delay(500);
        digitalWrite(Led,LOW);
        delay(500);
        digitalWrite(Led,HIGH);
        delay(500);
        digitalWrite(Led,LOW);
        delay(500);
    }
}
