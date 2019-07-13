# STM8 Programming
Have you ever wanted to understand the magic that links firmware and hadware? I did.
Specifically, I wanted learn how to program a STM8S003F3 on a very low level.

It is true that there are lots of tutorials available online from were you can
learn things about the topic like the following ones:
- [Lujji's STM8 bare metal programming](https://lujji.github.io/blog/bare-metal-programming-stm8/)
- [Vdudouyt's STM8 examples](https://github.com/vdudouyt/sdcc-examples-stm8)
- [Embedonix STM8 programming](http://embedonix.com/articles/embedded-projects/getting-started-with-stm8-development-part-1-blinking-a-led/)
- [Manual for SDCC](http://sdcc.sourceforge.net/doc/sdccman.pdf)

I specially found Lujji's tutorial very useful because I wanted to write the code using
my favorite editor and compile it independently. Indeed it's an outstanding tutorial, I wouldn't have
bothered making my own, but I felt that there were some assumptions a bit to complex for
newbie to understand. Because of that, this project was started. The idea is to gather all the best
from the different tutorials that I've found and explain everything in detail so a person with basic knowledge in microcontroller programming can follow these examples without any issue.

## Necessary Software
As said before in this project the text editor and the compiler are independent. I used [Atom](https://atom.io/) as my text editor but you can use whaterver you prefer. For the compiler the [Small Device C Compiler](http://sdcc.sourceforge.net/) is used, and in this case it is neccesary to compile the files of this
project. Finally, the firmware flasher software is needed, you can choose [ST Visual Programmer](https://www.st.com/en/development-tools/stvp-stm8.html) for Windows or [STM8-flash](https://github.com/vdudouyt/stm8flash) for Unix devices.

I've went for this setup instead of an all-built-in software like [IAR](https://www.iar.com/) because it allows you to clearly see what is hapenning and understand better the process that is followed to program the microcontroller. And of course because it is Open Source.
