#include <DFRobot_YZM.h>
void setup() {
  Serial.begin(115200);
  delay(100);
  DFRobot_YZM john;
  john.setName("Michele");john.setAge(22);
  Serial.print("name=");Serial.println(john.getName());
  Serial.print("age=");Serial.println(john.getAge());
}
void loop() {
  // put your main code here, to run repeatedly:

}
