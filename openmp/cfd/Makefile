CC = g++
CFLAGS = -O2
LDFLAGS = -lm

TARGETS = euler3d_cpu euler3d_cpu_double pre_euler3d_cpu pre_euler3d_cpu_double

.PHONY: all clean

all: $(TARGETS)

euler3d_cpu: euler3d_cpu.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

euler3d_cpu_double: euler3d_cpu_double.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

pre_euler3d_cpu: pre_euler3d_cpu.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

pre_euler3d_cpu_double: pre_euler3d_cpu_double.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f $(TARGETS) density momentum density_energy

