 #!/usr/bin/bash
echo "g++ -Wall -std=c++11 -lpthread src/board.cpp src/core_simulation.cpp src/mydevices.cpp src/sketch_ino.cpp src/button.cpp src/porte.cpp -o arduino"
g++ -Wall -std=c++11 -pthread src/board.cpp src/core_simulation.cpp src/mydevices.cpp src/sketch_ino.cpp src/button.cpp src/porte.cpp src/IRsensor.cpp src/capteur.cpp src/chargeur.cpp src/battery.cpp src/actPorte.cpp src/ledc.cpp -o arduino
