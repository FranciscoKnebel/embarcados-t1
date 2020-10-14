# embarcados-t1

## Motivação

Explorar as relações de custo-benefício nas diferentes arquiteturas e
organizações disponíveis para processadores embarcados.
Neste trabalho, consideraremos:
- a arquitetura de propósito geral ARM;
- os processadores DSP da família Blackfin;
- e os microcontroladores 8051.

Video presentation (PT-br) available at https://www.youtube.com/watch?v=Z75asXmN4AI

## Algorithms on ARM

### Quadsort

arm-linux-gnueabi-g++ -static -fpermissive bench.c -o quadsort

build/ARM/gem5.opt emb/st_sim.py -c quadsort --cpu ARM_A15

### Goertzel

arm-linux-gnueabi-gcc -static goertzelfilter.c -lm -o goertzel

build/ARM/gem5.opt emb/st_sim.py -c goertzel --cpu ARM_A15

### Vector

arm-linux-gnueabi-gcc -static vector.c -o vector

build/ARM/gem5.opt emb/st_sim.py -c vector --cpu ARM_A15
