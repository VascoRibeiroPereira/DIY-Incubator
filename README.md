# RVP Didática DIY Incubator

In this repo you can learn how to make an incubator by assembling of the parts on the Bill Of Materials (BOM) and coding an Arduino Nano (or UNO - may be a better choice since it has a power socket already).

## Bill Of Materials

1. Styrofoam Box (internal dimensions: 17x25x18 cm) - recycled - 0 €
2. Sera reptil heat cable (15 W and 4 meters long) - from a local Pet Store - 15 €
3. Aluminium bar - from local hardware store - 1 €
4. Iron wire - can be made from metal clips - 1 €
5. Arduino Uno - ebay - around 4 €
6. Relay 1 ch - ebay - 1 €
7. LEDs - 100x several colours mix at ebay - 1 €
8. Jumper wires - 65 at ebay - 1 €
9. 2x Breadboard - ebay - 4 €
10. Resistors - 500 pack at ebay - 3 €
11. AC-DC adapter - from local hardware store - 5 €
12. NTC100K - salvaged from an old 3D printer, from: [Here](https://www.reprap-3d-printer.com/product/335-thermistor-ntc100k) - 1€

### Project expected budget - 37 €

## Fritzing and Incubator photos

![Fritzing](/images/NTC100K_Incubator.jpg)   
Fritzing - all the electronic parts must respect this scheme   

![Incubator](/images/incubator.jpg)   
Incubator   

![Incubator with petri](/images/incubator2.jpg)   
Incubator with our first test   

![Petri Dish](/images/petridish.jpg)   
First test - over night growth of *Lactobacillus*   

## Arduino Code

You must have the arduino IDE to upload this code to the UNO.
Download [Here](https://www.arduino.cc/en/Main/Software)

Code in [Here]()

## Notes

- Always test the code and check in the serial monitor the temperature and its fluctuations.   
- We have compared the temperature with a calibrated thermometer, placed close to the NTC100K sensor for one day (under supervision), and verified that the code worked correctly (i.e. if you supply too much voltage to the arduino it may behave strangely).   
- Be careful with the AC parts of the relay - **it must not** touch you or a metal surface.   
- Test, test, test, before leaving the incubator unattended.   
