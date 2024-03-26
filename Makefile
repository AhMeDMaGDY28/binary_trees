.PHONY: all copy make move clean run ram_checker clean2 betty
# this is a make file for 0x1D. C - Binary trees
# dont touch this
CC = gcc
OUT_FLAG = -o
CFLAGS = -Wall -Wextra -Werror -pedantic
MAIN_DEF = main.c
PRINT_TREE = binary_tree_print.c

# change once if you changed the name of the folders
# the name of the foler which have all the main files
MAIN_FOLDER_NAME = MAIN_LOCATION
# the name of the folder which have the output
OUTPUT_FOLDER_NAME = OUTPUT

# change here
NAME_NUM = 3
NAME_of_file = 3-binary_tree_delete.c
OUTPUT_NAME = 3-del
# if there is more files for the compiler
EXTRA = 0-binary_tree_node.c 2-binary_tree_insert_right.c 
# --------------------------------

MAIN_FOLDER = $(MAIN_FOLDER_NAME)/
OUTPUT_FOLDER = $(OUTPUT_FOLDER_NAME)/
# dont touch this 
NAME = $(NAME_of_file)
main_name = $(NAME_NUM)-$(MAIN_DEF)

main_READY = $(MAIN_FOLDER)$(main_name)
PRINT_READY = $(MAIN_FOLDER)$(PRINT_TREE)
run_place = $(OUTPUT_FOLDER)$(OUTPUT_NAME)
OUTPUT_NAME_FLAG = $(OUT_FLAG) $(OUTPUT_NAME)
# ----------------------------------

# some times this need to change
NEED = $(PRINT_TREE) $(main_name) $(EXTRA) $(NAME)

#functions here
all:  copy make move clean run ram_checker clean2 betty

make_folders:
	@mkdir -p $(MAIN_FOLDER_NAME)
	@mkdir -p $(OUTPUT_FOLDER_NAME)
# copying the main from folder mains
copy: make_folders
	@cp $(main_READY) .
	@cp $(PRINT_READY) .
# making the file
make: $(NEED)
	@$(CC) $(CFLAGS) $(NEED) $(OUTPUT_NAME_FLAG)

# moving the output file to folder OUT
move:
	@mv $(OUTPUT_NAME) $(OUTPUT_FOLDER)/

# deleting the main folder
clean:
	@rm -rf $(main_name)
	@rm -rf $(PRINT_TREE)
# running the out put
run:
	@./$(run_place)

ram_checker:
	valgrind ./$(run_place)
clean2:
	@rm -rf $(run_place)

betty:
	@betty $(NAME_of_file)
