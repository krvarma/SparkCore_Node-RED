Spark Core, Node-RED, MQTT and RG LED sample
-------------------------------------------

This sample uses MQTT to set color of RGB led. This uses OUTPUT node and Eclipse Sandbox MQTT server (iot.eclipse.org:1883). The Node-REd application listens for MQTT messages and forward to Spark Core which parses the color (in the format R,G,B) and set the LED color.

**Screenshot**

![enter image description here](https://raw.githubusercontent.com/krvarma/SparkCore_Node-RED/master/screenshots/sparkcore-nodered-rgbled.png)