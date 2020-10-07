# embarcados-t1


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
