#include "BinaryTree.h"

void BinaryTree::AddNode(int data)
{
    Node* newNode = CreateNode(data);

    if (rootNode == nullptr)
    {
        rootNode = newNode;
    }
    else
    {
        InsertNode(rootNode, newNode);
    }

}

void BinaryTree::RemoveNode(int data)
{
    if (rootNode == nullptr)
        return;

    DeleteNode(rootNode, data);
}

void BinaryTree::PrintAll()
{
    if (rootNode != nullptr)
    {
        InOrder(rootNode);
    }
}

Node* BinaryTree::CreateNode(int data)
{
    return new Node{ nullptr, nullptr, data };
}

void BinaryTree::InsertNode(Node* tree, Node* newNode)
{
    if (tree->data > newNode->data)
    {
        if (tree->left == nullptr)
        {
            tree->left = newNode;
        }
        else
        {
            InsertNode(tree->left, newNode);
        }
    }
    else if (tree->data < newNode->data)
    {
        if (tree->right == nullptr)
        {
            tree->right = newNode;
        }
        else
        {
            InsertNode(tree->right, newNode);
        }
    }

}

Node* BinaryTree::DeleteNode(Node* tree, int data)
{
    //자료를 못 찾았을때 & 재귀에서 빠져 나가는 조건
    if (tree == nullptr)
        return nullptr;

    //왼쪽 탐색
    if (tree->data > data)
    {
        tree->left = DeleteNode(tree->left, data);
    }
    //오른쪽 탐색
    else if (tree->data < data)
    {
        tree->right = DeleteNode(tree->right, data);
    }
    else
    {

        if (tree->left == nullptr && tree->right == nullptr)
        {
            delete tree;
            tree = nullptr;
        }
        else if (tree->right == nullptr)
        {
            Node* del = tree;
            tree = tree->left;
            delete del;
        }
        else if (tree->left == nullptr)
        {
            Node* del = tree;
            tree = tree->right;
            delete del;
        }
        else
        {
            Node* closedNode = FindMax(tree->left);
            tree->data = closedNode->data;
            //19지우기                              //19를 지우러 감
            tree->left = DeleteNode(tree->left, closedNode->data);
        }
    }

    return tree;
}

Node* BinaryTree::FindMax(Node* root)
{
    Node* tree = root;
    while (tree->right != nullptr)
    {
        tree = tree->right;

    }
    return tree;
}

void BinaryTree::InOrder(Node* tree)
{
    if (tree == nullptr)
        return;

    InOrder(tree->left);
    cout << tree->data << endl;
    InOrder(tree->right);
}

BinaryTree::BinaryTree()
{
    rootNode = nullptr;
}

BinaryTree::~BinaryTree()
{

}