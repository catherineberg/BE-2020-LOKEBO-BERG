#ifndef CAPTEURS_H
#define CAPTEURS_H


class actPorte: public Device {
public:
    void open();
    void close();
    bool isOpen; 
    actPorte(int s);
    int state;
    int temps;
    void run();
};

#endif
