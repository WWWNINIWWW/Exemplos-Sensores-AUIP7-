# Configuração dos Sensores com Arduino Uno

## Sensores Utilizados
Os seguintes sensores foram testados utilizando o Arduino Uno. \
Para utiliza-los basta acessar o codigo na pasta com nome do modelo de cada um. Todos os codigos utilizados são exemplos das proprias fabricantes com seus respectivos direitos/licença sobre os códigos.
- BME680
- GY906
- INA226
- VEML7700
- VL53L0X

### Bibliotecas
Em relação as bibliotecas, as utilizadas para cada sensor foram da propria fabricante, para instala-las e utilizar os codigos, basta procurar no Arduino IDE ou plataformIO os nomes dos modelos, lembre-se de instalar a biblioteca com todos as suas dependências.

### Conexão dos Sensores
Para os sensores que possuem pinos SLC e SDA, basta conectá-los aos pinos correspondentes do Arduino. A exceção é o sensor GY906, que possui pinos diferentes e é ligado a 3.3V, conforme descrito no código. Para o GY906, basta conectar o SDA e SCL no Arduino nos seguintes pinos: GPIO 3 e GPIO 4, respectivamente.

#### GY906: Arduino
- VCC: 3.3V
- GND: GND
- SDA: GPIO3
- SCL: GPIO4

#### DEMAIS: Arduino
- VCC: 5V
- GND: GND
- SDA: SDA
- SCL: SCL

### Uso do Sensor INA266
O sensor INA266 é capaz de medir corrente, tensão e potência. Para medir cada um desses valores, basta conectar o VCC do objeto a ser medido ao pino correspondente do sensor, conforme abaixo:

- BUS: Tensão (V) e Potência (mW)
- IN+: Corrente (mA)
