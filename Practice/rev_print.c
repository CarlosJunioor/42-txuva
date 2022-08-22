/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:57:43 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/19 16:29:17 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_strlen(char *str)
{
    int count;
    
    count = 0;
    while(str[count])
    {
        count++;
    }
    return (count);
}

char *ft_rev_print(char *str)
{
   int i;

   i = ft_strlen(str)-1;
   while(i >= 0)
   {
       write(1,(str+i),1);
       i--;
   }
   return (str);
}

int main(){

    ft_rev_print("abcdefg");
    write(1, "\n", 1);


}