void setup(){
    pinMode(2,INPUT_PULLUP);
    Serial.begin(9600);
    for(int light = 3 ; light <= 13 ;light++){
        pinMode(light,OUTPUT);
    }
    tone(8,200,500);
    delay(250);
    tone(8,400,100);
    
}

void loop(){
    for (int lightup =0; lightup <= 13; lightup++) {
        if (lightup == 8)
        {
            digitalWrite(8, 0);
            continue;
        }
    digitalWrite(lightup, 1);
    delay(100);
    digitalWrite(lightup, 0);

        if (digitalRead(2)==0)
        {
            tone(8, 200,500);
        }
        else {
        
        }
    }
    for (int lightdown = 13; lightdown >= 3; lightdown--) {
    
        if (lightdown == 8)
        {
            digitalWrite(8, 0);
            continue;
        }
    digitalWrite(lightdown, 1);
    delay(100);
    digitalWrite(lightdown, 0);

        if (digitalRead(2)==0)
        {
            tone(8, 200,500);
        }
        else {
        
        }
    }

    
    
}


    
    
    

    

    
    
    
    


