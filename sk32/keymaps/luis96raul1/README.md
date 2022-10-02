# Luis Raul's layout for Corne

Hello there!
There are some things that you need to know before start playing with your new Corne Keyboard:

- You'll need to install MSYS software:
- <a href="https://youtu.be/mz8WG5e--jA?t=376" target="blank">Here</a> are the instructions to install it in Windows (if you are in ubuntu with `sudo python3 -m pip install qmk` and then `sudo qmk setup` it's enough) follow steps until the 12th step.
  - Then, you have to add all this folder ("myCorneKeyboardLayout") in a path like mine: `C:\Users\luis-\qmk_firmware\keyboards\crkbd\keymaps\myCorneKeyboardLayout`
- At this point you're ready to go! So, here are some usefull links:
  - <a href="https://config.qmk.fm/#/crkbd/rev1/LAYOUT_split_3x6_3" target="blank">This link</a> can help you to know the 'name' of each key that you'll probably use.
  - These 4 tutorial videos are very long, but have a lot of information (all in spanish), have carefull with some useless steps there, I recommend to see everything before starting, although it really isn't mandatory because I'm giving you the necessary steps, some more information is always useful...
    - <a href="https://youtu.be/fvP5ws_I0HU" target="blank">Part 1</a>
    - <a href="https://youtu.be/xH1Ali0g7w8" target="blank">Part 2</a>
    - <a href="https://youtu.be/mz8WG5e--jA" target="blank">Part 3</a>
    - <a href="https://youtu.be/vA32gDmvllA" target="blank">Part 4</a>
- `qmk compile -kb crkbd -km myCorneKeyboardLayout:flash` <- this is the line I use in QMK MSYS to compile and updload my layout in my keyboard, when it finish, you have to push the reset button in the PCB 2 times (recommended) or press the key between escape and enter but in the last layer.

That's all, now you can edit every layer, add or remove fuctionalities 😉

* To use accent and spanish characters is possible pressing two times de vowel or character you want: ¡¿áéíóú  
-> only on US INTERNATIONAL input language, so you'll need to install this language in your favorite OS

Also you can switch between DVORAK and QWERTY on the third layer.
