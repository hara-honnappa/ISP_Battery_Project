# ISP_Battery_Project
A project to retrieve battery charactertistics and share via BLE to an app.

Base project used is TI's Simplelink example code for simple peripheral implementation.

Custom GATT profile called Battery Service Profile is included in PROFILES folder.

I2C driver is used to read data from battery IC via two-wire(SMBUS) communication.
