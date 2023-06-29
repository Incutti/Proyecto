upload_port = COM02

#define buzzerPin 35
#define switchPin 34
#define ledPin 32

// lado izq  de arriba a abajo | 3.3v | dejo 3 | 35 | 34 | 32

void setup(){
  pinMode (buzzerPin, OUTPUT);
  pinMode (switchPin, INPUT);
}
//Estructuras
void punto(){	digitalWrite(buzzerPin,HIGH); digitalWrite(ledPin,HIGH);	delay(1000);
				      digitalWrite(buzzerPin,LOW);  digitalWrite(ledPin,LOW);	  delay(1000);	}
void barra(){	digitalWrite(buzzerPin,HIGH);	digitalWrite(ledPin,HIGH);  delay(2000);
  				    digitalWrite(buzzerPin,LOW);	digitalWrite(ledPin,LOW);   delay(1000);	}
//Simbolos
void letraA(){	punto();  barra();					 			               delay(2000);  }
void letraB(){  barra();  punto();  punto();  punto();           delay(2000);  }
void letraC(){  barra();  punto();  barra();  punto();           delay(2000);  }
void letraD(){  barra();  punto();  punto();                     delay(2000);  }
void letraE(){  punto();                                         delay(2000);  }
void letraF(){  punto();  punto();  barra();  punto();           delay(2000);  }
void letraG(){  barra();  barra();  punto();                     delay(2000);  }
void letraH(){  punto();  punto();  punto();  punto();			     delay(2000);  }
void letraI(){  punto();  punto();                               delay(2000);  }
void letraJ(){  punto();  barra();  barra();  barra();           delay(2000);  }
void letraK(){  barra();  punto();  barra();                     delay(2000);  }
void letraL(){  punto();  barra();  punto();  punto();           delay(2000);  }
void letraM(){  barra();  barra();                               delay(2000);  } 
void letraN(){  barra();  punto();                               delay(2000);  }
void letraO(){  barra();  barra();  barra(); 					           delay(2000);  }
void letraP(){  punto();  barra();  barra();  punto();			     delay(2000);  }
void letraQ(){  barra();  barra();  punto();  barra();           delay(2000);  }
void letraR(){  punto();  barra();  punto();                     delay(2000);  }
void letraS(){  punto();  punto();  punto();                     delay(2000);  }
void letraT(){  barra();                                         delay(2000);  }
void letraU(){  punto();  punto();  barra();                     delay(2000);  }
void letraV(){  punto();  punto();  punto();  barra();           delay(2000);  }
void letraW(){  punto();  barra();  barra();                     delay(2000);  }
void letraX(){  barra();  punto();  punto();  barra();           delay(2000);  }
void letraY(){  barra();  punto();  barra();  barra();           delay(2000);  }
void letraZ(){  barra();  barra();  punto();  punto();           delay(2000);  }

void cero()  {  barra();  barra();  barra();  barra();  barra(); delay(2000);  }
void uno()   {  punto();  barra();  barra();  barra();  barra(); delay(2000);  }  
void dos()   {  punto();  punto();  barra();  barra();  barra(); delay(2000);  }
void tres()  {  punto();  punto();  punto();  barra();  barra(); delay(2000);  }
void cuatro(){	punto();  punto();  punto();  punto();  barra(); delay(2000);  }
void cinco() {  punto();  punto();  punto();  punto();  punto(); delay(2000);  }
void seis()  {  barra();  punto();  punto();  punto();  punto(); delay(2000);  }
void siete() {  barra();  barra();  punto();  punto();  punto(); delay(2000);  }
void ocho()  {  barra();  barra();  barra();  punto();  punto(); delay(2000);  }
void nueve() {  barra();  barra();  barra();  barra();  punto(); delay(2000);  }

//Contraseñas
void contraseñaI()	{ letraP();	letraO();	dos();	cuatro();	}
void contraseñaIII(){}
void contraseñaIV(){}
void contraseñaV(){}
void contraseñaVI(){}
void contraseñaVII(){}
void contraseñaVIII(){}
void contraseñaIX(){}
void contraseñaX(){}
  
void loop(){
  int estado=digitalRead(switchPin);
  if(estado==HIGH){
    contraseñaI();
  }
}
