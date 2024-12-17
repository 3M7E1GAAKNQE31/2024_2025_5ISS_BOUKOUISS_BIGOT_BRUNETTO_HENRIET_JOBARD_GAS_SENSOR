# Node Red section

In this folder you will find:
- node-red: A version of nodered with all appropriate dependencies (mainly ui)
- nodes.json: The nodered programme that you can import to have an overview of the measures of our device
- pictures: A folder with the pictures used for this README file

## How to use:

1. Ensure you have npm installed  
2. Make sure the arduino board is properly transmitting to chirpstack
3. Open a terminal in the folder node-red  
4. Update the dependencies using ```npm install```  
5. Build the code ```npm run build``` 
6. Run ```npm start``` 
7. In your browser, go to the dashboard with the url ```http://127.0.0.1:1880/ui/```
8. If nothing can be seen, you might need to use the button dpeloy in the upper right corner at ```http://127.0.0.1:1880/```

## Images:

![The nodes that compose our program](https://github.com/3M7E1GAAKNQE31/2024_2025_5ISS_BOUKOUISS_BIGOT_BRUNETTO_HENRIET_JOBARD_GAS_SENSOR/partie_nodered/pictures/nodered_nodes.JPG)
The nodes that compose our program

![The graph with the measurement from our nodered UI](https://github.com/3M7E1GAAKNQE31/2024_2025_5ISS_BOUKOUISS_BIGOT_BRUNETTO_HENRIET_JOBARD_GAS_SENSOR/partie_nodered/pictures/ui_measurements.JPG)
The graph with the measurement from our nodered UI