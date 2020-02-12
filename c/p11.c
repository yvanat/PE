#include "p.h"

int	main(void)
{
	char	*grid;
	int		new_grid[400];
	int		i;
	int		j;
	double	prod;
	double	res;

	grid = "08022297381500400075040507785212507791084949994017811857608717409843694804566200814931735579142993714067538830034913366552709523046011426924685601325671370236912231167151676389419236542240402866331380244732609903450244753353783684203517125032988128642367102638406759547066183864706726206802621220956394396308409166499421245558056673992697177878968314883489637221362309750076442045351400613397343133957817532822753167159403800462161409535692163905429635314755588824001754243629855786560048357189070544443744602158515417581980816805944769287392138652177704895540045208839735991607975732162626793327986688366887576220720346336746551232639353690442167338253911249472180846293240627636206936417230238834629969826759857404361620733529783190017431497148868116235705540170547183515469169233486143520189196748";
	i = -1;
	while (++i < 20)
	{
		j = -1;
		while (++j < 20)
			new_grid[i * 20 + j] = (grid[i * 40 + j * 2] - 48) * 10 + grid[i * 40 + j * 2 + 1] - 48;
	}
	res = 0;
	i = -1;
	while (++i < 20)
	{
		j = -1;
		while (++j < 17)
		{
			prod = 1;
			prod = new_grid[i * 20 + j] * new_grid[i * 20 + j + 1] * new_grid[i * 20 + j + 2] * new_grid[i * 20 + j + 3];
			if (prod > res)
				res = prod;
		}
	}
	i = -1;
	while (++i < 17)
	{
		j = -1;
		while (++j < 20)
		{
			prod = 1;
			prod = new_grid[i * 20 + j] * new_grid[(i + 1) * 20 + j] * new_grid[(i + 2) * 20 + j] * new_grid[(i + 3) * 20 + j];
			if (prod > res)
				res = prod;
		}
	}
	i = -1;
	while (++i < 17)
	{
		j = -1;
		while (++j < 17)
		{
			prod = 1;
			prod = new_grid[i * 20 + j] * new_grid[(i + 1) * 20 + j + 1] * new_grid[(i + 2) * 20 + j + 2] * new_grid[(i + 3) * 20 + j + 3];
			if (prod > res)
				res = prod;
		}
	}
	i = -1;
	while (++i < 17)
	{
		j = 2;
		while (++j < 20)
		{
			prod = 1;
			prod = new_grid[i * 20 + j] * new_grid[(i + 1) * 20 + j - 1] * new_grid[(i + 2) * 20 + j - 2] * new_grid[(i + 3) * 20 + j - 3];
			if (prod > res)
				res = prod;
		}
	}
	printf("prod = %f\n", res);
	return (0);
}