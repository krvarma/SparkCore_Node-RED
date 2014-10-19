Spark Core and Node-RED
-----------------------

Spark Core and Node-RED are great IOT tools. If these two can work together then it is more awesome. So I decided to create a simple Node-RED node for Spark Core. The node implements basic things to interact with Spark Core, such as call a function, read a variable and subscribe to events. This node defines INPUT and OUTPUT nodes. Input node can be used to call a function, read a variable and subscribe to events. The output node can be used to call a function and pass an input parameter. Following are the return values:

**Function call** 

 1. **msg.raw** contains the raw JSON string returned 
 2. **msg.payload** contains the return value of the function 
 3. **msg.id** contains the core id 
 4. **msg.name** contains the core name

**Read a Variable**

 1. **msg.raw** contains the raw JSON string returned  
 2. **msg.payload** contains the value of the variable
 3. **msg.name** contains the name of the core

**Subscribe to variables**

1. **msg.raw** contains the raw JSON string returned
2. **msg.payload** the event data
3. **msg.ttl** contains he TTL
4. **msg.published_at** contain the published date and time
5. **msg.coreid** contains the core id

**Sample Applications**

I have created two samples created. The first sample demonstrates the subscribe to events functionality and uses DHT Temperature and Humidity sensor to log data to **Xively**. This Spark Core application published temperature and humidity at particular intervals and the Node-RED application send this data to **Xively**. This uses INPUT node.

The second sample uses MQTT to set color of RGB led. This uses OUTPUT node and Eclipse Sandbox MQTT server (iot.eclipse.org:1883). The Node-REd application listens for MQTT messages and forward to Spark Core which parses the color (in the format R,G,B) and set the LED color.

**Screenshots**
