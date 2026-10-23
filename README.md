# Sumo-Bot
Example Code for Sumo Bot Competition

# Resources
**_Zumo 32U4 User’s Guide_**

[User Guide](https://www.pololu.com/docs/0J63/all#:~:text=We%20provide%20a%20software%20add-on%20that#:~:text=We%20provide%20a%20software%20add-on%20that)

**_Rules_**

Download SumoBots_Rules_sac2026.pdf from the repository's files.

**_Example Code_**

Download sumo_example.ino from the repository's files.

# How to Connect
**_Add Board_**
1) Install Arduino IDE 
2) Go to the File tab then preferences
3) Scroll down to show ‘Additional boards manager URLs:’ and insert this link https://files.pololu.com/arduino/package_pololu_index.json
4) Use the board manager tab on the left to search ‘Pololu’ and the drivers can then be installed
5) Use the tools tab to select the 32U4 board, and once plugged in the port: “COM5” will automatically connect

**_Installing the library_**
Use the Library Manager in version 1.8.10 or later of the Arduino software (IDE) to install this library:
1) In the Arduino IDE, open the "Tools" menu and select "Manage Libraries..."
2) Search for "Zumo32U4"
3) Click the Zumo32U4 entry in the list
4) Click "Install"
5) If you see a prompt asking to install missing dependencies, click "Install all"

**_Code Setup_**
1) Uncomment the two lines corresponding to the display you are using at the top of the program
2) Flash your code and test it out!
