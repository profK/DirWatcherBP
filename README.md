# DirWatcherBP

This is a UE 5 plugin that adds an (eventually) device independant run-time file directory watcher to UE  Blueprints.
It has only been tested with UE 5.0.3

Installation:
Clone or copy this project into your project Plugins directory. (You may have to make one if this is your first
project plugin.)

Usage:
This plugin adds a new kind of actor called a DirWatcherListener that has a "Watched Directory" property and 4 new events.
To use, create a blueprint subclass of DirWatcherListener and set the Watched Directory.  Such subclasses will have
add itional event nodes automatically added to the node list called "Event File Added", "Event File Removed", "Event File Moved",
and "Event File Modified".  For the semantics of these events, see the efsw docs at https://github.com/SpartanJ/efsw.


IMPORTANT LIMITATIONS:
* Currently the Watched Directory must either be set as a default or in the Begin Play event. Changing it later has no effect.
* Currently only Windows is supported. Some minor build work must be done to support other platforms.
* When a file is changed, the modified time is the time the event is recieved as I have not yet found a cross-platform way to read this from the operating system.

Other projects included:
This Plugin uses the open source efsw file watching library. It is built seperately for each platform and  included as
a static library in the plugin
https://github.com/SpartanJ/efsw

