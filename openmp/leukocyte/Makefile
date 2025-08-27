CC=gcc
CFLAGS=-O3
LDFLAGS=-lm

MESCHACH_DIR=../../common/meschach
AVI_DIR=../../common/avi

SRCS=leukocyte.c find_ellipse.c track_ellipse.c misc_math.c
OBJS=leukocyte.o find_ellipse.o track_ellipse.o misc_math.o
EXE=leukocyte

all: $(EXE)

$(EXE): $(OBJS) $(MESCHACH_DIR)/libmeschach.a $(AVI_DIR)/avilib.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(AVI_DIR)/avilib.o $(MESCHACH_DIR)/libmeschach.a $(LDFLAGS)

$(AVI_DIR)/avilib.o:
	$(MAKE) -C $(AVI_DIR) avilib.o

$(MESCHACH_DIR)/libmeschach.a:
	cd $(MESCHACH_DIR); ./configure --with-all
	$(MAKE) -C $(MESCHACH_DIR)

leukocyte.o: leukocyte.c $(MESCHACH_DIR)/libmeschach.a
	$(CC) $(CFLAGS) -I$(MESCHACH_DIR) -I$(AVI_DIR) -c leukocyte.c -o leukocyte.o

find_ellipse.o: find_ellipse.c $(MESCHACH_DIR)/libmeschach.a
	$(CC) $(CFLAGS) -I$(MESCHACH_DIR) -I$(AVI_DIR) -c find_ellipse.c -o find_ellipse.o

track_ellipse.o: track_ellipse.c $(MESCHACH_DIR)/libmeschach.a
	$(CC) $(CFLAGS) -I$(MESCHACH_DIR) -I$(AVI_DIR) -c track_ellipse.c -o track_ellipse.o

misc_math.o: misc_math.c $(MESCHACH_DIR)/libmeschach.a
	$(CC) $(CFLAGS) -I$(MESCHACH_DIR) -I$(AVI_DIR) -c misc_math.c -o misc_math.o

clean:
	rm -f $(EXE) $(OBJS)
	-$(MAKE) -C $(MESCHACH_DIR) realclean
	$(MAKE) -C $(AVI_DIR) clean
