# Blinking Santa Hat with Arduino or ESP8266 and NeoPixels

How to use a Arduino Nano and NeoPixels to build a colorful blinking SantaHat with an extra NeoPixel in the Pom-Pom aka Bommel ;)
[ESP8266 / Wifi Version here](https://github.com/markusvankempen/NeoPixel-SantaHat/blob/main/ESP8266-SantaHat.md)

I wanted to build a nice Santa hat that uses colorful NeoPixels for the Christmas / New Year / Holidays.

<img src="/images/santademo.png" width="400" />

[![Demo](/images/PXL_20201206_162019472.mp4)]

Here are the materials is used.

- Arduino Nano (you use any small Arduino or ESP32)
- [NeoPixel Strip](https://www.amazon.ca/CHINLY-Individually-Addressable-Waterproof-waterproof/dp/B01LSF4QDM) - Use some water proofed once
- [Small Power Booster](https://www.aliexpress.com/item/32891706812.html)
- [Cables](https://www.amazon.ca/Elegoo-120pcs-Multicolored-Breadboard-arduino/dp/B01EV70C78/)
- [Ble Modul (optional)](https://www.amazon.ca/DSD-TECH-SH-HC-08-Transceiver-Compatible/dp/B01N4P7T0H)
- [LiPO USB Charger (optional)](https://www.amazon.ca/Lithium-Overcharge-Over-Discharge-Over-Current-Protection/dp/B07KYGL71L/)
- [Battery 500maH](https://www.amazon.ca/Fytoo-500mAh-Battery-battery-Charger/dp/B0794ZPVSX/)
- [1 Diffused NeoPixel 8mm](https://www.amazon.ca/EDGELEC-Tri-Color-Multicolor-Resistors-Included/dp/B077X95LRZ/) (optional)
- [Some heat shrink](https://www.amazon.ca/Yosawa-Pieces-Heat-Shrink-Tubing/dp/B07SPRNMD5)
- [Christmas Hat](https://www.amazon.ca/Confortable-Velvet-Christmas-Favors-Adults/dp/B07G44K67L)
- [A little on off switch] optional
- [You may also want to add Capacitor , Diode and resistor]
(https://www.mathworks.com/matlabcentral/mlcdownloads/downloads/submissions/64467/versions/2/previews/html/NeoPixelExample_Basic.html) to be proper

Of course you will need some soldering iron, cables and tape  etc.

You can find these parts on the internet at various place like AliExpress and/or Amazon etc.

![](/images/PXL_20201205_210550338.jpg)

I started building the prototype on a bread board 1st and than fit it into the hat. 

![](/images/PXL_20201206_200006135.jpg)

Once you got this working you will need to solder the cables onto the Nano. My little boster had only 3 ports Vin,Ground,Vout. I Soldered 2 male cable for the Battery (Vin,Ground) and 2 cables as bridge (Ground,Vout) to the Gnd Vin at the Nano. The Nano has one more Gnd and 5V Port which i use for the Single NeoPixel which goes into the Bommel. Note: Your can also use the end of the NeoPixel strip as a power source for the Singel PomPom like i did at the ESP8266 version.

![Wiring images](/images/SantaHatWiring.png)

![Soldering images](/images/PXL_20201207_155825910.jpg)

Important! Make sure all exposed cable ends and open contacts/ports are covered in tape or heat schrink. 

To put the single NeoPixel in the Pom-Pom - I wired the cables inside the hat and use the soldering iron to "burn" a hole into the Pom-Pom to place the NeoPixel inside.

![SantaHatAssembled](/images/SantaHatAssembled.jpg)

The Finished product

![Finished](/images/SantaHatA.png)

[![Video](/images/SantaHatBlinking.mp4)]

Code is available in the code folder of this github.

Check also [video folder](https://github.com/markusvankempen/NeoPixel-SantaHat/blob/main/videos/youtube.md) for detailed description/demos.

# The ESP8266 wifi Version is available here
[SantaWifi Hat](https://github.com/markusvankempen/NeoPixel-SantaHat/blob/main/ESP8266-SantaHat.md)


Enjoy / Cheers

Markus
