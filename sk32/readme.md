# SK32 (Based on Corne Keyboard)

The SK32 keyboard works with a 32 bit ARM microcontroller that features 256KB of flash memory available.

![Captura de pantalla 2022-10-05 004347](https://user-images.githubusercontent.com/86707721/193998609-58ceed93-431c-4882-a36e-1b39f36fdfd0.png)

[Vial QMK](https://github.com/vial-kb/vial-qmk) is needed to compile for this keyboard. `This repository folder should be copy into the keyboards folder.` After setting up your build environment you can make an example for this keyboard:

```sh
make crkbd_vial_logicpgs/sk32:default
```

Keyboard Maintainer: LogicPGS [@dmedina09](https://github.com/dmedina09), [@luis96raul1](https://github.com/luis96raul1)

Even though `QMK Firmware` isn't needed more information about it can be found here:

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Features

* A split keyboard with 3x6 vertically staggered keys and 3 thumb keys
* ARM microcontroller with 256 KB
* OLED display
* [QMK](https://docs.qmk.fm/#/) Compatible
* [Vial](https://get.vial.today/) Compatible
* USB-C

## Bootloader
There are 3 ways in which you can make the keyboard enter into the bootloader:

* `Bootmagic` - Hold the key located in row 0 and colum 0 while you plug in the keyboard.
* `Reset by Key` - A Reset command (QK_BOOT) can be assigned to a keyboard key. Press the key and the keyboard will go into the bootloader.
* `Physical Push Button` - The SK32 keyboard has 2 push buttons: a reset button and a boot0 button. Press and hold the reset and boot0 buttons for 1 second. Then release reset button and after a while release the boot0 button. If the sequence is executed correctly it will make the keyboard enter into the bootloader.

Once the firmware has been uploaded press the reset button. `Remember that each half needs to be flash with the same firmware before using the keyboard to avoid future issues`.

## RGB Matrix
The SK32 keyboard supports using the RGB Matrix feature and due to its memory size all RGB effects can be used. The RGB Matrix feature is enable by default. If you want to disable some of the RGB effects simply add `//` at the beginning of the RGBeffect.

`#define ENABLE_RGB_MATRIX_CYCLE_ALL` -> To enable effect

`//#define ENABLE_RGB_MATRIX_CYCLE_ALL` -> To disable effect

## Vial
Vial is an open source GUI that allows the user to configure a keyboard without flashing the firmware everytime you want to change your layout. It also allows you to configure the RGB lighting, Macros, Tap Dance, Combos, etc.

![Captura de pantalla 2022-10-05 014754](https://user-images.githubusercontent.com/86707721/193998481-308e92c4-f2f9-4f99-a9d5-0cb6bfd61146.png)