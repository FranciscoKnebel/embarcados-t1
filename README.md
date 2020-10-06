# embarcados-t1


## Algorithms on ARM

### Quadsort

arm-linux-gnueabi-g++ -static -fpermissive bench.c -o quadsort

build/ARM/gem5.opt emb/st_sim.py -c $EXECUTABLE_NAME --cpu ARM_A15

cp m5out experiment/quadsort/N -r

### Goertzel

arm-linux-gnueabi-g++ -static goertzelfilter.c -lm -o goertzel

build/ARM/gem5.opt emb/st_sim.py -c $EXECUTABLE_NAME --cpu ARM_A15

cp m5out experiment/goertzel/N -r

### Vector

arm-linux-gnueabi-g++ -static __ -o vector

build/ARM/gem5.opt emb/st_sim.py -c $EXECUTABLE_NAME --cpu ARM_A15

cp m5out experiment/vector/N -r
