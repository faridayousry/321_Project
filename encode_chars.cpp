
//class node ->DONEEE

/*class huffman_compressor 

	-read file
	-determine characters & get probabilities 
	-encode chars in binary
	-save coded chars and binaryCode table? into output file
	-compress/decompress function
*/

//-class Minheap ??

class Huffman_Compressor
{

private:
	map <char, string> binary_encoding; //maps each char with its binary encoding
	node* root;		//top of tree, (highest frequency ??***)

	//get probabilities function
	//construct huffman tree
	void encode_chars (node* root, int index, int binaryCode[]);	//takes root, position that we are in in the bin code, and where to store the code

	//functions to compute compression efficiency & ratio, and writeback into file

	//traverse tree function? (to find leaf)

public:
	//constructor(s)
	//what elseee
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Huffman_Compressor :: encode_chars (node* root, int index, int binaryCode[])
{
	// traverse left child and concatinate 0 to the binaryCode
	if ( root -> get_left_node())	//check if left child exists
	{
		binaryCode [index] = 0;
		encode_chars ( root -> get_left_node(), index+1, binaryCode);
	}

	if (root -> get_right_node()) 	  // traverse right child and concatinate 1 to the binaryCode
	{
		binaryCode [index] = 1;
		encode_chars(root->get_right_node(), index+1, binaryCode);
	}

	if (root -> is_leaf())	//if we are at the leaf; store the code in the map <char, bin_code>
	{
		int final_code;
		for (int i = 0; i < index; i++) 
			final_code += to_string (binaryCode[i]) (mesh add CONCATINATE)
		
		map <....> = binaryCode;
	}
}

