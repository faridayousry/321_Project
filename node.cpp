class node{
private:
	char character;
	int frequency;
	node* right;
	node* left;

public:
	node(char character, int freq);		// ructor

	void set_character(char character);
	void set_freq(int freq);
	void set_right_node(node* r);
	void set_left_node (node* l);
	int get_freq()  ;
	char get_character()  ;
	node* get_right_node()  ;
	node* get_left_node()  ;
	bool is_leaf()  ;
};


node :: node(char character, int freq)	// ructor
{
	character = character;
	frequency = freq;
	Left = nullptr;
	Right = nullptr;
}

void node :: set_character(char character)
{	character = character;   }

void node :: set_freq(int freq)
{	frequency = freq;	}


void node::set_right(node* r)
{	right = r;	}

void node :: set_left_node(node* l)
{	left = l;	}


int node :: get_freq()  		//should this retunt int or double?***
{	return frequency;	}

char node :: get_character()  
{	return character;	}

node* node :: get_right_node()  
{	return right;	}

node* node :: get_left_node()  
{	return left;	}

bool node :: is_leaf()  
{
	if ( (right == nullptr) && (left == nullptr) )	//check if it has no child nodes -> return true 
		return true;

	else 
		return false;
}
