/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:50:21 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 17:49:46 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int num_of_sub(char const *string, char character) {
    int substrings = 0;
    
    while (*string) {
        if (*string != character) {
            substrings++;
            while (*string != character && *string)
                string++;
        } else {
            string++;
        }
    }
    return substrings;
}

char **ft_split(char const *s, char c) {
    int i = 0, j = 0;
    int start, end;
    char **memory;

    memory = (char **)malloc((num_of_sub(s, c) + 1) * sizeof(char *));
    if (memory == NULL)
        return NULL;

    while (s[i] != '\0') {
        if (s[i] != c) {
            start = i;
            while (s[i] != c && s[i] != '\0')
                i++;
            end = i;
            memory[j] = (char *)malloc(end - start + 1);
            if (memory[j] == NULL)
                return NULL;
            for (int k = 0; k < end - start; k++) {
                memory[j][k] = s[start + k];
            }
            memory[j][end - start] = '\0';
            j++; // Increment index for the next string
        } else {
            i++;
        }
    }
    memory[j] = NULL; // Null-terminate the array of strings
    return memory;
}

/*int main() {
    char const *s = "Hello,world,this,is,a,test";
    char c = ',';
    char **result = ft_split(s, c);

    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]); // Free each string
    }

    free(result); // Free the array of strings
    return 0;
}*/
