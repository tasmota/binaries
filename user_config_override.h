
#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// force the compiler to show a warning to confirm that this file is inlcuded
#warning **** Using Settings from this File ***

#define CUSTOM_CONFIG
#define CUSTOM_CONFIG_REMOVALS

//#define CUSTOM_CONFIG_ZIGBEE
//#define CUSTOM_CONFIG_BATTERY
//#define THEO_CONFIG_ADDITIONS

// Settings applied globally to any binary

#ifdef CUSTOM_CONFIG  // ****************************************************************************


#endif  // CUSTOM_CONFIG ****************************************************************************


// THIS SECTION IS USED TO REMOVE EVERYTHING LISTED FROM DEFAULT BINARY

#ifdef CUSTOM_CONFIG_REMOVALS  // ******************************************************************
#warning **** Removed some defines to save code space ****

/*
#undef COLOR_TEXT                               // Global text color - Black
#undef COLOR_BACKGROUND                         // Global background color - White
#undef COLOR_FORM                               // Form background color - Greyish
#undef COLOR_INPUT_TEXT                         // Input text color - Black
#undef COLOR_INPUT                              // Input background color - White
#undef COLOR_CONSOLE_TEXT                       // Console text color - Black
#undef COLOR_CONSOLE                            // Console background color - White
#undef COLOR_TEXT_WARNING                       // Warning text color - Red
#undef COLOR_TEXT_SUCCESS                       // Success text color - Green
#undef COLOR_BUTTON_TEXT                        // Button text color - White
#undef COLOR_BUTTON                             // Button color - Blueish
#undef COLOR_BUTTON_HOVER                       // Button color when hovered over - Darker blueish
#undef COLOR_BUTTON_RESET                       // Restart/Reset/Delete button color - Redish
#undef COLOR_BUTTON_RESET_HOVER                 // Restart/Reset/Delete button color when hovered over - Darker redish
#undef COLOR_BUTTON_SAVE                        // Save button color - Greenish
#undef COLOR_BUTTON_SAVE_HOVER                  // Save button color when hovered over - Darker greenish
#undef COLOR_TIMER_TAB_TEXT                     // Config timer tab text color - White
#undef COLOR_TIMER_TAB_BACKGROUND               // Config timer tab background color - Light grey
#undef COLOR_TITLE_TEXT                         // Title text color - Whiteish
*/

#undef USE_ARDUINO_OTA                          // Disable support for Arduino OTA (+13k code)
#undef USE_DOMOTICZ                             // Disable Domoticz (+6k code, +0.3k mem)
#undef USE_HOME_ASSISTANT                       // Disable Home Assistant Discovery Support (+7k code)

#undef USE_MQTT_TLS                             // Use TLS for MQTT connection (+34.5k code, +7.0k mem and +4.8k additional during connection handshake)
  #undef USE_MQTT_TLS_CA_CERT                   // Force full CA validation instead of fingerprints, slower, but simpler to use (+2.2k code, +1.9k mem during connection handshake)
  #undef USE_MQTT_TLS_FORCE_EC_CIPHER           // Force Elliptic Curve cipher (higher security) required by some servers (automatically enabled with USE_MQTT_AWS_IOT) (+11.4k code, +0.4k mem)
  #undef USE_MQTT_AWS_IOT                       // Enable MQTT for AWS IoT - requires a private key (+11.9k code, +0.4k mem)

#undef USE_KNX                                  // Disable KNX IP Protocol Support (+9.4k code, +3k7 mem)
#undef USE_WEBSERVER
#undef USE_JAVASCRIPT_ES6                       // Disable ECMAScript6 syntax using less JavaScript code bytes (fails on IE11)
#undef USE_WEBSEND_RESPONSE                     // DIsable command WebSend response message (+1k code)
#undef USE_EMULATION_HUE                        // Disable Hue Bridge emulation for Alexa (+18k code, +2k mem)
#undef USE_EMULATION_WEMO                       // Disable Belkin WeMo emulation for Alexa (+18k code, +2k mem)
#undef USE_DISCOVERY                            // Disable mDNS for the following services (+8k code, +0.3k mem)
#undef USE_TIMERS                               // Disable support for up to 16 timers (+2k2 code)
#undef USE_TIMERS_WEB                           // Disable timer webpage support (+4k5 code)
#undef USE_SUNRISE                              // Disable support for Sunrise and sunset tools (+16k)

#undef USE_RULES                                // Disable support for rules (+4k4 code)
  #undef USE_EXPRESSION                         // Disable support for expression evaluation in rules (+3k2 code, +64 bytes mem)
    #undef SUPPORT_IF_STATEMENT                 // Disable support for IF statement in rules (+4k2 code, -332 bytes mem)
  #undef SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)

#undef USE_SCRIPT                               // Disable support for script
  #undef USE_SCRIPT_FATFS                       // Disable support for script storage on SD card (+12k code, +4k mem)

#undef ROTARY_V1                                // Disable support for MI Desk Lamp
#undef USE_SONOFF_RF                            // Add support for Sonoff Rf Bridge
  #undef USE_RF_FLASH                           // Add support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB (+3k code)
#undef USE_SONOFF_SC                            // Disable support for Sonoff Sc (+1k1 code)
#undef USE_TUYA_MCU                             // Disable support for Tuya Serial Dimmer
#undef USE_ARMTRONIX_DIMMERS                    // Disable support for Armtronix Dimmers (+1k4 code)
#undef USE_PS_16_DZ                             // Disable support for PS-16-DZ Dimmer (+2k code)
#undef USE_SONOFF_IFAN                          // Disable support for Sonoff iFan02 and iFan03 (+2k code)
#undef USE_BUZZER                               // Disable support for a buzzer (+0k6 code)
#undef USE_ARILUX_RF                            // Disable support for Arilux RF remote controller (+0k8 code, 252 iram (non 2.3.0))
#undef USE_SHUTTER                              // Disable Shutter support for up to 4 shutter with different motortypes (+6k code)
#undef USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
#undef USE_EXS_DIMMER                           // Add support for ES-Store WiFi Dimmer (+2k6 code)
#undef USE_HOTPLUG                              // Add support for HotPlug
#undef USE_DEVICE_GROUPS                        // Add support for device groups (+4k code)
#undef USE_PWM_DIMMER                           // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+4k5 code)
  #undef USE_PWM_DIMMER_REMOTE                  // Add support for remote switches to PWM Dimmer, also adds device groups support (+0k7 code, also includes device groups)
#undef USE_KEELOQ                               // Add support for controling Jarolift rollers by Keeloq algorithm
#undef USE_SONOFF_D1                            // Add support for Sonoff D1 Dimmer

// -- Optional light modules ---------------------
#undef USE_WS2812                               // Disable WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //
  #undef USE_WS2812_DMA                         // Disable DMA supports only GPIO03 (= Serial RXD) (+1k mem). When USE_WS2812_DMA is enabled expect Exceptions on Pow
  #undef USE_WS2812_HARDWARE                    // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106)
  #undef USE_WS2812_CTYPE                       // WS2812 Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
#undef USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1 and Ailight
#undef USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
#undef USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
#undef USE_SONOFF_L1                            // Add support for Sonoff L1 led control
#undef USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller

#undef USE_COUNTER                              // Disable counters
#undef USE_ADC_VCC

#undef USE_DS18x20                              // Disable support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)
  #undef W1_PARASITE_POWER                      // If using USE_DS18x20 then optimize for parasite powered sensors

#undef USE_I2C                                  // Disable I2C using library wire (+10k code, 0k2 mem, 124 iram)
#undef USE_SHT                                  // Disable SHT1X sensor (+1k4 code)
#undef USE_HTU                                  // Disable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
#undef USE_BMP                                  // Disable BMP085/BMP180/BMP280/BME280 sensor (I2C address 0x76 or 0x77) (+4k code)
  #undef USE_BME680                             // Disable support for BME680 sensor using Bosch BME680 library (+4k code)
#undef USE_BH1750                               // Disable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
#undef USE_VEML6070                             // Disable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+0k5 code)
#undef USE_ADS1115                              // Disable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
#undef USE_INA219                               // Disable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
#undef USE_INA226                               // Disable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
#undef USE_SHT3X                                // Disable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
#undef USE_TSL2561                              // Disable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
#undef USE_TSL2591                              // Disable TSL2591 sensor (I2C address 0x29, 0x39 or 0x49) using library Adafruit_TSL2591 (+2k3 code)
#undef USE_MGS                                  // Disable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
#undef USE_SGP30                                // Disable SGP30 sensor (I2C address 0x58) (+1k1 code)
#undef USE_SI1145                               // Disable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
#undef USE_LM75AD                               // Disable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
#undef USE_APDS9960                             // Disable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
#undef USE_MCP230xx                             // Disable MCP23008/MCP23017 for GP INPUT ONLY (I2C addresses 0x20 - 0x27) providing command Sensor29 for configuration (+2k2 code)
#undef USE_PCA9685                              // Disable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
#undef USE_MPR121                               // Disable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
#undef USE_CCS811                               // Disable CCS811 sensor (I2C address 0x5A) (+2k2 code)
#undef USE_MPU6050                              // Disable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+2k6 code)
#undef USE_DS3231                               // Disable DS3231 external RTC in case no Wifi is avaliable. See docs in the source file (+1k2 code)
//  #undef USE_RTC_ADDR  0x68                     // Default I2C address 0x68
#undef USE_MGC3130                              // Disable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
#undef USE_MAX44009                             // Disable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
#undef USE_SCD30                                // Disable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
#undef USE_SPS30                                // Disable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
#undef USE_ADE7953                              // Disable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
#undef USE_VL53L0X                              // Disable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
#undef USE_MLX90614                             // Disable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
#undef USE_CHIRP                                // Disable CHIRP soil moisture sensor (variable I2C address, default 0x20)
#undef USE_PAJ7620                              // Disable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
#undef USE_PCF8574                              // Disable PCF8574 I/O Expander (I2C addresses 0x20 - 0x27 and 0x38 - 0x3F) (+1k9 code)
#undef USE_HIH6                                 // Disable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
#undef USE_DHT12                                // Disable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
#undef USE_DS1624                               // Disable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F)
#undef USE_AHT1x                                // Disable AHT10/15 humidity and temperature sensor (I2C address 0x38) (+0k8 code)
#undef USE_WEMOS_MOTOR_V1                       // Disable Wemos motor driver V1 ()
#undef USE_HDC1080                              // Disable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)

#undef USE_MHZ19                                // Disable support for MH-Z19 CO2 sensor (+2k code)
#undef USE_SENSEAIR                             // Disable support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
#undef USE_PMS5003                              // Disable support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
#undef USE_NOVA_SDS                             // Disable support for SDS011 and SDS021 particle concentration sensor (+0k7 code)
#undef USE_HPMA                                 // Disable support for Honeywell HPMA115S0 particle concentration sensor (+1k4)
#undef USE_SERIAL_BRIDGE                        // Disable support for software Serial Bridge (+0k8 code)
#undef USE_MP3_PLAYER                           // Disable Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
#undef USE_AZ7798                               // Disable support for AZ-Instrument 7798 CO2 datalogger (+1k6 code)
#undef USE_PN532_HSU                            // Disable support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
  #undef USE_PN532_CAUSE_EVENTS                 // Cause event execution for PN532_UID= and PN532_DATA=[if defined] (+ 30 bytes code)
  #undef USE_PN532_DATA_FUNCTION                // Disable sensor40 command support for erase, setting data block content (+1k7 code, 388 bytes mem)
  #undef USE_PN532_DATA_RAW                     // Allow DATA block to be used by non-alpha-numberic data (+ 80 bytes code, 48 bytes ram)
#undef USE_RDM6300                              // Disable support for RDM6300 125kHz RFID Reader (+0k8)
#undef USE_IBEACON                              // Disable support for bluetooth LE passive scan of ibeacon devices (uses HM17 module)
#undef USE_GPS                                  // Disable support for GPS and NTP Server for becoming Stratus 1 Time Source (+ 3.1kb flash, +132 bytes RAM)
  #undef USE_FLOG                               // Disable support for GPS logging in OTA's Flash (Experimental) (+ 2.9kb flash, +8 bytes RAM)
#undef USE_HM10                                 // Disable support for HM-10 as a BLE-bridge for the LYWSD03 (+5k1 code)
#undef USE_HRXL                                 // Disable support for MaxBotix HRXL-MaxSonar ultrasonic range finders (+0k7)

// Power monitoring sensors ----------------------
#undef USE_ENERGY_MARGIN_DETECTION              // Disable support for Energy Margin detection (+1k6 code)
  #undef USE_ENERGY_POWER_LIMIT                 // Disable additional support for Energy Power Limit detection (+1k2 code)
#undef USE_PZEM004T                             // Disable support for PZEM004T Energy monitor (+2k code)
#undef USE_PZEM_AC                              // Disable support for PZEM014,016 Energy monitor (+1k1 code)
#undef USE_PZEM_DC                              // Disable support for PZEM003,017 Energy monitor (+1k1 code)
#undef USE_MCP39F501                            // Disable support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
#undef USE_SDM120                               // Disable support for Eastron SDM120-Modbus energy monitor (+1k1 code)
#undef USE_SDM630                               // Disable support for Eastron SDM630-Modbus energy monitor (+0k6 code)
#undef USE_DDS2382                              // Disable support for Hiking DDS2382 Modbus energy monitor (+0k6 code)
#undef USE_DDSU666                              // Disable support for Chint DDSU666 Modbus energy monitor (+0k6 code)
#undef USE_SOLAX_X1                             // Disable support for Solax X1 series Modbus log info (+4k1 code)
#undef USE_LE01MR                               // DIsable support for F&F LE-01MR modbus energy meter

// -- Low level interface devices -----------------
#undef USE_DHT                                  // Disable support for DHT11, AM2301 (DHT21, DHT22, AM2302, AM2321) and SI7021 Temperature and Humidity sensor

#undef USE_MAX31855                             // Disable MAX31855 K-Type thermocouple sensor using softSPI
#undef USE_MAX31865                             // Disable support for MAX31865 RTD sensors using softSPI

// -- IR Remote features --------------------------
#undef USE_IR_REMOTE_FULL                       // Activate all protocols from IRremoteESP8266 - activating this option will ignore all other USE_IR_REMOTE_* options and set them all to active
#undef USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k3 code, 0k3 mem, 48 iram)
  #undef USE_IR_SEND_NEC                        // Support IRsend NEC protocol
  #undef USE_IR_SEND_RC5                        // Support IRsend Philips RC5 protocol
  #undef USE_IR_SEND_RC6                        // Support IRsend Philips RC6 protocol

  #undef USE_IR_RECEIVE                         // Support for IR receiver (+7k2 code, 264 iram)

// -- Zigbee interface ----------------------------
#undef USE_ZIGBEE                               // Disable serial communication with Zigbee CC2530 flashed with ZNP

// ------------------------------------------------

#undef USE_SR04                                 // Disable support for HC-SR04 ultrasonic devices (+1k code)

#undef USE_TM1638                               // Disable support for TM1638 switches copying Switch1 .. Switch8 (+1k code)
#undef USE_HX711                                // Disable support for HX711 load cell (+1k5 code)
  #undef USE_HX711_GUI                          // Disable optional web GUI to HX711 as scale (+1k8 code)

#undef USE_TX20_WIND_SENSOR                     // Disable support for La Crosse TX20 anemometer (+2k6/0k8 code)
#undef USE_TX23_WIND_SENSOR                     // Disable support for La Crosse TX23 anemometer (+2k7/1k code)

#undef USE_RC_SWITCH                            // Disable support for RF transceiver using library RcSwitch (+2k7 code, 460 iram)

#undef USE_RF_SENSOR                            // Disable support for RF sensor receiver (434MHz or 868MHz) (+0k8 code)
  #undef USE_THEO_V2                            // Disable support for decoding Theo V2 sensors as documented on https://sidweb.nl using 434MHz RF sensor receiver (+1k4 code)
  #undef USE_ALECTO_V2                          // Disable support for decoding Alecto V2 sensors like ACH2010, WS3000 and DKW2012 weather stations using 868MHz RF sensor receiver (+1k7 code)

#undef USE_HRE                                  // Disable support for Badger HR-E Water Meter (+1k4 code)
#undef USE_A4988_STEPPER                        // Disable support for A4988 stepper-motor-driver-circuit (+10k5 code)

#undef USE_TASMOTA_SLAVE                        // Disable support for Arduino Uno/Pro Mini via serial interface including flashing (+2k3 code, 44 mem)

//#undef DEBUG_TASMOTA_CORE                       // Disable core debug messages
//#undef DEBUG_TASMOTA_DRIVER                     // Disable driver debug messages
//#undef DEBUG_TASMOTA_SENSOR                     // DIsable sensor debug messages
//#undef DEBUG_TASMOTA_TRACE                      // Disable trace debug messages

#endif  // CUSTOM_CONFIG_REMOVALS *******************************************************************
/*
 _______ _________ _______  ______   _______  _______ 
/ ___   )\__   __/(  ____ \(  ___ \ (  ____ \(  ____ \
\/   )  |   ) (   | (    \/| (   ) )| (    \/| (    \/
    /   )   | |   | |      | (__/ / | (__    | (__    
   /   /    | |   | | ____ |  __ (  |  __)   |  __)   
  /   /     | |   | | \_  )| (  \ \ | (      | (      
 /   (_/\___) (___| (___) || )___) )| (____/\| (____/\
(_______/\_______/(_______)|/ \___/ (_______/(_______/ */
                                                      
#ifdef CUSTOM_CONFIG_ZIGBEE  // *******************************************************************

#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "zigbee"

#undef OTA_URL
#define OTA_URL                " "  // [OtaUrl]

//#define USE_ARDUINO_OTA                          // Add optional support for Arduino OTA (+13k code)
#define USE_DOMOTICZ                             // Enable Domoticz (+6k code, +0.3k mem)
#define USE_HOME_ASSISTANT                       // Enable Home Assistant Discovery Support (+7k code)

//#define USE_MQTT_TLS                             // Use TLS for MQTT connection (+34.5k code, +7.0k mem and +4.8k additional during connection handshake)
//  #define USE_MQTT_TLS_CA_CERT                   // Force full CA validation instead of fingerprints, slower, but simpler to use (+2.2k code, +1.9k mem during connection handshake)
//  #define USE_MQTT_TLS_FORCE_EC_CIPHER           // Force Elliptic Curve cipher (higher security) required by some servers (automatically enabled with USE_MQTT_AWS_IOT) (+11.4k code, +0.4k mem)
//  #define USE_MQTT_AWS_IOT                       // Enable MQTT for AWS IoT - requires a private key (+11.9k code, +0.4k mem)

//#define USE_KNX                                  // Enable KNX IP Protocol Support (+9.4k code, +3k7 mem)
#define USE_WEBSERVER                            // Enable web server and Wifi Manager (+66k code, +8k mem)
  #define USE_JAVASCRIPT_ES6                     // Enable ECMAScript6 syntax using less JavaScript code bytes (fails on IE11)
#define USE_WEBSEND_RESPONSE                   // Enable command WebSend response message (+1k code)
//  #define USE_EMULATION_HUE                      // Enable Hue Bridge emulation for Alexa (+14k code, +2k mem)
//  #define USE_EMULATION_WEMO                     // Enable Belkin WeMo emulation for Alexa (+6k code, +2k mem)
//  #define USE_SENDMAIL

//#define USE_DISCOVERY                            // Enable mDNS for the following services (+8k code, +0.3k mem)
#define USE_TIMERS                               // Add support for up to 16 timers (+2k2 code)
  #define USE_TIMERS_WEB                         // Add timer webpage support (+4k5 code)
  #define USE_SUNRISE                            // Add support for Sunrise and sunset tools (+16k)

#define USE_RULES                                // Add support for rules (+4k4 code)
//  #define USE_EXPRESSION                         // Add support for expression evaluation in rules (+3k2 code, +64 bytes mem)
//    #define SUPPORT_IF_STATEMENT                 // Add support for IF statement in rules (+4k2 code, -332 bytes mem)
//  #define SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)

//#define USE_SCRIPT                               // Add support for script
  #define USE_SCRIPT_FATFS 4                     // Add support for script storage on SD card (+12k code, +4k mem)

// -- Optional modules ----------------------------
//#define ROTARY_V1                                // Add support for MI Desk Lamp
//#define USE_SONOFF_RF                            // Add support for Sonoff Rf Bridge
//  #define USE_RF_FLASH                           // Add support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB (+3k code)
//#define USE_SONOFF_SC                            // Add support for Sonoff Sc (+1k1 code)
//#define USE_TUYA_MCU                             // Add support for Tuya Serial Dimmer
//#define USE_ARMTRONIX_DIMMERS                    // Add support for Armtronix Dimmers (+1k4 code)
//#define USE_PS_16_DZ                             // Add support for PS-16-DZ Dimmer and Sonoff L1 (+2k code)
//#define USE_SONOFF_IFAN                          // Add support for Sonoff iFan02 and iFan03 (+2k code)
//#define USE_BUZZER                               // Add support for a buzzer (+0k6 code)
//#define USE_ARILUX_RF                            // Add support for Arilux RF remote controller (+1k code, 252 iram (non 2.3.0))
//#define USE_SHUTTER                              // Add Shutter support for up to 4 shutter with different motortypes (+6k code)
//#define USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
//#define USE_EXS_DIMMER                           // Add support for ES-Store WiFi Dimmer (+2k6 code)
//#define USE_HOTPLUG                              // Add support for HotPlug
//#define USE_DEVICE_GROUPS                      // Add support for device groups (+4k code)
//#define USE_PWM_DIMMER                           // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+4k5 code)
//  #define USE_PWM_DIMMER_REMOTE                  // Add support for remote switches to PWM Dimmer, also adds device groups support (+0k7 code, also includes device groups)
//#define USE_KEELOQ                               // Add support for Jarolift rollers by Keeloq algorithm (+4k5 code)
//#define USE_SONOFF_D1                            // Add support for Sonoff D1 Dimmer

// -- Optional light modules ----------------------
// #undef USE_LIGHT    // DISABLES LIGHTS ????
// #define USE_WS2812                               // WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //
// //  #define USE_WS2812_DMA                         // DMA supports only GPIO03 (= Serial RXD) (+1k mem). When USE_WS2812_DMA is enabled expect Exceptions on Pow
//   #define USE_WS2812_HARDWARE  NEO_HW_WS2812     // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106)
// //  #define USE_WS2812_CTYPE     NEO_GRB          // WS2812 Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
//   #define USE_WS2812_CTYPE     NEO_GRBW          // WS2812 Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
// #define USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1, Ailight and Lohas
// #define USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
// #define USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
// #define USE_SONOFF_L1                            // Add support for Sonoff L1 led control
//#define USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller

//#define USE_COUNTER                              // Enable counters
//#define USE_ADC_VCC                              // Display Vcc in Power status. Disable for use as Analog input on selected devices

// #define USE_DS18x20                              // Add support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)
//  #define W1_PARASITE_POWER                      // Optimize for parasite powered sensors

// -- I2C sensors ---------------------------------
// #define USE_I2C                                  // I2C using library wire (+10k code, 0k2 mem, 124 iram)
#ifdef USE_I2C
//  #define USE_SHT                                // Enable SHT1X sensor (+1k4 code)
//  #define USE_HTU                                // Enable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
//  #define USE_BMP                                // Enable BMP085/BMP180/BMP280/BME280 sensor (I2C address 0x76 or 0x77) (+4k code)
    #define USE_BME680                           // Enable support for BME680 sensor using Bosch BME680 library (+4k code)
//  #define USE_BH1750                             // Enable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
//  #define USE_VEML6070                           // Enable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+0k5 code)
//  #define USE_ADS1115                            // Enable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
//  #define USE_INA219                             // Enable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
//  #define USE_INA226                             // Enable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
//  #define USE_SHT3X                              // Enable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
//  #define USE_TSL2561                            // Enable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
//  #define USE_TSL2591                            // Enable TSL2591 sensor (I2C address 0x29, 0x39 or 0x49) using library Adafruit_TSL2591 (+2k3 code)
//  #define USE_MGS                                // Enable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
    #define MGS_SENSOR_ADDR    0x04              // Default Mutichannel Gas sensor i2c address
//  #define USE_SGP30                              // Enable SGP30 sensor (I2C address 0x58) (+1k1 code)
//  #define USE_SI1145                             // Enable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
//  #define USE_LM75AD                             // Enable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
//  #define USE_APDS9960                           // Enable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
//  #define USE_MCP230xx                           // Enable MCP23008/MCP23017 for GP INPUT ONLY (I2C addresses 0x20 - 0x27) providing command Sensor29 for configuration (+2k2 code)
//    #define USE_MCP230xx_ADDR 0x20               // Enable MCP23008/MCP23017 I2C Address to use (Must be within range 0x20 through 0x27 - set according to your wired setup)
//    #define USE_MCP230xx_OUTPUT                  // Enable MCP23008/MCP23017 OUTPUT support through sensor29 commands (+1k code)
//    #define USE_MCP230xx_DISPLAYOUTPUT           // Enable MCP23008/MCP23017 to display state of OUTPUT pins on Web UI (+0k2 code)
//  #define USE_PCA9685                            // Enable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
//    #define USE_PCA9685_ADDR 0x40                // Enable PCA9685 I2C Address to use (Must be within range 0x40 through 0x47 - set according to your wired setup)
//    #define USE_PCA9685_FREQ 50                  // Define default PWM frequency in Hz to be used (must be within 24 to 1526) - If other value is used, it will rever to 50Hz
//  #define USE_MPR121                             // Enable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
//  #define USE_CCS811                             // Enable CCS811 sensor (I2C address 0x5A) (+2k2 code)
//  #define USE_MPU6050                            // Enable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+2k6 code)
//  #define USE_DS3231                             // Enable DS3231 external RTC in case no Wifi is avaliable. See docs in the source file (+1k2 code)
//    #define USE_RTC_ADDR  0x68                   // Default I2C address 0x68
//  #define USE_MGC3130                            // Enable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
//  #define USE_MAX44009                           // Enable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
//  #define USE_SCD30                              // Enable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
//  #define USE_SPS30                              // Enable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
//  #define USE_ADE7953                            // Enable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
//  #define USE_VL53L0X                            // Enable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
//  #define USE_MLX90614                           // Enable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
//  #define USE_CHIRP                              // Enable CHIRP soil moisture sensor (variable I2C address, default 0x20)
//  #define USE_PAJ7620                            // Enable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
//  #define USE_PCF8574                            // Enable PCF8574 I/O Expander (I2C addresses 0x20 - 0x27 and 0x38 - 0x3F) (+1k9 code)
//  #define USE_HIH6                               // Enable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
//  #define USE_DHT12                              // [I2cDriver41] Enable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
//  #define USE_DS1624                             // [I2cDriver42] Enable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F)
//  #define USE_AHT1x                              // [I2cDriver43] Enable AHT10/15 humidity and temperature sensor (I2C address 0x38) (+0k8 code)
//  #define USE_WEMOS_MOTOR_V1                     // [I2cDriver44] Enable Wemos motor driver V1 ()
//  #define USE_HDC1080                            // [I2cDriver45] Enable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)

//   #define USE_DISPLAY                            // Add I2C Display Support (+2k code)
//     #define USE_DISPLAY_MODES1TO5                // Enable display mode 1 to 5 in addition to mode 0
//     #define USE_DISPLAY_LCD                      // [DisplayModel 1] Enable Lcd display (I2C addresses 0x27 and 0x3F) (+6k code)
//     #define USE_DISPLAY_SSD1306                  // [DisplayModel 2] Enable SSD1306 Oled 128x64 display (I2C addresses 0x3C and 0x3D) (+16k code)
//     #define USE_DISPLAY_MATRIX                   // [DisplayModel 3] Enable 8x8 Matrix display (I2C adresseses see below) (+11k code)
//       #define MTX_ADDRESS1     0x71              // [DisplayAddress1] I2C address of first 8x8 matrix module
//       #define MTX_ADDRESS2     0x74              // [DisplayAddress2] I2C address of second 8x8 matrix module
//       #define MTX_ADDRESS3     0x75              // [DisplayAddress3] I2C address of third 8x8 matrix module
//       #define MTX_ADDRESS4     0x72              // [DisplayAddress4] I2C address of fourth 8x8 matrix module
//       #define MTX_ADDRESS5     0x73              // [DisplayAddress5] I2C address of fifth 8x8 matrix module
//       #define MTX_ADDRESS6     0x76              // [DisplayAddress6] I2C address of sixth 8x8 matrix module
//       #define MTX_ADDRESS7     0x00              // [DisplayAddress7] I2C address of seventh 8x8 matrix module
//       #define MTX_ADDRESS8     0x00              // [DisplayAddress8] I2C address of eigth 8x8 matrix module
//     #define USE_DISPLAY_SH1106                   // [DisplayModel 7] Enable SH1106 Oled 128x64 display (I2C addresses 0x3C and 0x3D)
#endif  // USE_I2C

// // -- SPI sensors ---------------------------------
// #define USE_SPI                                  // Hardware SPI using GPIO12(MISO), GPIO13(MOSI) and GPIO14(CLK) in addition to two user selectable GPIOs(CS and DC)
// #ifdef USE_SPI
// //  #define USE_NRF24                              // Add SPI support for NRF24L01(+) (+2k6 code)
//   #ifdef USE_NRF24
//     #define USE_MIBLE                            // BLE-bridge for some Mijia-BLE-sensors (+4k7 code)
//   #else
//     #ifndef USE_DISPLAY
//       #define USE_DISPLAY                        // Add SPI Display support for 320x240 and 480x320 TFT
//     #endif
//       #define USE_DISPLAY_ILI9341                // [DisplayModel 4] Enable ILI9341 Tft 480x320 display (+19k code)
// //      #define USE_DISPLAY_EPAPER_29              // [DisplayModel 5] Enable e-paper 2.9 inch display (+19k code)
// //      #define USE_DISPLAY_EPAPER_42              // [DisplayModel 6] Enable e-paper 4.2 inch display
// //      #define USE_DISPLAY_ILI9488                // [DisplayModel 8] [I2cDriver38] (Touch)
// //      #define USE_DISPLAY_SSD1351                // [DisplayModel 9]
// //      #define USE_DISPLAY_RA8876                 // [DisplayModel 10] [I2cDriver39] (Touch)
//   #endif  // USE_NRF24
// #endif  // USE_SPI

// -- Serial sensors ------------------------------
//#define USE_MHZ19                                // Add support for MH-Z19 CO2 sensor (+2k code)
//#define USE_SENSEAIR                             // Add support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
//#define USE_PMS5003                              // Add support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
//#define USE_NOVA_SDS                             // Add support for SDS011 and SDS021 particle concentration sensor (+0k7 code)
//#define USE_HPMA                                 // Add support for Honeywell HPMA115S0 particle concentration sensor (+1k4)
//#define USE_SERIAL_BRIDGE                        // Add support for software Serial Bridge (+1k1 code)
//#define USE_MP3_PLAYER                           // Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
//#define USE_AZ7798                               // Add support for AZ-Instrument 7798 CO2 datalogger (+1k6 code)
//#define USE_PN532_HSU                            // Add support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
//  #define USE_PN532_CAUSE_EVENTS                 // Cause event execution for PN532_UID= and PN532_DATA=[if defined] (+ 30 bytes code)
  #define USE_PN532_DATA_FUNCTION                // Add sensor40 command support for erase, setting data block content (+1k7 code, 388 bytes mem)
  #define USE_PN532_DATA_RAW                     // Allow DATA block to be used by non-alpha-numberic data (+ 80 bytes code, 48 bytes ram)
//#define USE_RDM6300                              // Add support for RDM6300 125kHz RFID Reader (+0k8)
//#define USE_IBEACON                              // Add support for bluetooth LE passive scan of ibeacon devices (uses HM17 module)
//#define USE_HM10                                 // Add support for HM-10 as a BLE-bridge for the LYWSD03 (+5k1 code)
//#define USE_HRXL                                 // Add support for MaxBotix HRXL-MaxSonar ultrasonic range finders (+0k7)

// Power monitoring sensors -----------------------
// #undef USE_ENERGY_SENSOR                         // Disable energy sensors (-14k code)
// #define USE_ENERGY_MARGIN_DETECTION              // Add support for Energy Margin detection (+1k6 code)
// //  #define USE_ENERGY_POWER_LIMIT                 // Add additional support for Energy Power Limit detection (+1k2 code)
// #define USE_PZEM004T                             // Add support for PZEM004T Energy monitor (+2k code)
// #define USE_PZEM_AC                              // Add support for PZEM014,016 Modbus Energy monitor (+1k1 code)
// //#define USE_PZEM_DC                              // Add support for PZEM003,017 Modbus Energy monitor (+1k1 code)
// #define USE_MCP39F501                            // Add support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
//#define USE_SDM120                             // Add support for Eastron SDM120-Modbus energy monitor (+1k1 code)
//#define USE_SDM630                             // Add support for Eastron SDM630-Modbus energy monitor (+0k6 code)
//#define USE_DDS2382                              // Add support for Hiking DDS2382 Modbus energy monitor (+0k6 code)
//#define USE_DDSU666                              // Add support for Chint DDSU666 Modbus energy monitor (+0k6 code)
//#define USE_SOLAX_X1                             // Add support for Solax X1 series Modbus log info (+4k1 code)
//#define USE_LE01MR                               // Add support for F&F LE-01MR modbus energy meter

// -- Low level interface devices -----------------
//#define USE_DHT                                   // Disable support for DHT11, AM2301 (DHT21, DHT22, AM2302, AM2321) and SI7021 Temperature and Humidity sensor

//#define USE_MAX31855                              // Disable MAX31855 K-Type thermocouple sensor using softSPI

// -- IR Remote features --------------------------
//#define USE_IR_REMOTE_FULL                       // Activate all protocols from IRremoteESP8266 - activating this option will ignore all other USE_IR_REMOTE_* options and set them all to active
//#define USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k3 code, 0k3 mem, 48 iram)
  #define USE_IR_SEND_NEC                        // Support IRsend NEC protocol
  #define USE_IR_SEND_RC5                        // Support IRsend Philips RC5 protocol
  #define USE_IR_SEND_RC6                        // Support IRsend Philips RC6 protocol

// #define USE_IR_RECEIVE                         // Support for IR receiver (+7k2 code, 264 iram)
    #define IR_RCV_BUFFER_SIZE      100          // Max number of packets allowed in capture buffer (default 100 (*2 bytes ram))
    #define IR_RCV_TIMEOUT          15           // Number of milli-Seconds of no-more-data before we consider a message ended (default 15)
    #define IR_RCV_MIN_UNKNOWN_SIZE 6            // Set the smallest sized "UNKNOWN" message packets we actually care about (default 6, max 255)

// -- Zigbee interface ----------------------------
#define USE_ZIGBEE                                // Enable serial communication with Zigbee CC2530 flashed with ZNP (+49k code, +3k mem)
  #define USE_ZIGBEE_PANID  0x1A63                // arbitrary PAN ID for Zigbee network, must be unique in the home
  #define USE_ZIGBEE_EXTPANID 0xCCCCCCCCCCCCCCCCL // arbitrary extended PAN ID
  #define USE_ZIGBEE_CHANNEL  11                  // Zigbee Channel (11-26)
  #define USE_ZIGBEE_PRECFGKEY_L 0x0F0D0B0907050301L  // note: changing requires to re-pair all devices
  #define USE_ZIGBEE_PRECFGKEY_H 0x0D0C0A0806040200L  // note: changing requires to re-pair all devices
  #define USE_ZIGBEE_PERMIT_JOIN false           // don't allow joining by default
  #define USE_ZIGBEE_COALESCE_ATTR_TIMER 350     // timer to coalesce attribute values (in ms)


// ------------------------------------------------

//#define USE_SR04                                 // Add support for HC-SR04 ultrasonic devices (+1k code)

//#define USE_TM1638                               // Add support for TM1638 switches copying Switch1 .. Switch8 (+1k code)
//#define USE_HX711                                // Add support for HX711 load cell (+1k5 code)
  #define USE_HX711_GUI                          // Add optional web GUI to HX711 as scale (+1k8 code)

//#define USE_TX20_WIND_SENSOR                     // Add support for La Crosse TX20 anemometer (+2k6/0k8 code)
//#define USE_TX23_WIND_SENSOR                     // Add support for La Crosse TX23 anemometer (+2k7/1k code)

//#define USE_RC_SWITCH                            // Add support for RF transceiver using library RcSwitch (+2k7 code, 460 iram)

//#define USE_RF_SENSOR                            // Add support for RF sensor receiver (434MHz or 868MHz) (+0k8 code)
//  #define USE_THEO_V2                            // Add support for decoding Theo V2 sensors as documented on https://sidweb.nl using 434MHz RF sensor receiver (+1k4 code)
//  #define USE_ALECTO_V2                          // Add support for decoding Alecto V2 sensors like ACH2010, WS3000 and DKW2012 using 868MHz RF sensor receiver (+1k7 code)

//#define USE_HRE                                  // Add support for Badger HR-E Water Meter (+1k4 code)
//#define USE_A4988_STEPPER                        // Add support for A4988 stepper-motor-driver-circuit (+10k5 code)

//#define USE_TASMOTA_SLAVE                        // Add support for Arduino Uno/Pro Mini via serial interface including flashing (+2k3 code, 44 mem)

#endif  // CUSTOM_CONFIG_ZIGBEE ******************************************************************
/*
 ______   _______ __________________ _______  _______          
(  ___ \ (  ___  )\__   __/\__   __/(  ____ \(  ____ )|\     /|
| (   ) )| (   ) |   ) (      ) (   | (    \/| (    )|( \   / )
| (__/ / | (___) |   | |      | |   | (__    | (____)| \ (_) / 
|  __ (  |  ___  |   | |      | |   |  __)   |     __)  \   /  
| (  \ \ | (   ) |   | |      | |   | (      | (\ (      ) (   
| )___) )| )   ( |   | |      | |   | (____/\| ) \ \__   | |   
|/ \___/ |/     \|   )_(      )_(   (_______/|/   \__/   \_/   */

#ifdef CUSTOM_CONFIG_BATTERY  // *******************************************************************

#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "battery"

#define MODULE                 TUYA_DIMMER      // [Module] Defined TuyaMCU (54) as default

#undef WIFI_SCAN_AT_RESTART                
#define WIFI_SCAN_AT_RESTART   false             // [SetOption56] Scan wifi network at restart for configured AP's
#undef WIFI_SCAN_REGULARLY    
#define WIFI_SCAN_REGULARLY    false             // [SetOption57] Scan wifi network every 44 minutes for configured AP's
#undef APP_DISABLE_POWERCYCLE
#define APP_DISABLE_POWERCYCLE true             // [SetOption65] Disable fast power cycle detection for device reset

#undef OTA_URL
#define OTA_URL                "do not use OTA update"  // [OtaUrl]

#define USE_HOME_ASSISTANT                       // Enable Home Assistant Discovery Support (+7k code)
#define USE_DOMOTICZ                             // Enable Domoticz (+6k code, +0.3k mem)

#define USE_WEBSERVER                            // Enable web server and Wifi Manager (+66k code, +8k mem)
  #define USE_JAVASCRIPT_ES6                     // Enable ECMAScript6 syntax using less JavaScript code bytes (fails on IE11)

#define USE_RULES                                // Add support for rules (+4k4 code)
#define USE_TUYAMCU

#define USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)


#endif  // CUSTOM_CONFIG_BATTERY *******************************************************************

#ifdef CUSTOM_CONFIG_MEGA  // ******************************************************************
#warning **** Removed some defines to save code space ****

#undef USE_ARDUINO_OTA                          // Disable support for Arduino OTA (+13k code)
#def USE_DOMOTICZ                             // Disable Domoticz (+6k code, +0.3k mem)
#def USE_HOME_ASSISTANT                       // Disable Home Assistant Discovery Support (+7k code)

#undef USE_MQTT_TLS                             // Use TLS for MQTT connection (+34.5k code, +7.0k mem and +4.8k additional during connection handshake)
  #undef USE_MQTT_TLS_CA_CERT                   // Force full CA validation instead of fingerprints, slower, but simpler to use (+2.2k code, +1.9k mem during connection handshake)
  #undef USE_MQTT_TLS_FORCE_EC_CIPHER           // Force Elliptic Curve cipher (higher security) required by some servers (automatically enabled with USE_MQTT_AWS_IOT) (+11.4k code, +0.4k mem)
  #undef USE_MQTT_AWS_IOT                       // Enable MQTT for AWS IoT - requires a private key (+11.9k code, +0.4k mem)

#undef USE_KNX                                  // Disable KNX IP Protocol Support (+9.4k code, +3k7 mem)
#def USE_WEBSERVER
#def USE_JAVASCRIPT_ES6                       // Disable ECMAScript6 syntax using less JavaScript code bytes (fails on IE11)
#def USE_WEBSEND_RESPONSE                     // DIsable command WebSend response message (+1k code)
#def USE_EMULATION_HUE                        // Disable Hue Bridge emulation for Alexa (+18k code, +2k mem)
#def USE_EMULATION_WEMO                       // Disable Belkin WeMo emulation for Alexa (+18k code, +2k mem)
#undef USE_DISCOVERY                            // Disable mDNS for the following services (+8k code, +0.3k mem)
#def USE_TIMERS                               // Disable support for up to 16 timers (+2k2 code)
#def USE_TIMERS_WEB                           // Disable timer webpage support (+4k5 code)
#def USE_SUNRISE                              // Disable support for Sunrise and sunset tools (+16k)

#def USE_RULES                                // Disable support for rules (+4k4 code)
  #undef USE_EXPRESSION                         // Disable support for expression evaluation in rules (+3k2 code, +64 bytes mem)
    #undef SUPPORT_IF_STATEMENT                 // Disable support for IF statement in rules (+4k2 code, -332 bytes mem)
  #undef SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)

#undef USE_SCRIPT                               // Disable support for script
  #undef USE_SCRIPT_FATFS                       // Disable support for script storage on SD card (+12k code, +4k mem)

#undef ROTARY_V1                                // Disable support for MI Desk Lamp
#def USE_SONOFF_RF                            // Add support for Sonoff Rf Bridge
  #def USE_RF_FLASH                           // Add support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB (+3k code)
#def USE_SONOFF_SC                            // Disable support for Sonoff Sc (+1k1 code)
#undef USE_TUYA_MCU                             // Disable support for Tuya Serial Dimmer
#undef USE_ARMTRONIX_DIMMERS                    // Disable support for Armtronix Dimmers (+1k4 code)
#undef USE_PS_16_DZ                             // Disable support for PS-16-DZ Dimmer (+2k code)
#undef USE_SONOFF_IFAN                          // Disable support for Sonoff iFan02 and iFan03 (+2k code)
#def USE_BUZZER                               // Disable support for a buzzer (+0k6 code)
#undef USE_ARILUX_RF                            // Disable support for Arilux RF remote controller (+0k8 code, 252 iram (non 2.3.0))
#undef USE_SHUTTER                              // Disable Shutter support for up to 4 shutter with different motortypes (+6k code)
#def USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
#undef USE_EXS_DIMMER                           // Add support for ES-Store WiFi Dimmer (+2k6 code)
#def USE_HOTPLUG                              // Add support for HotPlug
#undef USE_DEVICE_GROUPS                        // Add support for device groups (+4k code)
#undef USE_PWM_DIMMER                           // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+4k5 code)
  #undef USE_PWM_DIMMER_REMOTE                  // Add support for remote switches to PWM Dimmer, also adds device groups support (+0k7 code, also includes device groups)
#undef USE_KEELOQ                               // Add support for controling Jarolift rollers by Keeloq algorithm
#undef USE_SONOFF_D1                            // Add support for Sonoff D1 Dimmer

// -- Optional light modules ---------------------
#def USE_WS2812                               // Disable WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //
  #undef USE_WS2812_DMA                         // Disable DMA supports only GPIO03 (= Serial RXD) (+1k mem). When USE_WS2812_DMA is enabled expect Exceptions on Pow
  #undef USE_WS2812_HARDWARE                    // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106)
  #undef USE_WS2812_CTYPE                       // WS2812 Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
#def USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1 and Ailight
#def USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
#def USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
#def USE_SONOFF_L1                            // Add support for Sonoff L1 led control
#def USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller

#def USE_COUNTER                              // Disable counters
#undef USE_ADC_VCC

#def USE_DS18x20                              // Disable support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)
  #undef W1_PARASITE_POWER                      // If using USE_DS18x20 then optimize for parasite powered sensors

#def USE_I2C                                  // Disable I2C using library wire (+10k code, 0k2 mem, 124 iram)
#def USE_SHT                                  // Disable SHT1X sensor (+1k4 code)
#def USE_HTU                                  // Disable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
#def USE_BMP                                  // Disable BMP085/BMP180/BMP280/BME280 sensor (I2C address 0x76 or 0x77) (+4k code)
  #def USE_BME680                             // Disable support for BME680 sensor using Bosch BME680 library (+4k code)
#def USE_BH1750                               // Disable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
#def USE_VEML6070                             // Disable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+0k5 code)
#def USE_ADS1115                              // Disable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
#def USE_INA219                               // Disable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
#def USE_INA226                               // Disable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
#def USE_SHT3X                                // Disable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
#def USE_TSL2561                              // Disable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
#def USE_TSL2591                              // Disable TSL2591 sensor (I2C address 0x29, 0x39 or 0x49) using library Adafruit_TSL2591 (+2k3 code)
#def USE_MGS                                  // Disable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
#def USE_SGP30                                // Disable SGP30 sensor (I2C address 0x58) (+1k1 code)
#def USE_SI1145                               // Disable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
#def USE_LM75AD                               // Disable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
#def USE_APDS9960                             // Disable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
#def USE_MCP230xx                             // Disable MCP23008/MCP23017 for GP INPUT ONLY (I2C addresses 0x20 - 0x27) providing command Sensor29 for configuration (+2k2 code)
#def USE_PCA9685                              // Disable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
#def USE_MPR121                               // Disable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
#def USE_CCS811                               // Disable CCS811 sensor (I2C address 0x5A) (+2k2 code)
#def USE_MPU6050                              // Disable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+2k6 code)
#def USE_DS3231                               // Disable DS3231 external RTC in case no Wifi is avaliable. See docs in the source file (+1k2 code)
//  #undef USE_RTC_ADDR  0x68                     // Default I2C address 0x68
#def USE_MGC3130                              // Disable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
#def USE_MAX44009                             // Disable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
#def USE_SCD30                                // Disable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
#def USE_SPS30                                // Disable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
#def USE_ADE7953                              // Disable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
#def USE_VL53L0X                              // Disable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
#def USE_MLX90614                             // Disable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
#def USE_CHIRP                                // Disable CHIRP soil moisture sensor (variable I2C address, default 0x20)
#def USE_PAJ7620                              // Disable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
#def USE_PCF8574                              // Disable PCF8574 I/O Expander (I2C addresses 0x20 - 0x27 and 0x38 - 0x3F) (+1k9 code)
#def USE_HIH6                                 // Disable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
#def USE_DHT12                                // Disable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
#def USE_DS1624                               // Disable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F)
#def USE_AHT1x                                // Disable AHT10/15 humidity and temperature sensor (I2C address 0x38) (+0k8 code)
#def USE_WEMOS_MOTOR_V1                       // Disable Wemos motor driver V1 ()
#def USE_HDC1080                              // Disable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)

#def USE_MHZ19                                // Disable support for MH-Z19 CO2 sensor (+2k code)
#def USE_SENSEAIR                             // Disable support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
#def USE_PMS5003                              // Disable support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
#def USE_NOVA_SDS                             // Disable support for SDS011 and SDS021 particle concentration sensor (+0k7 code)
#def USE_HPMA                                 // Disable support for Honeywell HPMA115S0 particle concentration sensor (+1k4)
#undef USE_SERIAL_BRIDGE                        // Disable support for software Serial Bridge (+0k8 code)
#undef USE_MP3_PLAYER                           // Disable Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
#def USE_AZ7798                               // Disable support for AZ-Instrument 7798 CO2 datalogger (+1k6 code)
#def USE_PN532_HSU                            // Disable support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
  #undef USE_PN532_CAUSE_EVENTS                 // Cause event execution for PN532_UID= and PN532_DATA=[if defined] (+ 30 bytes code)
  #undef USE_PN532_DATA_FUNCTION                // Disable sensor40 command support for erase, setting data block content (+1k7 code, 388 bytes mem)
  #undef USE_PN532_DATA_RAW                     // Allow DATA block to be used by non-alpha-numberic data (+ 80 bytes code, 48 bytes ram)
#def USE_RDM6300                              // Disable support for RDM6300 125kHz RFID Reader (+0k8)
#def USE_IBEACON                              // Disable support for bluetooth LE passive scan of ibeacon devices (uses HM17 module)
#def USE_GPS                                  // Disable support for GPS and NTP Server for becoming Stratus 1 Time Source (+ 3.1kb flash, +132 bytes RAM)
  #undef USE_FLOG                               // Disable support for GPS logging in OTA's Flash (Experimental) (+ 2.9kb flash, +8 bytes RAM)
#undef USE_HM10                                 // Disable support for HM-10 as a BLE-bridge for the LYWSD03 (+5k1 code)
#undef USE_HRXL                                 // Disable support for MaxBotix HRXL-MaxSonar ultrasonic range finders (+0k7)

// Power monitoring sensors ----------------------
#def USE_ENERGY_MARGIN_DETECTION              // Disable support for Energy Margin detection (+1k6 code)
  #undef USE_ENERGY_POWER_LIMIT                 // Disable additional support for Energy Power Limit detection (+1k2 code)
#def USE_PZEM004T                             // Disable support for PZEM004T Energy monitor (+2k code)
#def USE_PZEM_AC                              // Disable support for PZEM014,016 Energy monitor (+1k1 code)
#def USE_PZEM_DC                              // Disable support for PZEM003,017 Energy monitor (+1k1 code)
#def USE_MCP39F501                            // Disable support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
#undef USE_SDM120                               // Disable support for Eastron SDM120-Modbus energy monitor (+1k1 code)
#undef USE_SDM630                               // Disable support for Eastron SDM630-Modbus energy monitor (+0k6 code)
#undef USE_DDS2382                              // Disable support for Hiking DDS2382 Modbus energy monitor (+0k6 code)
#undef USE_DDSU666                              // Disable support for Chint DDSU666 Modbus energy monitor (+0k6 code)
#undef USE_SOLAX_X1                             // Disable support for Solax X1 series Modbus log info (+4k1 code)
#undef USE_LE01MR                               // DIsable support for F&F LE-01MR modbus energy meter

// -- Low level interface devices -----------------
#def USE_DHT                                  // Disable support for DHT11, AM2301 (DHT21, DHT22, AM2302, AM2321) and SI7021 Temperature and Humidity sensor

#def USE_MAX31855                             // Disable MAX31855 K-Type thermocouple sensor using softSPI
#undef USE_MAX31865                             // Disable support for MAX31865 RTD sensors using softSPI

// -- IR Remote features --------------------------
#undef USE_IR_REMOTE_FULL                       // Activate all protocols from IRremoteESP8266 - activating this option will ignore all other USE_IR_REMOTE_* options and set them all to active
#undef USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k3 code, 0k3 mem, 48 iram)
  #undef USE_IR_SEND_NEC                        // Support IRsend NEC protocol
  #undef USE_IR_SEND_RC5                        // Support IRsend Philips RC5 protocol
  #undef USE_IR_SEND_RC6                        // Support IRsend Philips RC6 protocol

  #undef USE_IR_RECEIVE                         // Support for IR receiver (+7k2 code, 264 iram)

// -- Zigbee interface ----------------------------
#undef USE_ZIGBEE                               // Disable serial communication with Zigbee CC2530 flashed with ZNP

// ------------------------------------------------

#def USE_SR04                                 // Disable support for HC-SR04 ultrasonic devices (+1k code)

#def USE_TM1638                               // Disable support for TM1638 switches copying Switch1 .. Switch8 (+1k code)
#def USE_HX711                                // Disable support for HX711 load cell (+1k5 code)
  #undef USE_HX711_GUI                          // Disable optional web GUI to HX711 as scale (+1k8 code)

#undef USE_TX20_WIND_SENSOR                     // Disable support for La Crosse TX20 anemometer (+2k6/0k8 code)
#undef USE_TX23_WIND_SENSOR                     // Disable support for La Crosse TX23 anemometer (+2k7/1k code)

#def USE_RC_SWITCH                            // Disable support for RF transceiver using library RcSwitch (+2k7 code, 460 iram)

#def USE_RF_SENSOR                            // Disable support for RF sensor receiver (434MHz or 868MHz) (+0k8 code)
  #undef USE_THEO_V2                            // Disable support for decoding Theo V2 sensors as documented on https://sidweb.nl using 434MHz RF sensor receiver (+1k4 code)
  #undef USE_ALECTO_V2                          // Disable support for decoding Alecto V2 sensors like ACH2010, WS3000 and DKW2012 weather stations using 868MHz RF sensor receiver (+1k7 code)

#undef USE_HRE                                  // Disable support for Badger HR-E Water Meter (+1k4 code)
#undef USE_A4988_STEPPER                        // Disable support for A4988 stepper-motor-driver-circuit (+10k5 code)

#undef USE_TASMOTA_SLAVE                        // Disable support for Arduino Uno/Pro Mini via serial interface including flashing (+2k3 code, 44 mem)

//#undef DEBUG_TASMOTA_CORE                       // Disable core debug messages
//#undef DEBUG_TASMOTA_DRIVER                     // Disable driver debug messages
//#undef DEBUG_TASMOTA_SENSOR                     // DIsable sensor debug messages
//#undef DEBUG_TASMOTA_TRACE                      // Disable trace debug messages

#endif  // CUSTOM_CONFIG_MEGA *******************************************************************

/*********************************************************************************************\
 * Debug features
\*********************************************************************************************/

//#define PROFILE_XSNS_EVERY_SECOND                // Profile XsnsCall function EVERY_SECOND debug info
//#define PROFILE_XSNS_SENSOR_EVERY_SECOND         // Profile XsnsCall function EVERY_SECOND for single sensor debug info

//#define DEBUG_TASMOTA_CORE                       // Enable core debug messages
//#define DEBUG_TASMOTA_DRIVER                     // Enable driver debug messages
//#define DEBUG_TASMOTA_SENSOR                     // Enable sensor debug messages
//#define DEBUG_TASMOTA_TRACE                      // Enable trace debug messages

//#define DEBUG_THEO                               // Add debug code and add xdrv_99_debug.ino providing Exception test and RTCDump
//#define USE_DEBUG_DRIVER                         // Use xdrv_99_debug.ino providing commands CpuChk, CfgXor, CfgDump, CfgPeek and CfgPoke

#endif  // _USER_CONFIG_OVERRIDE_H_