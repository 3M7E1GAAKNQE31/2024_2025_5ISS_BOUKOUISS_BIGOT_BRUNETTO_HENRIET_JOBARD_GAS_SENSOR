# Node Red section

In this folder you will find:
- nodes.json: The nodered programme that you can import to have an overview of the measures of our device
- pictures: A folder with the pictures used for this README file
- README.md: The text you are currently reading that explains how to deploy the nodered program

## How to use:

1. Ensure you have npm installed  
2. Following the installation from [node-red git repository](https://github.com/node-red/node-red), open a console and enter the following commands in order:
   ```
        git clone https://github.com/node-red/node-red.git
        cd node-red
        npm install
        npm run build
        npm i node-red-dashboard
        npm start
   ```
3. Go on ```http://127.0.0.1:1880/```
4. Import nodes.json that can be found in the current folder
5. Deploy using the upper-right button
6. Go to the dashboard with the url ```http://127.0.0.1:1880/ui/```
7. Make sure the arduino board is properly transmitting to chirpstack

## Images:

![The nodes that compose our program](https://github.com/3M7E1GAAKNQE31/2024_2025_5ISS_BOUKOUISS_BIGOT_BRUNETTO_HENRIET_JOBARD_GAS_SENSOR/partie_nodered/pictures/nodered_nodes.JPG)
The nodes that compose our program

![The graph with the measurement from our nodered UI](https://github.com/3M7E1GAAKNQE31/2024_2025_5ISS_BOUKOUISS_BIGOT_BRUNETTO_HENRIET_JOBARD_GAS_SENSOR/partie_nodered/pictures/ui_measurements.JPG)
The graph with the measurement from our nodered UI
