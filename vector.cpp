#include<iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> print_this);
vector<int> copy_cat(vector<int> copy_this);
int vector_sum(vector<int> sum_this);
vector<int> init_vector(int max);

int main()
{
    const int max_val = 5;
	vector<int> nums;
	nums = init_vector(max_val);
    print_vector(nums);

    cout << "Press enter to continue...";
    cin.get();

    // Double the list
    nums = copy_cat(nums);
    print_vector(nums);

    // Sum up some stuff
    cout << "List sum: " << vector_sum(nums) << endl;
    cout << "Should be " << max_val * (max_val + 1) << endl;

    return 0;
}

vector<int> init_vector(int max)
{
	vector<int> some_numbers;
	
	// Add some numbers to the vector
    for(int i = 1; i <= max; i++)
    {
        some_numbers.push_back(i);
    }
    return some_numbers;
}

void print_vector(vector<int> print_this)
{
	int i = 0;
	while(print_this.size())
	{
		cout << print_this[i];
		cout << '\n';
		i++;
	}	
	return;
}

vector<int> copy_cat(vector<int> copy_this)
{
	vector<int> copy_here(copy_this.size()*2);
	for(int i = 0; i < copy_here.size();i)
	{
		copy_here[i] = copy_this[i%5];
	}
	return copy_here;
}

int vector_sum(vector<int> sum_this)
{
	int my_sum = 0;
	for(int i=0; i <= sum_this.size(); i++){
		my_sum += sum_this[i];
	}
	return my_sum;
}
