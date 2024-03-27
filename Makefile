.PHONY: name_maker all copy need_maker make move clean run ram_checker clean2 betty
# this is a make file for 0x1D. C - Binary trees


# change once if you changed the name of the folders
# the name of the foler which have all the main files
MAIN_FOLDER_NAME = MAIN_LOCATION
# the name of the folder which have the output
OUTPUT_FOLDER_NAME = OUTPUT
#remember the out put every time gets deleted after using

# dont touch this
CC = gcc
OUT_FLAG = -o
CFLAGS = -Wall -Wextra -Werror -pedantic
MAIN_DEF = main.c
PRINT_TREE = binary_tree_print.c
T0_NAME = 0-binary_tree_node.c
T1_NAME = 1-binary_tree_insert_left.c
T2_NAME = 2-binary_tree_insert_right.c
T3_NAME = 3-binary_tree_delete.c
T4_NAME = 4-binary_tree_is_leaf.c
T5_NAME = 5-binary_tree_is_root.c
T6_NAME = 6-binary_tree_preorder.c
T7_NAME = 7-binary_tree_inorder.c
T8_NAME = 8-binary_tree_postorder.c
T9_NAME = 9-binary_tree_height.c
T10_NAME = 10-binary_tree_depth.c
T11_NAME = 11-binary_tree_size.c
T12_NAME = 12-binary_tree_leaves.c
T13_NAME = 13-binary_tree_nodes.c
T14_NAME = 14-binary_tree_balance.c
T15_NAME = 15-binary_tree_is_full.c
T16_NAME = 16-binary_tree_is_perfect.c
T17_NAME = 17-binary_tree_sibling.c
T18_NAME = 18-binary_tree_uncle.c
T100_NAME = 100-binary_trees_ancestor.c
T101_NAME = 101-binary_tree_levelorder.c
T102_NAME = 102-binary_tree_is_complete.c
T103_NAME = 103-binary_tree_rotate_left.c
T104_NAME = 104-binary_tree_rotate_right.c
T110_NAME = 110-binary_tree_is_bst.c
T111_NAME = 111-bst_insert.c
T112_NAME = 112-array_to_bst.c
T113_NAME = 113-bst_search.c
T114_NAME = 114-bst_remove.c
T120_NAME = 120-binary_tree_is_avl.c
T121_NAME = 121-avl_insert.c
T122_NAME = 122-array_to_avl.c
T123_NAME = 123-avl_remove.c
T124_NAME = 124-sorted_array_to_avl.c
T130_NAME = 130-binary_tree_is_heap.c
T131_NAME = 131-heap_insert.c
T132_NAME = 132-array_to_heap.c
T133_NAME = 133-heap_extract.c
T134_NAME = 134-heap_to_sorted_array.c


# change here
NAME_NUM = 7
# 0 if you need the valgrind 1 if you dont need valgeind
valgrind_need_it = 1
#extra file which is needed for compile
EXTRA = $(T0_NAME) $(T2_NAME)
# if there more files for compile
EXTRA1 = 


# after changing dont touch anything down
#------------------------

EXTRA_FULL = $(EXTRA) $(EXTRA1)


MAIN_FOLDER = $(MAIN_FOLDER_NAME)/
OUTPUT_FOLDER = $(OUTPUT_FOLDER_NAME)/
# dont touch this 
NAME = $(NAME_of_file)
main_name = $(NAME_NUM)-$(MAIN_DEF)
OUTPUT_NAME = test
main_READY = $(MAIN_FOLDER)$(main_name)
PRINT_READY = $(MAIN_FOLDER)$(PRINT_TREE)
run_place = $(OUTPUT_FOLDER)$(OUTPUT_NAME)
NAME_of_file = $(T$(NAME_NUM)_NAME)
# ----------------------------------


# this adjust the  name of the output
OUTPUT_NAME_FLAG = $(OUT_FLAG) $(OUTPUT_NAME)
NEED = $(PRINT_TREE) $(main_name) $(NAME) $(EXTRA_FULL)
OUTPUT_NAME = TEST
#functions here
all:  name_maker copy need_maker make move clean run ram_checker clean2 betty

make_folders:
	@mkdir -p $(MAIN_FOLDER_NAME)
	@mkdir -p $(OUTPUT_FOLDER_NAME)

# copying the main from folder mains

# --------------------------------
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
	@rm -rf $(LIBRARY_NAME)

# running the out put
run:
	@echo "------------------"
	@echo "   RUNING TEST"
	@echo "------------------"
	@./$(run_place)
	@echo "------------------"
	@echo "\n"

ram_checker:
ifeq ($(valgrind_need_it),0)
	@echo "------------------"
	@echo " valgrind TEST"
	@echo "------------------"
	@valgrind ./$(run_place)
	@echo "------------------"
	@echo "\n"
endif
clean2:
	@rm -rf $(run_place)
	@rm -rf *.o
betty:
	@echo "------------------"
	@echo "  BETTY TEST"
	@echo "------------------"
	@betty $(NAME_of_file)
	@echo "------------------"
	@echo "\n"
	@echo "finished all TESTS PERFECTLY"
