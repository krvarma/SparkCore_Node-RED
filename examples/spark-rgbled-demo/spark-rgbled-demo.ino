int rpin = A0;
int gpin = A1;
int bpin = A4;

int r = 255;
int g = 255;
int b = 255;

int setrgb(String args){
    char szargs[13];
    
    args.toCharArray(szargs, 12);
    
    sscanf(szargs, "%d,%d,%d", &r, &g, &b);
    
    return 1;
}

void setup() {
    pinMode(rpin, OUTPUT);
    pinMode(gpin, OUTPUT);
    pinMode(bpin, OUTPUT);
    
    Spark.function("setrgb", setrgb);
}

void loop() {
    analogWrite(rpin, r);
    analogWrite(gpin, g);
    analogWrite(bpin, b);
    delay(1000);
    analogWrite(rpin, 0);
    analogWrite(gpin, 0);
    analogWrite(bpin, 0);
    delay(1000);
}