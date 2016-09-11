#if defined(ARDUINO) 
SYSTEM_MODE(SEMI_AUTOMATIC); 
#endif

//DELAY TO HANDLE BOUNCE
int DELAY_VAL=600; 

//HOLD SET
int B0=D0; 
int B1=D1;
int B2=D2;
int B3=D3;
int B4=D4;

//PRESS SET
int B5=D5;
int B6=D6;
int B7=D7;
int B8=D8;
int B9=D9;

//LED 
int LED_A=D10;
int LED_B=D11;
int LED_C=D12;
int LED_D=D13;
int LED_E=D14;
int LED_F=D15;

//CHARACTER ORDER
String alphabet="abcdefgHijklmnopqrstuvwxyz ,!.";


void setup() {
  pinMode(B0, INPUT_PULLUP);
  pinMode(B1,INPUT_PULLUP);
  pinMode(B2, INPUT_PULLUP);
  pinMode(B3,INPUT_PULLUP);
  pinMode(B4,INPUT_PULLUP);
  pinMode(B5,INPUT_PULLUP);
  pinMode(B6,INPUT_PULLUP);
  pinMode(B7,INPUT_PULLUP);
  pinMode(B8,INPUT_PULLUP);
  pinMode(B9,INPUT_PULLUP);
  pinMode(LED_A,OUTPUT); //B0 indicator
  pinMode(LED_B,OUTPUT); //B1 indicator
  pinMode(LED_C,OUTPUT); //B2 indicator
  pinMode(LED_D,OUTPUT); //B3 indicator
  pinMode(LED_E,OUTPUT); //B4 indicator
  pinMode(LED_F,OUTPUT); //B5 indicator

  //DEFAULT LOW
  digitalWrite(LED_A, LOW);
  digitalWrite(LED_B, LOW); 
  digitalWrite(LED_C, LOW);
  digitalWrite(LED_D, LOW);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_F, HIGH); //DEFAULT
}

void loop() {

  //RESETS LED IF NOT PRESSED 
  if (digitalRead(B0)==HIGH){
    digitalWrite(LED_A,LOW);
  }
  if (digitalRead(B1)==HIGH){
    digitalWrite(LED_B,LOW);
  }
  if (digitalRead(B2)==HIGH){
    digitalWrite(LED_C,LOW);
  }
  if (digitalRead(B3)==HIGH){
    digitalWrite(LED_D,LOW);
  }
  if (digitalRead(B4)==HIGH){
    digitalWrite(LED_E,LOW);
  }
  if (digitalRead(B5)==HIGH){
    digitalWrite(LED_F,HIGH);
  }

  // FIVE DIFFERENT HOLD CASES: B0, B1, B2, B3, B4
  // FIVE PRESS CASES: B5, B6, B7, B8, B9

  //B0 (LED_A) HOLD CASE
  
  while (digitalRead(B0)==LOW){
    
    //LED IS HIGH WHILE B0 IS PRESSED, LED_F is LOW
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_F, LOW);

    //PRESS CASES
    if (digitalRead(B5)==LOW){
    Serial.print(alphabet.charAt(0));
    digitalWrite(LED_A, LOW);
    delay(DELAY_VAL);
    }
    else if (digitalRead(B6)==LOW){
    Serial.print(alphabet.charAt(1));
    digitalWrite(LED_A, LOW);
    delay(DELAY_VAL);
    }
    else if (digitalRead(B7)==LOW){
    digitalWrite(LED_A, LOW);
    Serial.print(alphabet.charAt(2));
    delay(DELAY_VAL);
    }
    else if (digitalRead(B8)==LOW){
    digitalWrite(LED_A, LOW);
    Serial.print(alphabet.charAt(3));
    delay(DELAY_VAL);
    }
    else if (digitalRead(B9)==LOW){
    digitalWrite(LED_A, LOW);
    Serial.print(alphabet.charAt(4));
    delay(DELAY_VAL);
    }  
  }

  //B1 (LED_B) HOLD CASE

  while (digitalRead(B1)==LOW){
    
    //LED IS HIGH WHILE B0 IS PRESSED, LED_F is LOW
    digitalWrite(LED_B, HIGH);
    digitalWrite(LED_F, LOW);

    //PRESS CASES
    if (digitalRead(B5)==LOW){
    Serial.print(alphabet.charAt(5));
    digitalWrite(LED_B, LOW);
    delay(DELAY_VAL);
    }
    else if (digitalRead(B6)==LOW){
    Serial.print(alphabet.charAt(6));
    digitalWrite(LED_B, LOW);
    delay(DELAY_VAL);
    }
    else if (digitalRead(B7)==LOW){
    digitalWrite(LED_B, LOW);
    Serial.print(alphabet.charAt(7));
    delay(DELAY_VAL);
    }
    else if (digitalRead(B8)==LOW){
    digitalWrite(LED_B, LOW);
    Serial.print(alphabet.charAt(8));
    delay(DELAY_VAL);
    }
    else if (digitalRead(B9)==LOW){
    digitalWrite(LED_B, LOW);
    Serial.print(alphabet.charAt(9));
    delay(DELAY_VAL);
    }  
  }
  
  
  //B2 (LED_C) HOLD CASE
  while (digitalRead(B2)==LOW){
    
    //LED IS HIGH WHILE B0 IS PRESSED, LED_F is LOW
    digitalWrite(LED_C, HIGH);
    digitalWrite(LED_F, LOW);

    //PRESS CASES
    if (digitalRead(B5)==LOW){
    Serial.print(alphabet.charAt(10));
    digitalWrite(LED_C, LOW);
    delay(DELAY_VAL);
    }
    else if (digitalRead(B6)==LOW){
    Serial.print(alphabet.charAt(11));
    digitalWrite(LED_C, LOW);
    delay(DELAY_VAL);
    }
    else if (digitalRead(B7)==LOW){
    digitalWrite(LED_C, LOW);
    Serial.print(alphabet.charAt(12));
    delay(DELAY_VAL);
    }
    else if (digitalRead(B8)==LOW){
    digitalWrite(LED_C, LOW);
    Serial.print(alphabet.charAt(13));
    delay(DELAY_VAL);
    }
    else if (digitalRead(B9)==LOW){
    digitalWrite(LED_C, LOW);
    Serial.print(alphabet.charAt(14));
    delay(DELAY_VAL);
    }  
  }
  //B3 (LED_D) HOLD CASE
  while (digitalRead(B3)==LOW){
    
    //LED IS HIGH WHILE B0 IS PRESSED, LED_F is LOW
    digitalWrite(LED_D, HIGH);
    digitalWrite(LED_F, LOW);

    //PRESS CASES
    if (digitalRead(B5)==LOW){
    Serial.print(alphabet.charAt(15));
    digitalWrite(LED_D, LOW);
    delay(DELAY_VAL);
    }
    else if (digitalRead(B6)==LOW){
    Serial.print(alphabet.charAt(16));
    digitalWrite(LED_D, LOW);
    delay(DELAY_VAL);
    }
    else if (digitalRead(B7)==LOW){
    digitalWrite(LED_D, LOW);
    Serial.print(alphabet.charAt(17));
    delay(DELAY_VAL);
    }
    else if (digitalRead(B8)==LOW){
    digitalWrite(LED_D, LOW);
    Serial.print(alphabet.charAt(18));
    delay(DELAY_VAL);
    }
    else if (digitalRead(B9)==LOW){
    digitalWrite(LED_D, LOW);
    Serial.print(alphabet.charAt(19));
    delay(DELAY_VAL);
    }  
  }
  //B4 (LED_E) HOLD CASE
  while (digitalRead(B4)==LOW){
    
    //LED IS HIGH WHILE B0 IS PRESSED, LED_F is LOW
    digitalWrite(LED_E, HIGH);
    digitalWrite(LED_F, LOW);

    //PRESS CASES
    if (digitalRead(B5)==LOW){
    Serial.print(alphabet.charAt(20));
    digitalWrite(LED_E, LOW);
    delay(DELAY_VAL);
    }
    else if (digitalRead(B6)==LOW){
    Serial.print(alphabet.charAt(21));
    digitalWrite(LED_E, LOW);
    delay(DELAY_VAL);
    }
    else if (digitalRead(B7)==LOW){
    digitalWrite(LED_E, LOW);
    Serial.print(alphabet.charAt(22));
    delay(DELAY_VAL);
    }
    else if (digitalRead(B8)==LOW){
    digitalWrite(LED_E, LOW);
    Serial.print(alphabet.charAt(23));
    delay(DELAY_VAL);
    }
    else if (digitalRead(B9)==LOW){
    digitalWrite(LED_E, LOW);
    Serial.print(alphabet.charAt(24));
    delay(DELAY_VAL);
    }  
  }
  
  // PRESS ONLY (NO HOLD) CASES)
  //LED F IS DEFAULT ON, BLINK LOW IF NOT ON
  
  if (digitalRead(B5)==LOW){
    Serial.print(alphabet.charAt(25));
    digitalWrite(LED_F, LOW);
    delay(DELAY_VAL);
  }
  
  else if (digitalRead(B6)==LOW){
    Serial.print(alphabet.charAt(26));
    digitalWrite(LED_F, LOW);
    delay(DELAY_VAL);
  }
  else if (digitalRead(B7)==LOW){
    Serial.print(alphabet.charAt(27));
    digitalWrite(LED_F, LOW);
    delay(DELAY_VAL);
  }
  
  else if (digitalRead(B8)==LOW){
    Serial.print(alphabet.charAt(28));
    digitalWrite(LED_F, LOW);
    delay(DELAY_VAL);
  }
  
  else if (digitalRead(B9)==LOW){
    Serial.print(alphabet.charAt(29));
    digitalWrite(LED_F, LOW);
    delay(DELAY_VAL);
  } 

}

