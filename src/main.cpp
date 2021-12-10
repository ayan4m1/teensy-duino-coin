/* DuinoCoin Teensy 4.1 by ayan4m1 */

#include <ArduinoJson.h>
#include <Ducos1a.h>
#include <DuinoCoin.h>

DuinoCoin miner = DuinoCoin(Serial1);

void setup() { miner.begin(); }

void loop() { miner.loop(); }
