//
// Created by Ryan on 5/5/18.
//

#include "block.h"

block::block(std::vector<std::string> newTransactions, long long int previousHash)
{
    previous_hash = previousHash;
    transactions = newTransactions;

    current_hash = hash_signature(transactions, previous_hash);

}

long long int block::getPreviousHash()
{
    return previous_hash;
}

std::vector<std::string> block::getTransactions()
{
    return transactions;
}

long long int block::getCurrentHash()
{
    return current_hash;
}

long long int block::hash_signature(std::vector<std::string> transaction, long long int previousHash)
{
    long long int hash;
    hash = 14695981039346656037;

    for(int i = 0; i < transaction.size(); i++)
    {
        for(int j = 0; j < transaction[i].length(); j++) {
            hash = hash * previousHash;
            hash = hash ^ transaction[i][j];
        }
    }

    return hash;
}