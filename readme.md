## Flappy Bird

[A detailed Chinese report for this project](https://github.com/jiangshibiao/pumpkinBattle/blob/master/ChineseReport/report.md)

## Project Introduction
+ This is my final report for the Computer Design course in Zhejiang University.
+ For the whole Computer Design class, I built up an simple CPU graudally. Then I wrote some  assemble codes to simulate the popular game **Flappy Bird** and run the corresponding machine codes on my own CPU.
+ The Player will control a bird to hide from the pipes and finally reach the end.

## How to play?
+ Build up a new Xilinx ISE project and add files from [files].
+ Build the [Top.bit](https://github.com/jiangshibiao/Flappy_bird/blob/master/files/Top.bit) and load it on the tablet to play!

## Player Instructions
+ Use the *space* to jump and use the *enter* to drop quicky (just as the flappy bird!).
+ The speed will be accelerated gradually, so the difficulty will increase.
+ When the player switches up `SW[2]`, the game will suspend.
+ It will change to the debug mode if the player switches up  `SW[8]`.
+ The Nixie Tube will display the real-time scores you get.

## Some Screenshots
#### Game interface
![](https://github.com/jiangshibiao/Flappy_bird/blob/master/ChineseReport/0.jpg)
#### Dead
![](https://github.com/jiangshibiao/Flappy_bird/blob/master/ChineseReport/dead.jpg)