# Name of the project
PROJECT_NAME = Music 

# ifdef OS
#    RM = del 
#    FixPath = $(subst /,\,$1)
#    EXEC = exe
# else
#    ifeq ($(shell uname), Linux)
#       RM = rm -rf
#       FixPath = $1
# 	  EXEC = out
#    endif
# endif

# Output Directory
BUILD = build 

# All source code files
SRC = main.c\
src/playlist_operations.c

# All test source files
TEST_SRC = src/playlist_operations.c\
test/test_playlist_operations.c\
unity/unity.c\

# All include files with header files
INC = -Iinc\
-Iunity

#Library Includes
INCLUDE_LIBS = -lcunit

#Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Documentation files
DOCUMENTATION_OUTPUT = documentation/html

# Default target build
$(PROJECT_NAME): all 

# Run the target even if matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out 

# Call 'make run' to run application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke 'make clean'
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
