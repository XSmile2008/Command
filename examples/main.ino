// #include <ArduinoSTL.h>
#include <StandardCplusplus.h>
#include <vector>
#include "Argument.h"
#include "Command.h"

using namespace std;

vector<Argument*> v;
vector<Argument*> v2;

void setup() {
  Serial.begin(9600);
  Argument* arg = new Argument(117);

  Argument arg2 = Argument(117);
  Serial.print("Hello World\n");
  // cout << "message" << endl;

  Command* command = new Command(100);
  command->toSerial();
}

void loop() {

}
