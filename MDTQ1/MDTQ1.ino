int Speed = 1; int time = 0;

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
    for (int light =3; light <= 13; light++) {
        if (light == 8)
        {
            digitalWrite(8, 0);
            continue;
        }
        digitalWrite(light, 1);
        delay(100/(Speed));
        digitalWrite(light, 0);

            int x = 0; 
            while (digitalRead(2)==0) //กดปุ่มค้างยังไงค่าก็นับแค่ค่าเดียว
            {
            x++;
            delay(50);
                if (x <= 1)
                {
                time++; //จำนวนครั้งที่กด
                    for (int i = 1;i <= 1 ;i++) 
                    {
                    Speed = Speed * 2;//ค่าเพิ่มความเร็ว
                    }
                tone(8,400,100);
                Serial.println("Faster X 2 (Current Speed : X" + String(Speed) + ")");

                }
            }
        
    }



    for (int light =13; light >= 3; light--) {
        if (light == 8)
        {
            digitalWrite(8, 0);
            continue;
        }
        digitalWrite(light, 1);
        delay(100/(Speed));
        digitalWrite(light, 0);

            int x = 0; 
            while (digitalRead(2)==0) //กดปุ่มค้างยังไงค่าก็นับแค่ค่าเดียว
            {
            x++;
            delay(50);
                if (x <= 1)
                {
                time++; //จำนวนครั้งที่กด
                    for (int i = 1;i <= 1 ;i++) 
                    {
                    Speed = Speed * 2;//ค่าเพิ่มความเร็ว
                    }
                tone(8,400,100);
                Serial.println("Faster X 2 (Current Speed : X" + String(Speed) + ")");

                }
            }
        
    }


}


    
    
    

    

    
    
    
    


