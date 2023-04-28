CC = g++
CFLAGS = -Wno-unused-parameter -O2 -Wall -Wextra -pedantic -g -I./include
LDFLAGS =

SRCDIR = src
BUILDDIR = build
BINDIR = $(BUILDDIR)/bin
SOURCES = $(wildcard $(SRCDIR)/*.cpp) $(wildcard $(SRCDIR)/**/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SOURCES))
DIRS = $(shell find $(SRCDIR) -type d -printf "$(BUILDDIR)/%P\n")

EXECUTABLE = $(BINDIR)/MDA_ESFM

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	mkdir -p $(BINDIR)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(shell mkdir -p $(dir $@))
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILDDIR)/*.o $(EXECUTABLE)
