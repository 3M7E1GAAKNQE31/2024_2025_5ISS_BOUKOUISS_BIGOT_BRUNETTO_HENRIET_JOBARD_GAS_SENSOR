# Node Red section

In this folder you will find:
- node-red: A version of nodered with all appropriate dependencies (mainly ui)
- nodes.json: The nodered programme that you can import to have an overview of the measures of our device
- pictures: A folder with the pictures used for this README file

## How to use:

1. Follow the installation steps to install nodered from this [git repository](https://github.com/node-red/node-red)
2. Install nodered dashboard following [this tutoriel](https://flows.nodered.org/node/node-red-dashboard)
3. Ensure you have npm installed  
4. Make sure the arduino board is properly transmitting to chirpstack
5. Open a terminal in the folder node-red  
6. Update the dependencies using ```npm install```  
7. Build the code ```npm run build``` 
8. Run ```npm start``` 
9. Go on ```http://127.0.0.1:1880/```
10.Import nodes.json that can be found in the current folder
11. Deploy using the upper-right button
12. Go to the dashboard with the url ```http://127.0.0.1:1880/ui/```

## Images:

![The nodes that compose our program](https://github.com/3M7E1GAAKNQE31/2024_2025_5ISS_BOUKOUISS_BIGOT_BRUNETTO_HENRIET_JOBARD_GAS_SENSOR/partie_nodered/pictures/nodered_nodes.JPG)
The nodes that compose our program

![The graph with the measurement from our nodered UI](https://github.com/3M7E1GAAKNQE31/2024_2025_5ISS_BOUKOUISS_BIGOT_BRUNETTO_HENRIET_JOBARD_GAS_SENSOR/partie_nodered/pictures/ui_measurements.JPG)
The graph with the measurement from our nodered UI