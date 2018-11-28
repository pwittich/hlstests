// a generic module going one to three

#include "Constants.hh"


//template<int par1, int par2, int par3>
void OneToThree(
	      const GenericData input[MAX_SIZE], // input
	      const int n_in, // number of input data 
	      GenericData out1[MAX_SIZE],  // first output
	      GenericData out2[MAX_SIZE],  // second output
	      GenericData out3[MAX_SIZE],   // third output
	      int & n_out1, // number of first output
	      int & n_out2, // number of second output
	      int & n_out3  // number of third input
	      )
//notes: * = deference pointer: value pointed to by
//		 & = address of pointer: address of
{
	constexpr int par1 = 2;
	constexpr int par2 = 3;
	constexpr int par3 = 4;
	n_out1 = 0;
	n_out2 = 0;
	n_out3 = 0;
	LOOP_1_3: for(auto i = 0; i < MAX_SIZE; ++i){

		if ( i < n_in) {
			auto tmp = input[i];
			out1[i] = par1 * tmp;
			n_out1 += 1;
			out2[i] = par2 * tmp;
			n_out2 += 1;
			out3[i] = par3 * tmp;
			n_out3 += 1;
		}
		else {
			out1[i] = 0;
			out2[i] = 0;
			out3[i] = 0;
		}

	}

	return;
}
