#include "./includes/filler.h"
#include <stdio.h>

int	main()
{
	char *store;
	
	while(get_next_line(0,&store) > 0)
	{
		if (ft_strstr(store, "p1"))
			ft_putstr_fd("I'm Player 1", 2);
		else if (ft_strstr(store, "p2"))
			ft_putstr_fd("I'm Player 2", 2);
	}
	
	
	ft_putstr_fd(store, 2);
	
	return 0;
}
