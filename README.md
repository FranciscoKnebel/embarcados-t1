# embarcados-t1


## Algorithms on ARM

### Quadsort

arm-linux-gnueabi-g++ -static -fpermissive bench.c -o quadsort

build/ARM/gem5.opt emb/st_sim.py -c quadsort --cpu ARM_A15

cp m5out experiment/arm/quadsort/N -r

### Goertzel

arm-linux-gnueabi-g++ -static goertzelfilter.c -lm -o goertzel

build/ARM/gem5.opt emb/st_sim.py -c goertzel --cpu ARM_A15

cp m5out experiments/arm/goertzel/N -r

### Vector

arm-linux-gnueabi-gcc -static vector -o vector

build/ARM/gem5.opt emb/st_sim.py -c vector --cpu ARM_A15

cp m5out experiments/arm/vector/N -r
