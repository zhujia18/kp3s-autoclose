/*******************************************************************
 * @Descripttion   : KP3S自动关机（ESP8266 D1 mini）
 * @version        : 1.0
 * @Author         : Jasper
 * @Date           : 2022-07-12 02:22
 * @LastEditTime   : 2022-07-13 00:15
*******************************************************************/

//D1 = gpio5
int kp3sStatePin = D1;
//D2 = gpio4
int powerControlPin = D2;

void setup() {
  pinMode(kp3sStatePin, INPUT);
  pinMode(powerControlPin, OUTPUT);
  digitalWrite(powerControlPin, HIGH);
}

void loop() {
  int kp3sState = digitalRead(kp3sStatePin);
  if (kp3sState==HIGH) {
    //延时1000毫秒
    delay(1000);
  } else {
    //延时5000毫秒，自行考虑散热需要的延迟关机时间
    delay(5000);
    digitalWrite(powerControlPin, LOW);
  }
}
