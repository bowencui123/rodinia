CC=gcc
CFLAGS=-O3
LDFLAGS=-lm

AVI_DIR=../../common/avi
SRCS=heartwall.c
OBJS=$(SRCS:.c=.o)
EXE=heartwall

.RECIPEPREFIX =>

all: $(EXE)

$(EXE): $(OBJS) $(AVI_DIR)/avilib.o $(AVI_DIR)/avimod.o
>$(CC) $(CFLAGS) -I$(AVI_DIR) -o $@ $(OBJS) $(AVI_DIR)/avilib.o $(AVI_DIR)/avimod.o $(LDFLAGS)

$(AVI_DIR)/avilib.o:
>$(MAKE) -C $(AVI_DIR) avilib.o

$(AVI_DIR)/avimod.o:
>$(MAKE) -C $(AVI_DIR) avimod.o

%.o: %.c
>$(CC) $(CFLAGS) -I$(AVI_DIR) -c $< -o $@

clean:
>rm -f $(EXE) $(OBJS)
>$(MAKE) -C $(AVI_DIR) clean
