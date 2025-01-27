# 2024_2025_5ISS_BOUKOUISS_BIGOT_BRUNETTO_HENRIET_JOBARD_GAS_SENSOR

<!--Install library TheThingsNetwork to compile-->

## LoRa Communication
..


## MQTT Communication
<!--Chirpstack blabla-->


## Display the measured data
Once the data was gathered on Chripstack, we wanted to subscribe and be able to see the data as they get measured.
To proceed, we were able to use two development tools to create user interfaces that would properly work with an MQTT communication: NodeRed and MIT App Inventor.

### Nodered
 
NodeRed is a low-code programming tool. 
Through it's ui add-on, it is possible to make simple interfaces.
We were able to create a web interface subscribed to the MQTT broker, displaying the sensor's data.

<img src="./partie_nodered/pictures/nodered_nodes.JPG" height="200">
<i>The nodes that compose our program</i> 
<br>
<br>
<img src="./partie_nodered/pictures/ui_measurements.JPG" height="200">
<i>The graph with the measurement from our nodered UI</i>  


### MIT App Inventor

<b>MIT App Inventor</b> is a free online tool offering a user friendly interface for android application development.
We first had a small introduction by having a led turning on and off using LoRa.
We then tried to create an interface to display the evolution of the resistance, meaning of the state of the air, through a live graph.

## PCB
