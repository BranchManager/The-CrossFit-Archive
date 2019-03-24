/*Parker Tooley
 *  * l2p2
 *   *
 *    *Only calls read once!
 *     Loads into buffer
 *      *
 *       *
 *        *This program takes the file "converted" and sticks its information
 *         in a tree. After that it requests input to find and reveal bits
 *          of said information.
 *           * */


#include "fields.h"
#include "jrb.h"
#include "jval.h"
#include "dllist.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct IP_data{
	unsigned int address[4];
	Dllist host_list;
} IP;
/**********************************************************************************
 *  *                                 Functions                                      *
 *   **********************************************************************************
 *    *           Useful mechanisms        *
 *     *************************************/

/*detect_null()
 *  * a little thing to detect when
 *   * the null char happens*/
void detect_null(char *strr){
	int i;

	for(i = 0; i < 256; i++){
		if(strr[i] == '\0'){
			printf("%s is %d long\n", strr, i);
			return;
		}

	}
	printf("IIT DON DID ACT WEIRD!!!\n");
}

/*the_boot()
 *  * An simple error funciton that prints the message given
 *   * and ends the program.*/
void the_boot(char *message){
	perror(message);
	exit(0);
}

/*int_endian_swap()
 *  *swaps endian formats for integers*/
void int_endian_swap(unsigned int *num){
	unsigned int b0,b1,b2,b3;

	b0 = (*num & 0x000000ff) << 24;
	b1 = (*num & 0x0000ff00) << 8;
	b2 = (*num & 0x00ff0000) >> 8;
	b3 = (*num & 0xff000000) >> 24;

	*num = b0 | b1 | b2 | b3;
}

/*************************************
 *  *           program specific         *
 *   *************************************/
/*load_up_JRB()
 *  * This function checks if any of the names have a subdomain
 *   * and then inputs them into the JRB, hosts*/
void load_up_JRB(JRB hosts, unsigned int IP_address[], char **names, unsigned int num_names){
	int i, letters;
	char *char_index;
	char *sub_domain;
	IP *IP_tmp;
	IP_tmp = malloc(sizeof(IP));
	IP_tmp->host_list = new_dllist();
	memcpy(IP_tmp->address, IP_address, 4*sizeof(int));

	//load pointer to IP into jval 
	//	Jval IP_jval = new_jval_v(IP_tmp);
	//
	//		//check if any of the names have a subdomain
	//			for(i = 0; i < num_names; i++){
	//					char_index = names[i];
	//							letters = 0;
	//
	//									//look through the name
	//											while(*char_index != '\0'){
	//														if(*char_index == '.' && letters == 0)//error check: if it starts with '.'
	//																		break;
	//
	//																					/*if found as a subdomain, copy the first portion over
	//																								 * to a different name and insert it into the JRB, hosts*/
	//																											if(*char_index == '.'){
	//																															sub_domain = strndup(names[i], letters*sizeof(char));
	//																																			dll_append(IP_tmp->host_list, new_jval_s(strdup(sub_domain)));
	//																																							jrb_insert_str(hosts, sub_domain, IP_jval);
	//																																											break;
	//																																														}
	//																																																	letters++;
	//																																																				char_index++;
	//																																																						}
	//																																																								dll_append(IP_tmp->host_list, new_jval_s(strdup(names[i])));
	//																																																										jrb_insert_str(hosts, names[i], IP_jval);
	//																																																											}
	//																																																												//maybe check if already in tree
	//																																																													//free stuff in different function
	//																																																													}
	//
	//																																																													/*grab_host()
	//																																																													 * This function searches through a block of the file information
	//																																																													  * to find the and store a host name and it's aliases into 
	//																																																													   * a rbt.
	//																																																													    *
	//																																																													     * Relies on:
	//																																																													      *		the_boot()
	//																																																													       *		int_endian_swap()
	//																																																													        *		load_up_JRB()*/
	//																																																													        void grab_host(long *index, long file_size, char **ptr_index, JRB hosts){
	//																																																																unsigned int IP_address[4];
	//																																																																	unsigned int num_names;
	//																																																																		unsigned int name_index = 0;
	//																																																																			char tmp, *letter;
	//																																																																				char **names;
	//																																																																					int i, char_count;
	//
	//																																																																						//Grab IP address
	//																																																																							for(i = 0; i < 4; i++){
	//																																																																									memcpy(&tmp, *ptr_index, sizeof(char));
	//																																																																											IP_address[i] = (int) tmp;
	//																																																																													IP_address[i] &= 0x0000000ff;
	//																																																																															*ptr_index += sizeof(char);
	//																																																																																}
	//																																																																																	*index += 4;
	//
	//																																																																																		//Grab number of names
	//																																																																																			memcpy(&num_names, *ptr_index, sizeof(int));
	//																																																																																				int_endian_swap(&num_names);
	//																																																																																					*ptr_index += sizeof(int);
	//																																																																																						*index += sizeof(int);
	//
	//																																																																																							names = malloc(num_names*sizeof(char*));
	//
	//																																																																																								/*
	//																																																																																									for(i = 0; i < 4; i++){
	//																																																																																											printf("%u", IP_address[i]);
	//																																																																																													if(i != 3)
	//																																																																																																printf(".");
	//																																																																																																	}
	//																																																																																																		printf("\nNum of names: %u\n", num_names);
	//																																																																																																			*/
	//
	//
	//																																																																																																				/*Grab the host aliases
	//																																																																																																					 * iterate to find name size
	//																																																																																																						 * copy name
	//																																																																																																							 * increment to next name*/
	//																																																																																																								letter = *ptr_index;
	//																																																																																																									for(name_index = 0; name_index < num_names; name_index++){
	//																																																																																																											while(*letter != '\0'){
	//																																																																																																														char_count++;
	//																																																																																																																	letter += sizeof(char);
	//																																																																																																																				if(char_count > 1000)
	//																																																																																																																								the_boot("Bad file. Couldnt find a terminating char in a reasonable amount of memory\n\0");
	//																																																																																																																										}
	//																																																																																																																												char_count++;
	//
	//																																																																																																																														names[name_index] = strdup(*ptr_index);
	//
	//																																																																																																																																*ptr_index += char_count*sizeof(char);
	//																																																																																																																																		letter = *ptr_index;
	//																																																																																																																																				*index +=char_count;
	//																																																																																																																																						char_count = 0;
	//																																																																																																																																							}
	//																																																																																																																																								
	//																																																																																																																																									load_up_JRB(hosts, IP_address, names, num_names);
	//																																																																																																																																									}
	//
	//																																																																																																																																									/**********************************************************************************
	//																																																																																																																																									 *                                     Main                                       *
	//																																																																																																																																									  *********************************************************************************/
	//																																																																																																																																									  int main(){
	//																																																																																																																																										int host_file;
	//																																																																																																																																											char *file_buffer, *ptr_index, target_name[256];
	//																																																																																																																																												char tmp_read_char[350000];
	//																																																																																																																																													size_t file_size_result;
	//																																																																																																																																														long file_size = 0, index;
	//																																																																																																																																															int i;
	//																																																																																																																																																JRB hosts, JRB_node;
	//																																																																																																																																																	Dllist dll_node;
	//																																																																																																																																																		IP *target_IP;
	//
	//																																																																																																																																																			hosts = make_jrb();
	//
	//																																																																																																																																																				//Loading file information into buffer
	//																																																																																																																																																					host_file = open("converted", O_RDONLY);
	//																																																																																																																																																						if(host_file == -1)
	//																																																																																																																																																								the_boot("File to open file\n\0");
	//
	//																																																																																																																																																									while(read(host_file, tmp_read_char, 350000*sizeof(char)) > 0){
	//																																																																																																																																																											file_size += 350000;
	//																																																																																																																																																												}
	//
	//																																																																																																																																																													lseek(host_file, 0L, 0);
	//
	//																																																																																																																																																														file_buffer = (char*)malloc(sizeof(char)*file_size);
	//																																																																																																																																																															if(file_buffer == NULL)
	//																																																																																																																																																																	the_boot("Failed to malloc buffer properly");
	//																																																																																																																																																																		read(host_file, file_buffer, file_size*sizeof(char));
	//																																																																																																																																																																			
	//
	//																																																																																																																																																																				/*
	//																																																																																																																																																																					fseek(host_file, 0, SEEK_END);
	//																																																																																																																																																																						file_size = ftell(host_file);
	//
	//
	//																																																																																																																																																																							file_size_result = fread(file_buffer, 1, file_size, host_file);
	//																																																																																																																																																																								if(file_size_result != file_size)
	//																																																																																																																																																																										the_boot("Read different amount from file then was supposed to");
	//
	//																																																																																																																																																																											fclose(host_file);
	//																																																																																																																																																																												*/
	//
	//
	//																																																																																																																																																																													//Time to grab from the buffer and load into structures
	//																																																																																																																																																																														ptr_index = file_buffer;
	//																																																																																																																																																																															index = 0;
	//
	//																																																																																																																																																																																while(index < file_size)
	//																																																																																																																																																																																		grab_host(&index, file_size, &ptr_index, hosts);
	//																																																																																																																																																																																			printf("Hosts all read in\n");
	//																																																																																																																																																																																				printf("\nEnter host name: ");
	//																																																																																																																																																																																					
	//
	//
	//																																																																																																																																																																																						/*
	//																																																																																																																																																																																							jrb_traverse(JRB_node, hosts){
	//																																																																																																																																																																																									if(JRB_node != NULL){
	//																																																																																																																																																																																												target_IP = JRB_node->val.v;
	//																																																																																																																																																																																															for(i = 0; i < 4; i++){
	//																																																																																																																																																																																																			printf("%u", target_IP->address[i]);
	//																																																																																																																																																																																																							if(i != 3)
	//																																																																																																																																																																																																												printf(".");
	//																																																																																																																																																																																																																else
	//																																																																																																																																																																																																																					printf(":");
	//																																																																																																																																																																																																																								}
	//
	//																																																																																																																																																																																																																											dll_traverse(dll_node, target_IP->host_list){
	//																																																																																																																																																																																																																															printf(" %s", jval_v(dll_node->val));
	//																																																																																																																																																																																																																																		}
	//																																																																																																																																																																																																																																					printf("   KEY = %s\n", JRB_node->key);
	//																																																																																																																																																																																																																																								detect_null(JRB_node->key.s);
	//																																																																																																																																																																																																																																										}
	//																																																																																																																																																																																																																																											}
	//																																																																																																																																																																																																																																												*/
	//
	//																																																																																																																																																																																																																																													//grab input
	//																																																																																																																																																																																																																																														while(fgets(target_name, sizeof(target_name), stdin)){
	//																																																																																																																																																																																																																																																i = 0;
	//																																																																																																																																																																																																																																																		while(target_name[i] != '\0'){
	//																																																																																																																																																																																																																																																					if(i != 0)
	//																																																																																																																																																																																																																																																									i++;
	//																																																																																																																																																																																																																																																												if(target_name[i] == '\0'){
	//																																																																																																																																																																																																																																																																if(target_name[i-1] == '\n'){
	//																																																																																																																																																																																																																																																																					target_name[i-1] = '\0';
	//																																																																																																																																																																																																																																																																										break;
	//																																																																																																																																																																																																																																																																														}
	//																																																																																																																																																																																																																																																																																		break;
	//																																																																																																																																																																																																																																																																																					}
	//																																																																																																																																																																																																																																																																																								if(i ==0)
	//																																																																																																																																																																																																																																																																																												i++;
	//																																																																																																																																																																																																																																																																																														}
	//																																																																																																																																																																																																																																																																																																//find the node
	//																																																																																																																																																																																																																																																																																																		JRB_node = jrb_find_str(hosts, target_name);
	//																																																																																																																																																																																																																																																																																																				if(JRB_node != NULL){
	//																																																																																																																																																																																																																																																																																																							target_IP = JRB_node->val.v;
	//																																																																																																																																																																																																																																																																																																										for(i = 0; i < 4; i++){
	//																																																																																																																																																																																																																																																																																																														printf("%u", target_IP->address[i]);
	//																																																																																																																																																																																																																																																																																																																		if(i != 3)
	//																																																																																																																																																																																																																																																																																																																							printf(".");
	//																																																																																																																																																																																																																																																																																																																											else
	//																																																																																																																																																																																																																																																																																																																																printf(":");
	//																																																																																																																																																																																																																																																																																																																																			}
	//
	//																																																																																																																																																																																																																																																																																																																																						//print the aliases
	//																																																																																																																																																																																																																																																																																																																																									dll_traverse(dll_node, target_IP->host_list)
	//																																																																																																																																																																																																																																																																																																																																													printf(" %s", jval_v(dll_node->val));
	//																																																																																																																																																																																																																																																																																																																																															}else
	//																																																																																																																																																																																																																																																																																																																																																		printf("Could not find the name specified\n");
	//																																																																																																																																																																																																																																																																																																																																																				printf("\n\nEnter host name: ");
	//																																																																																																																																																																																																																																																																																																																																																					}
	//																																																																																																																																																																																																																																																																																																																																																					}
	//
