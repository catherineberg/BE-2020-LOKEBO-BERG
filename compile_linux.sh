 #!/usr/bin/bash
echo "g++ -Wall -std=c++11 -lpthread src/board.cpp src/core_simulation.cpp src/mydevices.cpp src/sketch_ino.cpp src/button.cpp -o arduino"
g++ -Wall -std=c++11 -pthread src/board.cpp src/core_simulation.cpp src/mydevices.cpp src/sketch_ino.cpp src/button.cpp -o arduino
