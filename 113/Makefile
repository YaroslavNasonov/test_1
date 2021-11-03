all: menu.o input_value.o input_array.o neg_count_array.o index_first_negative.o index_last_negative.o multi_between_negative.o multi_before_and_after_negative.o output_res.o
	gcc menu.o input_value.o input_array.o neg_count_array.o index_first_negative.o index_last_negative.o multi_between_negative.o multi_before_and_after_negative.o output_res.o -o menu
menu.o: menu.c input_value.h input_array.h neg_count_array.h index_first_negative.h index_last_negative.h multi_between_negative.h multi_before_and_after_negative.h output_res.h
	gcc -c menu.c
input_value.o: input_value.c input_value.h
	gcc -c input_value.c
input_array.o: input_array.c input_array.h
	gcc -c input_array.c
neg_count_array.o: neg_count_array.c neg_count_array.h
	gcc -c neg_count_array.c
index_first_negative.o: index_first_negative.c index_first_negative.h
	gcc -c index_first_negative.c
index_last_negative.o: index_last_negative.c index_last_negative.h
	gcc -c index_last_negative.c
multi_between_negative.o: multi_between_negative.c multi_between_negative.h
	gcc -c multi_between_negative.c
multi_before_and_after_negative.o: multi_before_and_after_negative.c multi_before_and_after_negative.h
	gcc -c multi_before_and_after_negative.c
output_res.o: output_res.c output_res.h
	gcc -c output_res.c
clean:
	rm -rf *.o menu
