//esp32 WROOM arduino

//checking time, use global variable lastTime, return true if time from last calling is longer than ms 
bool timeCheck(unsigned long ms);

//getTempCbyIndex read temp by index
float readTemp(int index);

//get temperature by DS18B20 address
float readTempAddr(DeviceAddress adr);

//returning address of sensor (8 bytes) as hex string
String searchAddr();

//blinking led, using delay
void blinkLed();

//setting webpage background in dependence of parameter temperature, using now global variable! tempLimit (will be corrected)
//using global variable! bcgcolor 
void setBackgroundColor(float measTemp);

//setting webpage background in dependence of parameter temperature, using now global variable! tempLimit (will be corrected)
//using global variable! bcgcolor 
void setBackgroundColor(float measTemp1, float measTemp2);

//setting webpage background in dependence of parameter temperature, using now global variable! tempLimit (will be corrected)
//using global variable! bcgcolor 
void setBackgroundColor(float measTemp1, float measTemp2, float measTemp3);

//checking if temp is not over -120 C (reading all zero bits) or >80, return true if temp ok, false if not
// using global variable counter!, in counter override call ESP.restart !
bool readingTempCorrect(float tt);

//sending values to tmep or similar by httpclient, values are servername
//which is f.ex. https://yourdomain.tmep.cz/&temp= and second value is float value of temperature
//returning int - http response of server
int httpcliSendingValues(String servname, float temperVal);
 
void setup();


void loop();
