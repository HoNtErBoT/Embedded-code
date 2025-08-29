# DHT11/22
The DHT11 and DHT22 are popular, low-cost digital sensors used in electronics projects to measure temperature and relative humidity. They are ideal for hobbyists and beginners due to their simplicity, requiring only a single data pin to communicate with a microcontroller like an Arduino or Raspberry Pi.

## Key Differences Between DHT11 vs. DHT22

| Feature	| DHT11 (Blue)	| DHT22 (White) |
------------- | -------------|------------|
| Temperature | Range	0°C to 50°C	| -40°C to 80°C |
Temperature Accuracy |	±2°C |	±0.5°C |
Humidity Range |	20% to 80% RH |	0% to 100% RH |
Humidity  Accuracy |	±5% RH	| ±2% RH |
Sampling Rate |	1 Hz (1 reading/sec)	| 0.5 Hz (1 reading/2 sec) |
Cost |	Lower |	Higher |

## How They Work
In simple terms, the DHT sensor works by measuring two physical properties of the air using tiny components inside its plastic shell. For humidity, it uses a small moisture-sensitive plate; as the amount of water vapor in the air changes, the electrical properties of this plate change. For temperature, it uses a special resistor called a thermistor, which changes its electrical resistance based on how hot or cold it is. A tiny chip inside the sensor constantly measures these electrical changes, converts them into digital numbers for both temperature and humidity, and then packages this information into a single digital signal that it sends down one wire to a connected microcontroller

## Summary
- Choose the DHT11 for basic projects where high precision is not critical and cost is a primary concern. It's great for simple indoor environment monitoring. 🏡
- Choose the DHT22 when you need better accuracy, a wider measurement range (especially for colder temperatures), and are willing to spend a little more. It is better suited for more serious data logging and weather station projects. 🌦️

