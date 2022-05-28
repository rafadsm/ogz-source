# Open GunZ Source
This is the Open GunZ (GunZ The Duel game) source repo. It was forked from the Refined GunZ source (https://github.com/Asunaya/RefinedGunz) and updated by the International GunZ (http://igunz.net) private server developers.

# Building the source for the first time

## Windows:
Requisites:
* CMake 3.7 or later: Download the latest release from https://cmake.org/download/ under "Binary distributions." In the installer, select "Add CMake to the system PATH for all users". [Picture here](https://i.imgur.com/rQHLXX8.png).

# Launching local test client for the first time
Requisites:

* Download the server and client files.
	- [Client files](https://github.com/open-gunz/client)
	- [Server files](https://github.com/open-gunz/server)
* Replace the GunZ.exe and MatchServer.exe in their respective client/server folders, you can either build them yourself as described above or download the executables [here](https://github.com/open-gunz/ogz-source/releases)
* Change IP to `127.0.0.1` in config file --> `C:\Users\[username]\Documents\Open GunZ\config.xml`.
* In the server folder, make sure `server.ini` has these values:
  - `FREELOGINIP`, `KEEPERIP`, `DBAgentIP` set to `127.0.0.1`.
* Launch MatchServer.exe from the server folder.
* Run GunZ.exe from client folder (DO NOT USE Launcher.exe as it will downgrade to what is placed on the website for patching).
* You can also run GunZ.exe on Linux using Wine. Currently everything seems to work, but text rendering is broken and text is unreadable.
* Register a test account within the client and login.

# Contact
Feel free to post any issue in the issues section.  
You can also reach us on our discord via [this](https://discord.gg/CWjzsu5) link.

# Credits
[Crawly](https://github.com/Asunaya) (https://github.com/Asunaya/RefinedGunz)

[SuhBruh](https://github.com/suhbruh) (https://igunz.net)

[Michael Steshenko](https://github.com/Michael-Steshenko) (https://igunz.net)

ThievingSix (https://igunz.net)