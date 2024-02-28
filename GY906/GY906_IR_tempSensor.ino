/*
 @file GY906_IR_tempSensor.ino
 @brief MLX90614 chip in GY909 Temperature sensor working on Aries board using GPIO simulated I2C
 @detail This demo will give ambient temperature and target temperature in degree celcius.

 * MLX90614 Datasheet: https://www.sparkfun.com/datasheets/Sensors/Temperature/MLX90614_rev001.pdf
 * ARIES Pinmap: https://vegaprocessors.in/files/PINOUT_ARIES%20V2.0_.pdf
 * Library Name : VEGA_MLX90614 by VEGA-Processor
 * 
 * **** MLX90614 Temperature Sensor ****
 
 * Connections:
 * MLX90614     Aries Board
 * VIN      -   3.3V
 * GND      -   GND
 * SDA      -   GPIO-3
 * SCL      -   GPIO-4
 * You can use any GPIO pins 
*/

#include "VEGA_MLX90614.h"
VEGA_MLX90614 mlx(3,4); // SDA , SCL

void setup()
{
  delay(2000);
  Serial.begin(115200); 
  Serial.println("+-----[ MLX90614 Temperature Sensor with VEGA ARIES Boards ]-----+");
}

void loop () {
  double temperature;
  temperature = mlx.mlx90614ReadAmbientTempC();  // This function will return ambient temperature
  Serial.print("Ambient Temp : ");
  Serial.print(temperature);
  temperature = mlx.mlx90614ReadTargetTempC();   // This function will return target temperature
  Serial.print("   Target Temp :");
  Serial.println(temperature);
  delay(500);
}
