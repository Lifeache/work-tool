union vodma_reg{
	unsignd int regvalue,
	struct {
		unsigned int res1:1,
		unsigned int res2:3
	}
} vodma_reg;
