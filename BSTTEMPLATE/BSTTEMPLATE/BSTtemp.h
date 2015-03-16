// Kelley Stoll
// Header file for BST Template


#include <iostream>
using namespace std;


template <class T>
struct TreeNode
{
	T data;
	TreeNode<T>* left;
	TreeNode<T>* right;

};

template <class T>
class TreeType
{
public:
	TreeType(); // Constructor
	~TreeType(); // Deconstructor
	TreeType(const TreeType<T> & originalTree); // Copy Constructor
	void operator= (const TreeType<T> & originalTree); // Assignment operator

	bool IsEmpty() const;
	bool IsFull() const;
	void MakeEmpty();
	void PutItem(T item);
	void Insert(TreeNode<T>*& tree, T item);
	void Retrieve(TreeNode<T>* tree, T& item);
	void Destroy(TreeNode<T>*& tree); // Utilized in decostructor
	void CopyTree(TreeNode<T>*& copy, const TreeNode<T>* originalTree);
	void DeleteItem(T item);
	void DeleteNode(TreeNode<T>*& tree);
	void Delete(TreeNode<T>*& tree, T item);
	void GetPredecessor(TreeNode<T>* tree, T& info);
	void PrintMenu();
	void print() const;
	void print(TreeNode<T>* node, int depth) const;


	T getRootData() const;
	T GetItem(T item);


	unsigned int LengthIs();



private:
	TreeNode<T>* root; // pointer to root
	T CountNodes(TreeNode<T>* tree);


};
#include "BSTtemplate.template"